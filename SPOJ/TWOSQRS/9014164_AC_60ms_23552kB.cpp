#include <bits/stdc++.h>
using namespace std;
const int mx=5*1e5+5;
const double eps=1e-7;
#define ll long long int
 
ll a[1000010];
 
void sqr(){
    for(int c=0;c<=1000000;c++){
        a[c]=(ll)c*(ll)c;
    }
}
 
int main(){
    sqr();
   ll hi,lo,t,n;
    scanf("%lld",&t);
    while(t--){
        scanf("%lld",&n);
        bool chk=false;
        lo=0;
        hi=1000000;
        while(hi>=lo){
            if(a[hi]+a[lo]==n){
                chk=true;
                break;
            }
            else if(a[hi]+a[lo]>n) hi--;
            else lo++;
        }
        if(chk) printf("Yes\n");
        else printf("No\n");
    }
    return 0;
}