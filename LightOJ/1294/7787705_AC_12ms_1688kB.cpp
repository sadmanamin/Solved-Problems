#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int test,t=1,n,m,c;
    scanf("%d",&test);
    while(t<=test){
            scanf("%d%d",&n,&m);
            printf("Case %lld: %lld\n",t,(n*m)/2);
        t++;
    }
    return 0;
}