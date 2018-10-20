#include <bits/stdc++.h>
using namespace std;
 
int main (){
string s1;
getline(cin,s1);
	for(int c=0;c<s1.length();++c){
		s1[c]=tolower(s1[c]);
	}
	for(int c=0;c<s1.length();++c){
		if(s1[c]!='a' && s1[c]!='e' && s1[c]!='i' && s1[c]!='o' && s1[c]!='u' && s1[c]!='y'){
			cout<<"."<<s1[c];
		}
	}
return 0;
}