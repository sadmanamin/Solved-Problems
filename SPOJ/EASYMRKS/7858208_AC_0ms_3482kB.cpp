#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,tc=1,n,k,sum,nc,result;
    cin>>test;
    while(tc<=test){
        sum=0;
        cin>>n>>k;
        int a[n];

        for(nc=0;nc<n;nc++){
            cin>>a[nc];
            sum+=a[nc];
        }
        result=k*(n+1)-sum;
        printf("Case %d: %d\n",tc,result);
        tc++;
    }
    return 0;
}