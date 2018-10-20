#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,n,k,sum=0;
    cin>>test;
    while(test--){
        sum=0;
        cin>>n>>k;
        int a[n];

        for(int nc=0;nc<n;nc++){
            cin>>a[nc];
            sum+=a[nc]/k;
        }
        cout<<sum<<endl;

    }
    return 0;
}