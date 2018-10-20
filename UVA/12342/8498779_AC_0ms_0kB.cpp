#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    ll test,tc=1,n,carry;
    scanf("%lld",&test);
    while(tc<=test){
        scanf("%lld",&n);
        vector<int> v;
        if(n<=180000) printf("Case %d: 0\n",tc++);
        else{
        if(n<=480000){
            n=n-180000;
            v.push_back(n);
        }
        else if(n<=880000){
            n=n-180000;
            n=n-300000;
            v.push_back(300000);
            v.push_back(n);
        }
        else if(n<=1180000){
            n=n-180000;
            n=n-300000;
            v.push_back(300000);
            n=n-400000;
            v.push_back(400000);
            v.push_back(n);
        }
        else{
            n=n-180000;
            n=n-300000;
            v.push_back(300000);
            n=n-400000;
            v.push_back(400000);
            n=n-300000;
            v.push_back(300000);
            v.push_back(n);
        }
        double sum=0;
        for(int c=0;c<v.size();c++){
            if(c==0) sum+=v[c]*(.1);
            else if(c==1) sum+=v[c]*(.15);
            else if(c==2) sum+=v[c]*.2;
            else if(c==3) sum+=v[c]*.25;
        }
        n=ceil(sum);
        if(sum<=2000) printf("Case %lld: 2000\n",tc++);
        else printf("Case %lld: %lld\n",tc++,n);
        }
    }
    return 0;
}

