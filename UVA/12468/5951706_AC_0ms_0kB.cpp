#include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int a,b,ans;
        while(scanf("%d%d",&a,&b)==2 && a!=-1 && b!=-1){
            ans=0;

            ans=abs(a-b);
            if(ans>50){
                ans=100-ans;
            }
            printf("%d\n",ans);

        }
        return 0;
    }