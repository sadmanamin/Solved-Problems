#include <bits/stdc++.h>
using namespace std;
int main(){
    int test;
    string s;
    cin>>test;
    while(test--){
        cin>>s;
        if(s=="1" || s=="4" || s=="78") printf("+\n");
        else if(s[0]=='9' && s[s.size()-1]=='4') printf("*\n");
        else if(s[s.size()-1]=='5' && s[s.size()-2]=='3') printf("-\n");
        else printf("?\n");
    }
    return 0;
}