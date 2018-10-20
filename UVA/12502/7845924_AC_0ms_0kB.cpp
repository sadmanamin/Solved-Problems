#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,a,b,total;
    double sum=0,avg=0;

    cin>>test;
    while(test--){
        cin>>a>>b>>total;
        avg=a+b;
        if(a<=avg/3) sum=0;
        else if(a<2*avg/3) sum=(total*(a-avg/3))/(avg/3);
        else sum=total;
        printf("%.lf\n",sum);
    }
    return 0;
}