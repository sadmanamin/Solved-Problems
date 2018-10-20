#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b){

	if (a == 0) return b;

	else if (b == 0) return a;

	if (a<b) return gcd(a, b % a);

	else return gcd(b, a % b);

}

int main() {
	int N,G,i,j;
	while(scanf("%d",&N) && N){
	G=0;
	for(i=1;i<N;i++){
		for(j=i+1;j<=N;j++)
		{
			G+=gcd(i,j);
		}
	}
	printf("%d\n",G);
	}
	return 0;
}