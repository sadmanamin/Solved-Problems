#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;
	cin>>a>>b>>c;
	int s[6];
	s[0]=a+b*c;
	
	s[1]=a*(b+c);
	
	s[2]=a*b*c;
	
	s[3]=(a+b)*c;
	
	s[4]=a*b+c;
	
	s[5]=a+b+c;
	
	sort(s,s+6);
	cout<<s[5]<<endl;
	return 0;
}