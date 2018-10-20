#include <bits/stdc++.h>
using namespace std;

int main() {
	int k,n,nc;
	long long int w;
	while((scanf("%d%d%lld",&k,&n,&w))==3){
		long long int sum=0;
		for(nc=1;nc<=w;nc++){
			sum+=nc*k;
		}
		if(sum>=n) printf("%lld\n",sum-n);
		else printf("0\n");
	
	}
	return 0;
}