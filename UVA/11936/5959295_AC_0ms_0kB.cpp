#include <bits/stdc++.h>
using namespace std;
int main(){
    int t,i,a,b,c,z;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        int a[3];
        for(z=0;z<3;z++){
            cin>>a[z];
        }
        sort(a,a+3);
        if(a[0]+a[1]>a[2]){
            cout<<"OK"<<endl;
        }
        else{
            cout<<"Wrong!!"<<endl;
        }
    }
    return 0;
}