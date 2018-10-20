#include <bits/stdc++.h>

    using namespace std;

    int main()
    {
        int t,i,n,c,j;
        scanf("%d",&t);
        for(i=1;i<=t;i++){
            int high=0,low=0;

            scanf("%d",&n);
            int a[n];
            for(c=0;c<n;c++){
                scanf("%d",&a[c]);
            }
            for(j=0;j<n-1;j++){
                if(a[j]>a[j+1]){
                    low++;
                }
                else if(a[j]<a[j+1]){
                    high++;
                }

            }
            printf("Case %d: %d %d\n",i,high,low);
        }
          return 0;
        }