#include <bits/stdc++.h>
using namespace std;
#define l long long int
int main() {
    l test,s,e,slots,sc,cnt;
    scanf("%lld",&test);
    while(test--){
        cnt=0;
        scanf("%lld%lld",&s,&e);
        scanf("%lld",&slots);
        sc=slots;
        while(slots--){
            l s1,e1;
            scanf("%lld%lld",&s1,&e1);
            if(e1<=s || s1>=e) cnt++;
        }
        if(cnt==sc) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}