#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t=1,a,b;
    cin>>test;
    while(t<=test){
            int sum=0;
        cin>>a;
        cin>>b;
        for(a=a;a<=b;a++){
            if(a%2!=0) sum+=a;
        }
        printf("Case %d: %d\n",t,sum);
        t++;
    }
}