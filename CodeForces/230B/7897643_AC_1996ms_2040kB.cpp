#include <bits/stdc++.h>
using namespace std;



int main(){

    int test,c;
    long long x,y;
    cin>>test;
    while(test--){
    scanf("%I64d",&x);
    y=sqrtl(x);
    for(c=2;c*c<y;c++) if(x%c==0) break;
    (c*c>y&&y*y==x&& x!=1)? printf("YES\n"): printf("NO\n");
    }
    return 0;
}