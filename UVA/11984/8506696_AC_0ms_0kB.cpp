#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test,tc=1;
    double a,b,far,cel;
    scanf("%d",&test);
    while(tc<=test){
        scanf("%lf%lf",&a,&b);
             far = 9*a/5+b;
             cel = far*5/9;
            printf("Case %d: %.2lf\n",tc++,cel);
    }
    return 0;

}

