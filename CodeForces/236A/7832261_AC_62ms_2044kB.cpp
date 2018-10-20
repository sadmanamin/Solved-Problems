#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    vector <char> v;
    cin>>s;
    for(int n=0;n<s.size();n++){
        v.push_back(s[n]);
    }
    sort(v.begin(),v.end());
    v.erase(unique(v.begin(),v.end()),v.end());
    if(v.size()%2==0) cout<<"CHAT WITH HER!"<<endl;
    else cout<<"IGNORE HIM!"<<endl;
    v.clear();
    return 0;
}