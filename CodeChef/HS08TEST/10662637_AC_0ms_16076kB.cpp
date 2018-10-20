#include<bits/stdc++.h>
using namespace std;
 
int main()
{
	int x;
	float y;
	cin>>x;
	cin>>y;
	if( x%5==0 && y>(x+0.5) )
	cout<<y-(x+0.5);
	
	else 
	cout<<y;
	
}