#include <bits/stdc++.h>
using namespace std;


int main(){
    long long int test,tc=1,a[3];
    cin>>test;
    while(tc<=test){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]>a[2]){
            if(a[0]==a[1] && a[1]==a[2]) printf("Case %d: Equilateral\n",tc);
            else if(a[0]==a[1] || a[1]==a[2]) printf("Case %d: Isosceles\n",tc);
            else printf("Case %d: Scalene\n",tc);
        }
        else printf("Case %d: Invalid\n",tc);
        tc++;
    }
    return 0;
}