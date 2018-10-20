#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int a,c,sum=0;
    scanf("%lld",&a);
    if(a>=1){
        for(c=1;c<=a;c++){
            sum+=c;
        }
    }
    else if(a<1){
        for(c=a;c<=1;c++){
            sum+=c;
        }
    }
    printf("%lld\n",sum);
    return 0;
}