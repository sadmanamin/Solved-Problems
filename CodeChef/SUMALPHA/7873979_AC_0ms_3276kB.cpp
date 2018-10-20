#include <bits/stdc++.h>
using namespace std;

int main(){

    int test,sum;
    string s;
    cin>>test;
    while(test--){
        sum=0;
        cin>>s;
        for(int c=0;c<s.size();c++){
            sum+=((s[c]-'a')%5);
        }
        cout<<sum<<endl;
    }

    return 0;
}
