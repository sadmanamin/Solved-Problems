#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int t;
	scanf("%d",&t);
	while(t--){
		long n,sum=0;
		scanf("%lld",&n);
		for(int c=10;c<=n;c+=10) sum+=c;
		printf("%lld\n",sum);
	}
	return 0;
}