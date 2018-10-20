#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main(){
    int test,tc=1;
    scanf("%d",&test);
    while(tc<=test){
        int n,chk,sum=0;
        scanf("%d",&n);
        for(int c=0;c<n;c++){
            scanf("%d",&chk);
            sum+=chk;
        }
        printf("Case %d: %d\n",tc++,sum);
    }
    return 0;
}
