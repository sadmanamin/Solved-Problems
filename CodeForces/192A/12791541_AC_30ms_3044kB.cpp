#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define pb push_back
#define ll long long

vector<ll> num;
ll x;

void full(){
	for(ll c=1;c<=50000;c++){
		x=(c*(c+1))/2;
		num.pb(x);
	}
}

int main() {
	full();
	ll n;
	sc("%lld",&n);
	bool chk = false;
	//pf("%lld\n",num[49999]);
	//if(num[0]<n) cout<<"df"<<endl;
	for(int c=0;c*c<=n;c++){
		//cout<<num[c]<<" "<<n-num[c]<<endl;
		if(binary_search(num.begin(),num.end(),n-num[c])){
			//cout<<num[c]<<" "<<n-num[c]<<endl;
			chk=true;
			break;
		}
	}
	if(chk) printf("YES\n");
	else pf("NO\n");
	return 0;
}