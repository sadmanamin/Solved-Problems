#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define pf printf
#define sc scanf
ll t,tc=1,r,c,g,l;

ll gcd(ll a, ll b)
{
    if (a == 0)
        return b;
    return gcd(b%a, a);
}

ll lcm(ll a,ll b){
    return (a*b)/gcd(a,b);
}

int main(){
    sc("%lld",&t);
    while(t--){
        sc("%lld%lld",&r,&c);
        g=gcd(r,c);
        l=lcm(r,c);
        if(g!=r && l!=c){
            pf("-1\n");
        }
        else pf("%lld %lld\n",g,l);
    }
    return 0;
}
