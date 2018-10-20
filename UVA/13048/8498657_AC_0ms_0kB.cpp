#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    string s;
    int test,tc=1;
    scanf("%d",&test);
    while(tc<=test){
        cin>>s;
        int cnt=0;
        for(int c=0;c<s.size();c++){
            if(c==0){
                if(s[c]=='-' && s[c+1]!='B' && s[c+1]!='S' && s[c+2]!='B') cnt++;
            }
            else{
                if(s[c]=='-' && s[c+1]!='B' && s[c+1]!='S' && s[c+2]!='B' && s[c-1]!='S') cnt++;
            }
        }
        printf("Case %d: %d\n",tc++,cnt);
    }
    return 0;
}

