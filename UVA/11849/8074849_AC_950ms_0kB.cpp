#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m,s;
    while(cin>>n>>m && (n&&m)){
            int cnt=0;
        //int a[n],b[m];
        vector<int> a;
        vector<int> b;
        for(int c=0;c<n;c++){
                cin>>s;
            a.push_back(s);
        }
        for(int c=0;c<m;c++){
                cin>>s;
            b.push_back(s);
        }
    for(int c=0;c<n;c++){
        if(binary_search(b.begin(),b.end(),a[c])) cnt++;
    }
    cout<<cnt<<endl;
    }
    return 0;
}
