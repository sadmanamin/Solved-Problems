#include <bits/stdc++.h>
using namespace std;
 
int main (){
string s1,s2;
getline(cin,s1);
getline(cin,s2);
if(s1.length()==s2.length()){
	for(int c=0;c<s1.length();++c){
		s1[c]=tolower(s1[c]);
		s2[c]=tolower(s2[c]);
	}
	if(s1.compare(s2)>0){
		cout<<"1"<<endl;
	}
	else if(s1.compare(s2)<0){
		cout<<"-1"<<endl;
	}
	else{
		cout<<"0"<<endl;
	}
}
return 0;
}