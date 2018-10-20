#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    while(cin>>s){
        string s2="";
        for(int c=0;c<s.size();c++){
            if(s[c]>=48 && s[c]<=57) s2=s2+s[c];
            else if(s[c]>=65 && s[c]<=67)s2=s2+'2';
            else if(s[c]>=68 && s[c]<=70)s2=s2+'3';
            else if(s[c]>=71 && s[c]<=73)s2=s2+'4';
             else if(s[c]>=74 && s[c]<=76)s2=s2+'5';
              else if(s[c]>=77 && s[c]<=79)s2=s2+'6';
               else if(s[c]>=80 && s[c]<=83)s2=s2+'7';
                else if(s[c]>=84 && s[c]<=86)s2=s2+'8';
                 else if(s[c]>=87 && s[c]<=90)s2=s2+'9';
                 else s2=s2+s[c];
        }
        cout<<s2<<endl;
    }
    return 0;
}

