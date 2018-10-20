#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t,n,nc,k,p,pc;
    string s;
    cin>>test;
    for(t=1;t<=test;t++){

        scanf("%d%d%d",&n,&k,&p);
        int a[n];

        for(nc=0;nc<n;nc++){
            a[nc]=nc+1;
        }

        int index=k+p;
        while(index>n){
            index-=n;
        }
        printf("Case %d: %d\n",t,index);
    }
    return 0;
}