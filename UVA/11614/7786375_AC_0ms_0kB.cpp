#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int test,n,num=1;
    scanf("%lld",&test);
    while(test--){
       scanf("%lld",&n);
       n=n*2;
       num=sqrt(n);
       if(num*(num+1)<=n) printf("%lld\n",num);
       else printf("%lld\n",num-1);
    }
    return 0;
}