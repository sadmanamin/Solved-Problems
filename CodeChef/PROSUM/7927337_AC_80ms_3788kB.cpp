#include <bits/stdc++.h>
using namespace std;
#define l long long int



int main() {
    l test,n,c2,nC,tc,ans;

    scanf("%lld",&test);
    while(test--){
        c2=0;nC=0;
        cin>>n;
        l a[n];
        for(tc=0;tc<n;tc++){
            scanf("%lld",&a[tc]);
            if(a[tc]>=2) nC++;
            if(a[tc]==2) c2++;
        }
        //cout<<nC<<" "<<c2<<endl;
        ans=(nC*(nC-1)/2)-(c2*(c2-1)/2);
        printf("%lld\n",ans);
    }
    return 0;
}