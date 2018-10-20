#include<bits/stdc++.h>
using namespace std;
int main(){
    int test,n,m,carry,exp;
    scanf("%d",&test);
    while(test--){
        scanf("%d%d",&n,&m);
        carry=m/n+1;
        carry=n*carry;
        carry=carry-m;
        printf("%d\n",carry);
    }
    return 0;
}
