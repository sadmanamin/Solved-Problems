#include<bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt","r",stdin);
    int n,q,max=0,max2=0;
    scanf("%d%d",&n,&q);
    map<string,string> mp;
    map<string,int> mp2;
    map<string,int> mp3;
    map<string,int> :: iterator it;
    string s,a,b;
    while(n--){
       cin>>a>>b;
       mp[a]=b;
    }
    //cout<<mp[a]<<endl;
    while(q--){
        cin>>a;
        mp2[a]++;
        mp3[mp[a]]++;
    }
    //for(it=mp3.begin();it!=mp3.end();it++) cout<<it->first<<" "<<it->second<<"\n";
    
    for(it=mp2.begin();it!=mp2.end();it++){
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second>max) max=it->second;
    }
    for(it=mp3.begin();it!=mp3.end();it++){
        //cout<<it->first<<" "<<it->second<<endl;
        if(it->second>max2) max2=it->second;
    }
    //cout<<max<<endl;
    for(it=mp2.begin();it!=mp2.end();it++){
        if(it->second==max){
                a=it->first;
        //cout<<1<<endl;
        break;
        }
    }
    for(it=mp3.begin();it!=mp3.end();it++){
        if(it->second==max2){
                b=it->first;
        //cout<<2<<" "<<b<<endl;
        break;
        }
    }
    cout<<b<<"\n"<<a<<"\n";
    return 0;
}
