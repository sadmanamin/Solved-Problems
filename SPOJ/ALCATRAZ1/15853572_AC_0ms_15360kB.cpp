#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,tc=1,n,nn;
	scanf("%d",&t);
	string s;
	getline(cin,s);
	while(t--){
		cin>>s;
		int sum=0;
		for(int c=0;c<s.size();c++){
			sum+=s[c]-'0';
		}
		printf("%d\n",sum);
	}
	return 0;
}