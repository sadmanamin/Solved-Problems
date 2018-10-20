#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int test,tc=1,r,c,m,n;

    scanf("%d",&test);
    while(tc<=test){
        scanf("%d%d%d%d",&r,&c,&m,&n);
        int a[26]={0};
        string s[r];
        for(int c=0;c<r;c++){
            cin>>s[c];
            for(int d=0;d<s[c].size();d++){
                a[s[c][d]-'A']++;
            }
        }
        int high=0,imp=0;
        for(int c=0;c<26;c++){
            if(a[c]>high){
                    imp=1;high=a[c];}
            else if(a[c]==high) imp++;

        }
        //cout<<imp<<" "<<high<<endl;
        printf("Case %d: %d\n",tc++,(high*m*imp+(r*c-high*imp)*n));
    }
    return 0;
}

