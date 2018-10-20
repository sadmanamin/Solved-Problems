#include <bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c,z;
    while(scanf("%d%d%d",&a,&b,&c)==3 && a<30000 && b<30000 && c<30000 &&(a!=0 && b!=0 && c!=0)){
        int ar[3]={a,b,c};
        sort(ar,ar+3);
        if(ar[0]*ar[0]+ar[1]*ar[1]==ar[2]*ar[2]){
            cout<<"right"<<endl;
        }
        else{
            cout<<"wrong"<<endl;
        }
    }
    return 0;
}