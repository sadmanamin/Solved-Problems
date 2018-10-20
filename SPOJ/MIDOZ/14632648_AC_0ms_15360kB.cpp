#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,k;
	scanf("%d",&t);
	while(t--){
		scanf("%d%d",&n,&k);
		int sum=0,nn;
		for(int c=0;c<n;c++){
			scanf("%d",&nn);
			sum+=nn/k;
		}
		cout<<sum<<endl;
	}
	return 0;
}