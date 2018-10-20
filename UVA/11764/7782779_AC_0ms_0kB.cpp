#include <bits/stdc++.h>
using namespace std;
#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t=1,wall,wallc;
    cin>>test;
    while(t<=test){
            int up=0,down=0;
       cin>>wall;
       int a[wall];
       for(wallc=0;wallc<wall;wallc++){
        cin>>a[wallc];
        if(wallc>=1){
            if(a[wallc]>a[wallc-1]) up++;
            else if(a[wallc]<a[wallc-1]) down++;
        }
       }
       printf("Case %d: %d %d\n",t,up,down); 
       t++;
    }
    return 0;
}