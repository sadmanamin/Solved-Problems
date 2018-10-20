#include <bits/stdc++.h>
using namespace std;
int main(){
    int ini,num1,num2,num3,sum=0,degree=0;
    while((scanf("%d%d%d%d",&ini,&num1,&num2,&num3), ini || num1 || num2 || num3)){

        sum=1080;
        if((ini-num1)>0) sum+=(ini-num1)*9;
        else sum+=(ini-num1+40)*9;

        if((num2-num1)>0) sum+=(num2-num1)*9;
        else sum+=(num2-num1+40)*9;

        if((num2-num3)>0) sum+=(num2-num3)*9;
        else sum+=(num2-num3 + 40)*9;

        printf("%d\n",sum);

    }
    return 0;
}