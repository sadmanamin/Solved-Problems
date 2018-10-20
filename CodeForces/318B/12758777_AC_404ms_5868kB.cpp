#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	getline(cin,s);
	long long sz=s.size(),h=0,m=0;
	for(int c=0;c<sz;c++){
		if(s.substr(c,5)=="heavy"){
			h++;
			c+=4;
		}
		else if(s.substr(c,5)=="metal"){
			m+=h;
			c+=4;
		}
	}
	printf("%lld\n",m);
	return 0;
}