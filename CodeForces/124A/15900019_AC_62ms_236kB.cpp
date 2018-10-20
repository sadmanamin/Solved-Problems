#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,a,b;
	scanf("%d%d%d",&n,&a,&b);
	int aa=1+a;
	int bb=n-b;
	int ans=n-max(aa,bb)+1;
	printf("%d",ans);
	return 0;
}