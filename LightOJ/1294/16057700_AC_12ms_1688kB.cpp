#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define MAX 1000000

ll res(int n,int f,int l){
	return n*(f+l)/2;
}

int main() {
	ll t,tc=1,n,m;
	sc("%lld",&t);
	while(tc<=t){
		sc("%lld%lld",&n,&m);
		ll sum=0,sum1=0,sum2=0,ff=1,sm=1;
		sum=n*m/2;
		pf("Case %lld: %lld\n",tc++,sum);
	}
	return 0;
}