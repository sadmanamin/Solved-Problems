#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define pii pair<int,int>

char mp(char c)
{
    if ( c == 'A' || c == 'B' || c == 'C' ) return '2';
    if ( c == 'D' || c == 'E' || c == 'F' ) return '3';
    if ( c == 'G' || c == 'H' || c == 'I' ) return '4';
    if ( c == 'J' || c == 'K' || c == 'L' ) return '5';
    if ( c == 'M' || c == 'N' || c == 'O' ) return '6';
    if ( c == 'P' || c == 'R' || c == 'S' ) return '7';
    if ( c == 'T' || c == 'U' || c == 'V' ) return '8';
    if ( c == 'W' || c == 'X' || c == 'Y' ) return '9';
    return ' ';
}

int main() {
   int t,n,tc;
   string s;
   sc("%d",&t);
   getline(cin,s);
   map<string,int> mp2;
   tc=t;

   while(t--){
   	if(t<tc-1) cout<<endl;
    getline(cin,s);
    sc("%d",&n);
    while(n--){
        cin>>s;
        int sz=s.size();
        string ss="";
        for(int c=0;c<sz;c++){
                if(ss.size()==3) ss+="-";
            if(isalpha(s[c])){
            	ss=ss+mp(s[c]);
            	//cout<<s[c]<<" "<<mp1[s[c]]<<endl;
            }
            else if(isdigit(s[c])) ss+=s[c];
        }
        mp2[ss]++;
    }
    map<string,int>:: iterator it;
    bool chk=false;
    for(it=mp2.begin();it!=mp2.end();it++){
    	if(it->second > 1){
    		chk=true;
    		cout<<it->first<<" "<<it->second<<endl;
    	}
    }
    if(chk==false) cout<<"No duplicates."<<endl;
    
    mp2.clear();
   }
}
