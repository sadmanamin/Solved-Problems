#include <bits/stdc++.h>
using namespace std;

int main(){

    int test,n;
    string s;

    cin>>test;
    while(test--){
    int a[26];
    memset(a,0,sizeof(a));
    cin>>s;
    if(s.size()%2==1) cout<<"NO"<<endl;
    else{
        for(int sc=0;sc<s.size();sc++){
            if(s[sc]>='a' && s[sc]<='z') a[s[sc]-'a']++;
            else if(s[sc]>='A' && s[sc]<='Z') a[s[sc]-'A']++;
        }
        sort(a,a+26);
        //cout<<a[25]<<endl;
        if(a[25]==s.size()/2) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    }

    return 0;
}