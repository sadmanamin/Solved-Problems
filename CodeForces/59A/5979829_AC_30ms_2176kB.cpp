#include <bits/stdc++.h>
using namespace std;
int main()
{
	string s;
	while(getline(cin,s)){
	int lowerc = 0, upperc = 0;
	for (int i = 0; i < s.size(); i++)
	{
		if (islower(s[i])){
		lowerc++;
		}
		else{
		upperc++;
		}
	}
	if (lowerc>=upperc)
	{
		for (int i = 0; i < s.size(); i++)
			s[i] = tolower(s[i]);
		cout << s << endl;
	}
	else
	{
		for (int i = 0; i < s.size(); i++)
			s[i] = toupper(s[i]);
		cout << s << endl;
	}
	}
	return 0;
}