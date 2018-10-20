#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,tc=1;
    double c,d;
    cin>>test;
    while(tc<=test){

        scanf("%lf%lf",&c,&d);
        c =c+5.0/9.0*d;
        printf("Case %d: %.2lf\n", tc,c);
        tc++;
    }
    return 0;
}