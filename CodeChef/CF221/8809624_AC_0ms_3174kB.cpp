#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int a,b,n;
    scanf("%lld%lld%lld",&a,&b,&n);
    int x=ceil((double)(n-b)/(double)(a-b));
    //printf("%lf\n",x);
    //n=ceil(x);
    printf("%d\n",x);
    return 0;
}
