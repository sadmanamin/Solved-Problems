#include <bits/stdc++.h>
using namespace std;
const int mx=5*1e5+5;
const double eps=1e-7;
#define ll long long int

ll n,k;
//ll wood[mx];

bool func(ll val){
    ll cnt1=val,cnt2=1;
    while(val>cnt2){
    	cnt2*=k;
        cnt1+=val/cnt2;
    }
    return cnt1>=n;
}

int main(){
    scanf("%lld%lld",&n,&k);
   ll lo=0,hi=n,mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(func(mid)) hi=mid;
        else lo=mid;
    }
    printf("%lld",hi);

    return 0;
}
