#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n];
	for(int c=0;c<n;c++){
		scanf("%d",&a[c]);
	}
	int sum=0,hi=0,lo=0,mx=0;
	sum=a[lo];
	mx=sum;
	while(true){
		if(sum<m){
			hi++;
			if(hi==n) break;
			sum+=a[hi];
			if(sum>mx && sum<=m) mx=sum;
		}
		else if(sum>m){
			sum-=a[lo];
			if(sum>mx && sum<=m) mx=sum;
			lo++;
			if(lo==n) break;
		}
		else if(sum==m){
			break;
		}
	}
	printf("%d\n",mx);
	return 0;
}