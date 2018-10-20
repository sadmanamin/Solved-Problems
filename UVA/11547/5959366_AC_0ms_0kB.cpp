#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,n,ans;
    cin>>t;
    for(i=1;i<=t;i++){
        cin>>n;
        ans=((((n*567)/9)+7492)*235)/47-498;
        if(ans<0){
            ans=ans*-1;
        }
        ans=ans/10;
        ans=ans%10;

        cout<<ans<<endl;
    }
    return 0;
}