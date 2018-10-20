 #include <bits/stdc++.h>

    using namespace std;

    int main()
    {
       int t,i,n,c;
       scanf("%d",&t);
       for(i=1;i<=t;i++){
        scanf("%d",&n);
        int a[n];
        for(c=0;c<n;c++){
            scanf("%d",&a[c]);

        }
        sort(a,a+n);
        printf("Case %d: %d\n",i,a[n-1]);
       }

          return 0;
    }