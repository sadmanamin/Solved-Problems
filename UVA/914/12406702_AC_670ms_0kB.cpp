#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
//#define ll long long
#define pb push_back
#define pii pair<int,int>
#define MAX 100000000

bool prime[MAX];
void primeID(){
int n=sqrt(MAX);
memset(prime,true,sizeof(prime));
for(int i=3; i<=n; i+=2){
if(prime[i]){
for(int j=i*i;j<MAX;j+=(2*i)){
prime[j]=false;
}
}
}
}
vector<int> pNum;
void pusher(){
pNum.push_back(2);
for(int i=3;i<MAX;i+=2){
if(prime[i]){
pNum.push_back(i);
}
}
}

int main() {
    primeID();
    pusher();
    int t,l,u;
    map<int,int> mp;
    map<int,int> :: iterator it;
    sc("%d",&t);
    while(t--){
        sc("%d%d",&l,&u);
        int ll=lower_bound(pNum.begin(),pNum.end(),l)-pNum.begin();
        int uu=lower_bound(pNum.begin(),pNum.end(),u)-pNum.begin();
        if(u<pNum[uu]) uu--;
        //cout<<l<<" "<<u<<" "<<ll<<" "<<uu<<" "<<pNum[ll]<<" "pNum[uu]<<endl;
         int cnt=0,mx=0,mxI=0;
        for(int c=ll+1;c<=uu;c++){
            mp[pNum[c]-pNum[c-1]]++;
            if(mp[pNum[c]-pNum[c-1]]>mx){
            	mx=mp[pNum[c]-pNum[c-1]];
            	mxI=pNum[c]-pNum[c-1];
            }
        }
       
        for(it=mp.begin();it!=mp.end();it++){

            if(it->second==mx)cnt++;
        }
        if(mx==0 || cnt>1) printf("No jumping champion\n");
        else printf("The jumping champion is %d\n",mxI);
        mp.clear();
    }
}
