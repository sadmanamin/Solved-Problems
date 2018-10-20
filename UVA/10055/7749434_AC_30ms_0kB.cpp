#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int a,b;
	while(scanf("%lld%lld",&a,&b)==2){
        int c=abs(a-b);
        printf("%lld\n",c);
	}
	return 0;
}