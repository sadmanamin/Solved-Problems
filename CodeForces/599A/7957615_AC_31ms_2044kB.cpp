#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int x,y,z,a,b,c,d;
	scanf("%lld%lld%lld",&x,&y,&z);
	a=min(x,y);
	b=max(x,y);
	c=min(z,(x+y));
	d=min((a+z),b);
	cout<<a+c+d<<endl;
	return 0;
}