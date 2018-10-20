#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t=1,sc;
    char ss[20];
    
    bool check=true;
    scanf("%d",&test);
    while(t<=test){
        scanf("%s",&ss);
        string s(ss);
        
        for(sc=0;sc<s.size();sc++){
            if(s[sc]!=s[s.size()-1-sc]) check=false;
            if(sc==s.size()/2) break;

        }
        if(check) printf("Case %d: Yes\n",t);
        else printf("Case %d: No\n",t);
        check=true;
        t++;
    }
    return 0;
}