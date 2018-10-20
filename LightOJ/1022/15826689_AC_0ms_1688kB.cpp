#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,tc=1;
	scanf("%d",&t);
	
	while(tc<=t){
		double r,pi=2*acos(0.0);
		scanf("%lf",&r);
		double sq = (2.0*r)*(2.0*r);
		double cr = pi*r*r;
		printf("Case %d: %.2lf\n",tc++,sq-cr);
	}
	return 0;
}