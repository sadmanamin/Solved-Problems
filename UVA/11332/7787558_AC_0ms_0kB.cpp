#include <bits/stdc++.h>
using namespace std;
int main(){

    long long int num,count=0;
    while(scanf("%lld",&num)){
        if(num==0) break;
        count=0;
        while(true){
            while(num!=0){
                count+=num%10;
                num/=10;
            }
            if(count/10==0) break;
            else{
                num=count;
                count=0;
            }

        }
        printf("%lld\n",count);
    }
    return 0;
}