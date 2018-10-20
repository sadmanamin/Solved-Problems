#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf


int main(){
    vector<string> v;
    string s,a,b;
    while(cin>>s){
        v.push_back(s);
    }
    sort(v.begin(),v.end());
    for(int c=0;c<v.size();c++){
        if(v[c].size()>1){
           for(int d=1;d<v[c].size();d++){
            a=v[c].substr(0,d);
            b=v[c].substr(d,v[c].size()-1);
            if(binary_search(v.begin(),v.end(),a) && binary_search(v.begin(),v.end(),b)){
                    cout<<v[c]<<endl;
            break;
            }
           }
        }
    }
	return 0;
}
