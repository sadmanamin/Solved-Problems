#include <bits/stdc++.h>
using namespace std;
long long n,m; 
long long dp[300005];
long long arr[300005];

int main() {
	scanf("%lld%lld",&n,&m);
	for(int c=0;c<n;c++){
		scanf("%lld",&arr[c]);
	}
	memset(dp,0,sizeof(dp));
	long long cur=0,mx=0;
	for(int c=0;c<n;c++){
		if(c>0) dp[c]=dp[c-1]-arr[c-1];
		for(int d=cur;d<n;d++,cur++){
			//cur=d;
			if(dp[c]+arr[d]>m) break;
			dp[c]+=arr[d];
			
		}
		//cout<<dp[c]<<" "<<cur<<endl;
		if(mx<dp[c]) mx=dp[c];
	}
	printf("%lld\n",mx);
	return 0;
}