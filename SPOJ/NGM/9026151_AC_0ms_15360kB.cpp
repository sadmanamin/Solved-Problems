#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main() {
	ll n;
	scanf("%lld",&n);
	if(n%10==0){
		printf("2\n");
	}
	else{
		printf("1\n%lld\n",(n%10));
	}
	return 0;
}