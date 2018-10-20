#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,m,sum,a,b;
    scanf("%d%d",&n,&m);
    sum=n;
    while(1){
        a=n/m;
        b=a+(n%m);
        n=b;
        sum+=a;
        if(b<m)
            break;
    }
    printf("%d",sum);
    return 0;
}