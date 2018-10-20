#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf


int main() {
	int t,n,ans;
	sc("%d",&t);
	map<int,int> mp;
	mp[1]=1;
	mp[2]=2;
	mp[3]=4;
	mp[4]=8;
    mp[5]=16;
    mp[6]=31;
    while(t--){
        sc("%d",&n);
    if(mp.find(n)==mp.end()){
        mp[n]=n-1+(pow(n,4)-6*pow(n,3)+23*pow(n,2)-42*n+48)/24;
    }
    pr("%d\n",mp[n]);
    }
	return 0;
}
