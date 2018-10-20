#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,c,z=0,mv=0;
    string a,b;
    cin>>n>>a>>b;
    for(c=0;c<n;c++){
        z=abs(a[c]-b[c]);
        if(z>5){
            if(a[c]>b[c]){
                z=(b[c]+10)-a[c];
                mv+=z;
            }else{
            z=a[c]+10-b[c];
            mv+=z;
            }
        }
        else{
            mv+=z;
        }
    }
    cout<<mv<<endl;
    return 0;
}