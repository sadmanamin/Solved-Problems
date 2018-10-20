#include <bits/stdc++.h>
using namespace std;



int main(){
    int test,tc=1,k,c,sum=0;
    cin>>test;
    while(tc<=test){
        cin>>k;
        int a[k],b[k];
        for(c=0;c<k;c++){
            cin>>a[c];
        }
        for(c=0;c<k;c++){
            cin>>b[c];
        }
        sort(a,a+k);
        sort(b,b+k);
        for(c=0;c<k;c++){
            sum+=abs(a[c]-b[c]);
            //cout<<abs(a[c]-b[c])<<endl;
        }
        printf("Case %d: %d\n",tc,sum);
        sum=0;
        tc++;
    }
    return 0;
}