#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,tc=1,n,avg,num,sum=0;
	scanf("%d",&t);
	while(tc<=t){
		scanf("%d%d",&n,&avg);
		sum=0;
		for(int c=0;c<n;c++){
			scanf("%d",&num);
			sum+=num;
		}
		printf("Case %d: %d\n",tc++,avg*(n+1)-sum);
	}
	return 0;
}