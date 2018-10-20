 #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
         int t,i,l,w,h;
        scanf("%d",&t);
        for(i=1;i<=t;i++){
            scanf("%d%d%d",&l,&w,&h);
            if(l<=20 && w<=20 && h<=20){
                printf("Case %d: good\n",i);

            }
            else{
                printf("Case %d: bad\n",i);

            }
        }
        return 0;
    }
