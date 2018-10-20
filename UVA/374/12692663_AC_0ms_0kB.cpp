#include <bits/stdc++.h>
using namespace std;

#define i64 long long
i64 M,B,P,ans;
i64 BigMod(i64 N,i64 P)
{
	if(P==0) return 1;
	if(P%2==0) 
	{
		i64 ret=BigMod(N,P/2);
		return ((ret%M)*(ret%M))%M;
	}
	else return ((N%M)*(BigMod(N,P-1)%M))%M;
	
}

int main() {
	while(scanf("%d%d%d",&B,&P,&M)!=EOF){
		ans=BigMod(B,P);
		printf("%lld\n",ans);
	}
	return 0;
}