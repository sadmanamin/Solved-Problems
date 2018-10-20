#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int n,sum=0,nc;
    while(scanf("%lld",&n) && n){
        sum=(n * (n + 1) * (2*n + 1)) / 6;
        cout<<sum<<endl;
    }
    return 0;
}