#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back

int toBinary(int n)
{
    string r;
    while(n!=0) {
    	r=(n%2==0 ?"0":"1")+r;
    	n/=2;
    }
    stringstream ss;
    ss<<r;
    ss>>n;
    return n;
}



int main() {
	int t,tc=1,a1,a2,b1,b2,c1,c2,d1,d2;
	sc("%d",&t);
	while(tc<=t){
		sc("%d.%d.%d.%d",&a1,&b1,&c1,&d1);
		sc("%d.%d.%d.%d",&a2,&b2,&c2,&d2);
	
	
	if(toBinary(a1)==a2 && toBinary(b1)==b2 && toBinary(c1)==c2 && toBinary(d1)==d2 ){
		pf("Case %d: Yes\n",tc++);
	}
	else pf("Case %d: No\n",tc++);
	}
	return 0;
}