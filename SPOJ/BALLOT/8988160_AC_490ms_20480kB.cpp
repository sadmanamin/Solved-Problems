#include <bits/stdc++.h>
using namespace std;
const int mx=5*1e5+5;
const double eps=1e-7;
#define ll long long int

ll n,b;
ll wood[mx];

ll func(ll val){
    int cnt=0;
    for(int c=0;c<n;c++){
        if(wood[c]%val==0) cnt+=wood[c]/val;
        else cnt+=wood[c]/val+1;
    }
    return cnt;
}

int main(){

    while(scanf("%lld%lld",&n,&b)==2 && (n!=-1 && b!=-1)){
    for(int c=0;c<n;c++){
        scanf("%lld",&wood[c]);
    }
    sort(wood,wood+n);
   ll lo=0,hi=wood[n-1],mid;
    while(hi-lo>1){
        mid=(hi+lo)/2;
        if(func(mid)>b) lo=mid;
        else hi=mid;
    }
    printf("%lld\n",hi);
    }
    return 0;
}
