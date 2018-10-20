#include <bits/stdc++.h>
using namespace std;
int n,t,tc=1,k; 
long long dp[1000005];
long long arr[1000005];



long long solve(int idx){
	if(idx>=n) return 0;
	if(idx==n-1) return arr[idx];
	if(dp[idx]!=-1) return dp[idx];
	
	long long ans=0;
	
	//cout<<sum<<" "<<arr[idx]<<" "<<idx<<" "<<idx+2<<" "<<sum+arr[idx]<<endl;
	
	long long p=arr[idx]+solve(idx+2);
	long long q=solve(idx+1);
	
	ans=max(p,q);
	
	dp[idx]=ans;
	
	return ans;
}

int main() {
	scanf("%d",&t);
	while(tc<=t){
		scanf("%d",&n);
		memset(dp,-1,sizeof(dp));
		for(int c=0;c<n;c++){
			scanf("%lld",&arr[c]);
		}
		printf("Case %d: %lld\n",tc++,solve(0));
	}
	return 0;
}