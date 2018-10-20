#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    int c;
    bool chk=true;
    if(s[0]=='1'){
        for(c=0;c<s.size();c++){
            if(s[c]!='1' && s[c]!='4'){

                chk=false;
                break;
            }
        }
        if(s.size()>=3){
        for(c=0;c<=s.size()-3;c++){
            if(s[c]=='4' && s[c+1]=='4' && s[c+2]=='4'){

                chk=false;
                break;
            }
        }
        }

    }
    else chk=false;

    if(chk) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    return 0;
}