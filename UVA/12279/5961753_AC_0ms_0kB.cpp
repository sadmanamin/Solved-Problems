#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,i,c=0,m=1;
    while(scanf("%d",&n) && n>0){
        int a[n];
        c=0;
        for(i=0;i<n;i++){
            cin>>a[i];
        }
        for(i=0;i<n;i++){
            if(a[i]>0){
                c++;
            }
            else if(a[i]==0){
                c--;
            }
        }
        printf("Case %d: %d\n",m,c);
        m++;
    }
    return 0;
}