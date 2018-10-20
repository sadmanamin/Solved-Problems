#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,cnt=0;
	scanf("%d",&n);
	string s;
	getline(cin,s);
	
	while(n--){
		cin>>s;
		if(s.size()>4 && s.substr(s.size()-4,4)=="+one") cnt+=2;
		else cnt++;
		//cout<<cnt<<endl;
	}
	
	if(cnt==11) printf("%d\n",(cnt+3)*100);
	else printf("%d\n",(cnt+2)*100);
	return 0;
}