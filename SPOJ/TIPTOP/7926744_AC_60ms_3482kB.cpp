#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,tc=1;
	scanf("%d",&test);

	while(tc<=test){
        long long int n;
		scanf("%lld",&n);
		long long int c=sqrtl(n);
		if(c*c==n)
		{
			printf("Case %d: Yes\n",tc);
		}
		else
		{
			printf("Case %d: No\n",tc);
		}
		tc++;

	}
	return 0;
}