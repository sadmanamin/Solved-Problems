#include<bits/stdc++.h>
using namespace std;
int main(){
    int t,i,a,b,c,ans;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d%d%d",&a,&b,&c);
        ans=(c*(2*a-b))/(a+b);
        printf("%d\n",ans);
    }
    return 0;
}
