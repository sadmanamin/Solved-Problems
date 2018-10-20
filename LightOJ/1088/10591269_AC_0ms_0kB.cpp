#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pf printf
#define sc scanf
ll t,tc=1,n,q,c,l,r,r1,r2,sz;



int main(){
    sc("%lld",&t);
    while(tc<=t){
        sc("%lld%lld",&n,&q);
        ll a[n];
        for(c=0;c<n;c++){
            sc("%lld",&a[c]);
        }
        pf("Case %lld:\n",tc++);
        for(c=0;c<q;c++){
            sc("%lld%lld",&r1,&r2);
            r1= lower_bound(a,a+n,r1) - a;
			r2 = upper_bound(a+r1,a+n,r2) - a;
			printf("%lld\n",r2-r1);

            //pf("%lld\n",sz);
        }
    }
    return 0;
}
