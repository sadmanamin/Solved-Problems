#include <bits/stdc++.h>
using namespace std;
int n,t,tc=1,k; 
int dp[1010][1010];
int arr[1010];
 
 
 
int solve(int idx,int sum){
	/**if(idx>=n){
		if(sum<=k) return sum;
		else return -1e9;
	}**/
	if(sum > k) return -1e9;
	if(idx >= n) return sum;
 
	if(dp[idx][sum]!=-1) return dp[idx][sum];
	int ans=0;
	ans=max(solve(idx+2,sum+arr[idx]),solve(idx+1,sum));
	dp[idx][sum]=ans;
	return ans;
}
 
int main() {
	scanf("%d",&t);
	while(tc<=t){
		scanf("%d%d",&n,&k);
		memset(dp,-1,sizeof(dp));
		for(int c=0;c<n;c++){
			scanf("%d",&arr[c]);
		}
		printf("Scenario #%d: %d\n",tc++,solve(0,0));
	}
	return 0;
}