#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,tc=1,n;
	scanf("%d",&t);
	while(tc<=t){
		scanf("%d",&n);
		int a[n],b[n];
		for(int c=0;c<n;c++){
			scanf("%d",&a[c]);
		}
		sort(a,a+n);
		for(int c=0;c<n;c++){
			scanf("%d",&b[c]);
		}
		sort(b,b+n);
		int sum=0;
		for(int c=0;c<n;c++){
			sum+=abs(a[c]-b[c]);
		}
		printf("Case %d: %d\n",tc++,sum);
	}
	return 0;
}