#include <bits/stdc++.h>
using namespace std;

int main() {
	string s;
	int sc,up=1;
	cin>>s;
	for(sc=0;sc<s.size();sc++){
        if(isupper(s[sc])) up++;
	}
	printf("%d\n",up);

    return 0;
}