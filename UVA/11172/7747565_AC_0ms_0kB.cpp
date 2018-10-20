#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,t=0,a,b;
	cin>>test;
	for(t=1;t<=test;t++){
        cin>>a>>b;
        if(a>b){
            cout<<">"<<endl;
        }
        else if(a<b) cout<<"<"<<endl;
        else if(a==b)cout<<"="<<endl;
	}
	return 0;
}