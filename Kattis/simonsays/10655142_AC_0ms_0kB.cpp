#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc scanf
#define pr printf



int main(){
    string s;
    int t;
    sc("%d",&t);
    getline(cin,s);
    while(t--){
        getline(cin,s);
        if(s.substr(0,10)=="Simon says") cout<<s.substr(11)<<endl;
    }
    return 0;
}
