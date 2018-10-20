#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int test,tc=1;
    cin>>test;
    long long int n,nc,c=0;
    while(tc<=test){
        scanf("%lld",&n);
        c=0;
        long long int a[2];
        for(nc=2;nc<sqrt(n) && c<2;nc++){
            if(n%nc==0){
                a[c]=nc;
                c++;
            }
        }
        
        printf("Case #%lld: %lld = %lld * %lld = %lld * %lld\n",tc,n,a[0],(n/a[0]),a[1],(n/a[1]));
        tc++;
    }
    return 0;
}