#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,nn;
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		int cnt=0;
		for(int c=0;c<n;c++){
			scanf("%d",&nn);
			if(nn!=0) cnt++;
		}
		printf("%d\n",cnt);
	}
	return 0;
}