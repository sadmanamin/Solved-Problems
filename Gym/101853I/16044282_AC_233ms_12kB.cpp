#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pi acos(-1.0)
using namespace std;

int main() {
	
	int n;
	sc("%d",&n);
	
	for(int i=0;i<n;i++){
	
	double a,b,d;
	sc("%lf%lf%lf",&a,&b,&d);
	double r = d/2;
	
	//cout<<r<<endl;
	double bigCircle = pi*r*r;
	double squire = (1.0/2)*d*d;
	
	double white = bigCircle-squire;
	
	double side = sqrt(squire);
	double smallr = side/2;
	
	double smallCircle = pi*smallr*smallr*2;
	
	double ans = smallCircle-white;
	
	pf("%.10f\n",ans);
	
	}
	return 0;
}