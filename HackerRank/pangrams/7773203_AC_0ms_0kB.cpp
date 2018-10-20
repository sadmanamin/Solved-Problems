#include <bits/stdc++.h>
using namespace std;

int main() {
	string a = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

	string s;
	getline(cin,s);
	int x=s.size();

	for(int c=0;c<x;c++)
	{
		s[c]=toupper(s[c]);
	}

	int b=0;

	for(int c=0;c<26;c++)
	{
		int l=0;
		for(int ch=0;ch<x;ch++)
		{
			if(a[c]==s[ch])
			{
				l++;
			}
		}

		if(l==0)
		{
			b++;
			break;
		}
	}
if(b==1)
	{
		cout<<"not pangram"<<endl;
	}
	else
	{
	     cout<<"pangram"<<endl;
	}
return 0;
}