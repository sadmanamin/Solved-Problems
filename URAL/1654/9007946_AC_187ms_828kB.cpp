#include <bits/stdc++.h>
using namespace std;

int main() {
	char s[200010];
	scanf("%s",s);
	stack <char> ss;
	int n = strlen(s);
	//string s=string(str);
	for(int c=0;c<n;c++){
		if(ss.empty())ss.push(s[c]);
		else if(s[c]==ss.top()) ss.pop();
		else ss.push(s[c]);
	}
	
	int sz = ss.size();
	int id = sz - 1;
	while(!ss.empty()){
		s[id--]=ss.top();
		ss.pop();
	}
	for(int c=0 ; c<sz; c++){
		printf("%c",s[c]);
	}
	printf("\n");
	
	return 0;
}