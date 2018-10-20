#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t=0,num;
    double sum=0;
    cin>>test;
    while(t<test){

        cin>>num;
        sum+=num*567;
        sum/=9;
        sum+=7492;
        sum*=235;
        sum/=47;
        sum-=498;
        num=(int)sum;
        num=(num/10)%10;
        printf("%d\n",abs(num));
        sum=0;
        t++;
    }
    return 0;
}