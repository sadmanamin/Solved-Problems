#include <bits/stdc++.h>
using namespace std;
string toBinary(int n)
{
    string r;
    while(n!=0) {r=(n%2==0 ?"0":"1")+r; n/=2;}
    return r;
}

int main(){
    int test,tc=1,nc,check;
    long long int n;
    string s;
    cin>>test;
    while(tc<=test){
            check=0;
    scanf("%lld",&n);
    s=toBinary(n);
    for(nc=0;nc<s.size();nc++){
        if(s[nc]=='1') check++;
    }
    (check%2==0)? printf("Case %d: even\n",tc) : printf("Case %d: odd\n",tc);
    tc++;
    }
    return 0;
}