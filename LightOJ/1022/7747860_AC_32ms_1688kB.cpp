#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,t;
	double Pi=2*acos (0.0),r,a,l;
	cin>>test;
	for(t=1;t<=test;t++){
        cin>>r;
        a=Pi*r*r;
        l=2*r*2*r;
        printf("Case %d: %.2lf\n",t,(l-a));
	}
	return 0;
}