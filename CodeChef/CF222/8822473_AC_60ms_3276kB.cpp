#include <bits/stdc++.h>
using namespace std;

/*bool isSubsequence(string s1, string s2){
    int m=s1.size(),n=s2.size(),j=0;
    for(int c=0;c<n;c++){
        if(s1[j]==s2[c]) j++;
    }
    return j==m;
}*/

int main() {
	string s1,s2,s="";
	cin>>s1;
	cin>>s2;
	int sz=0;
	for(int c=0;c<s2.size();c++){
        if(sz==s1.size()) break;
        if(s1[sz]==s2[c]) sz++;
	}
	printf("%d\n",sz);
	return 0;
}
