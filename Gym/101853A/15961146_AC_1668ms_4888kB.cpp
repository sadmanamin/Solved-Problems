#include <bits/stdc++.h>
#define sc scanf
#define pf printf
using namespace std;

typedef long long int ll;

void solve(){
	int n,q;
	sc("%d%d",&n,&q);
	map<ll,int>mp;
	ll arr[n];
	set<ll>s;
	for(int i=0;i<n;i++){
		ll temp;
		sc("%lld",&temp);
		arr[i]=temp;
		s.insert(temp);
		mp[temp]++;
	}
	
	
	for(int i=0;i<q;i++){
		
		//int counter=0;
		int a;
		sc("%d",&a);
		if(a==2){
			s.erase(0);
			pf("%d\n",s.size());;
		}
		else if(a==1){
			int p;
			ll v;
			sc("%d%lld",&p,&v);
			mp[v]++;
			s.insert(v);
			mp[arr[p-1]]--;
			if(mp[arr[p-1]]<=0){
				mp.erase(arr[p-1]);
				s.erase(arr[p-1]);
			}
			arr[p-1]=v;
		}
	}
	
}


int main() {
	int n;
	sc("%d",&n);
	for(int i=0;i<n;i++){
		solve();
	}
	return 0;
}