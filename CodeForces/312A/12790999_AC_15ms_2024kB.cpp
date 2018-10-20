#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define pb push_back
#define ll long long

int main(){
	int n;
	string s;
	sc("%d",&n);
	getline(cin,s);
	while(n--){
		getline(cin,s);
		if(s.size()<5) pf("OMG>.< I don't know!\n");
		else if(s.substr(0,5)=="miao." && s.substr(s.size()-5,5)=="lala.") pf("OMG>.< I don't know!\n");
		else if(s.substr(0,5)=="miao.") pf("Rainbow's\n");
		else if(s.substr(s.size()-5,5)=="lala.") pf("Freda's\n");
		else pf("OMG>.< I don't know!\n");
	}
}