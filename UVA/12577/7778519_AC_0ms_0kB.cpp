#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    int c=1;
    while(getline(cin,s)){
        if(s=="*") break;
        if(s=="Hajj") printf("Case %d: Hajj-e-Akbar\n",c);
        else if(s=="Umrah") printf("Case %d: Hajj-e-Asghar\n",c);
        c++;
    }
    return 0;
}