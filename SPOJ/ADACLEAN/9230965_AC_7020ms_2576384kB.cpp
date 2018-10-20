#include <bits/stdc++.h>
using namespace std;
set<string>myset;
int main() {
    int t;
    cin>>t;
    for(int j=0;j<t;j++)
    {
        int len ,str;
        cin>>len>>str;
        string s,t;
        cin>>s;
	for(int i=0;i<=len-str;i++)
	{

		t=s.substr(i,str);
		myset.insert(t);

	}
	   cout<<myset.size()<<endl;
	   myset.clear();

	}
	return 0;
}
