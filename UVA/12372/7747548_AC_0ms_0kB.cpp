#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,t=0,l,b,h;
	cin>>test;
	for(t=1;t<=test;t++){
        cin>>l>>b>>h;
        if(l>20 || b>20 || h>20){
            printf("Case %d: bad\n",t);
        }
        else printf("Case %d: good\n",t);
	}
	return 0;
}