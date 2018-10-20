#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,sum1,sum2;
    string aa="",a1,bb="",b1,ss="",s1;

    scanf("%lld%lld",&a,&b);
    sum1=a+b;
    while(a!=0){

        if(a%10!=0){
            stringstream ss;
            ss<<(a%10);
            ss>>a1;
            aa=a1+aa;
            //cout<<aa<<endl;

        }
        a=a/10;
    }
    while(b!=0){

        if(b%10!=0){
            stringstream ss;
            ss<<(b%10);
            ss>>b1;
            bb=b1+bb;
            //cout<<bb<<endl;

        }
        b=b/10;
    }

    while(sum1!=0){

        if(sum1%10!=0){
            stringstream ss1;
            ss1<<(sum1%10);
            ss1>>s1;
            ss=s1+ss;


        }
        sum1=sum1/10;
    }
    stringstream ss1;
    ss1<<aa;
    ss1>>a;

    stringstream ss2;
    ss2<<bb;
    ss2>>b;

    stringstream ss3;
    ss3<<ss;
    ss3>>sum1;

    if(a+b==sum1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


    return 0;
}