#include <bits/stdc++.h>
const double eps=1e-7;
using namespace std;

int main() {
    int t,a,b,c,x=0;
    scanf("%d",&t);
    while(t--){
        scanf("%d%d%d",&a,&b,&c);
        double lo=0,hi=c,mid;
        while(hi-lo>eps){
            mid=(hi+lo)/2;
            if(a*mid+b*sin(mid)==c) x=mid;
            else if(a*mid+b*sin(mid)>c) hi=mid;
            else lo=mid;
        }
        printf("%.6lf\n",mid);
    }
    return 0;
}
