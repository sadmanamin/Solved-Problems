#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define pii pair<int,int>

int main() {
   int x,y,num,cnt=0;
   map<int,int> mp;
   map<int,int> :: iterator it;
   while(sc("%d%d",&x,&y)){
        if(x==0 && y==0) break;
   for(int c=0;c<x;c++){
        cin>>num;
        mp[num]++;
   }
   for(int c=0;c<y;c++){
        cin>>num;
        mp[num]++;
   }
   for(it=mp.begin();it!=mp.end();it++){
    if(it->second==2) cnt++;
   }
   printf("%d\n",cnt);
   cnt=0;
   mp.clear();
   }
}
