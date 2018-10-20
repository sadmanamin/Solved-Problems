#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf

map<int,vector<int> > mp;
int main(){
    ll n,no,q,l,r,x,ans=0;
    //clr(arr);
    sc("%lld",&n);
    for(int c=1;c<=n;c++){
        sc("%lld",&no);
        mp[no].push_back(c);
    }
    sc("%lld",&q);
    for(int c=0;c<q;c++){
            ans=0;
        sc("%lld%lld%lld",&l,&r,&x);
        if(!mp.count(x)){
			cout<<0;
			continue;
		}
        int index1=upper_bound(mp[x].begin(),mp[x].end(),r)-mp[x].begin();
		int index2=lower_bound(mp[x].begin(),mp[x].end(),l)-mp[x].begin();

		if(index1-index2) ans=1;
        cout<<ans;
    }
     cout<<endl;

	return 0;
}
