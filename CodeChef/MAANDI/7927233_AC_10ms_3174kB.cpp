#include <bits/stdc++.h>
using namespace std;
#define l long long int

int chk(int num){
    int carry;
    while(num>0){
        carry=num%10;
        if(carry==4||carry==7) return 1;
        num/=10;
    }
    return 0;
}

int main() {
    l test,num,cnt;

    scanf("%lld",&test);
    while(test--){
        cnt=0;
        scanf("%lld",&num);
        for(int c=1;c<sqrt(num);c++){
        if(num%c==0){
            cnt+=chk(c);
        }
        if(num%c==0){
            cnt+=chk(num/c);
        }

        }
        printf("%lld\n",cnt);
    }
    return 0;
}