#include <bits/stdc++.h>
using namespace std;
const int mx=1e4+5;
const double PI=2*acos(0.0);
const double eps=1e-7;
int n,f;
double pie[mx];

bool fund(double val){
	int cnt=0;
	for(int i=0;i<n;i++){
		cnt+=(int)(pie[i]/val);
		
	}
	return (cnt>=f)? true:false;
}
	

int main() {
	int t; scanf("%d",&t);
	for(int i=1;i<=t;i++){
		scanf("%d%d",&n,&f);
		f++;
		for(int j=0;j<n;j++){
			scanf("%lf",&pie[j]);
			pie[j]=PI*pie[j]*pie[j];
		}
		sort(pie,pie+n);
		double lo=0,hi=pie[n-1],mid;
		while(hi-lo>eps){
			mid=(lo+hi)/2;
			if(fund(mid)) lo=mid;
			else hi=mid;
		}
		printf("%.4lf\n",(hi+lo)/2);
	}
	return 0;
}