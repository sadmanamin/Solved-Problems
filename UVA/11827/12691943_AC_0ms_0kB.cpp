#include <bits/stdc++.h>
using namespace std;

long gcd(long a, long b){

	if (a == 0) return b;

	else if (b == 0) return a;

	if (a<b) return gcd(a, b % a);

	else return gcd(b, a % b);

}

int main() {
	int test,nc,nnc,carry,max;
	string s;
	scanf("%d",&test);
	getline(cin,s);
	while(test--){
		max=0;
		vector<int> v;
		getline(cin,s);
        istringstream is( s );
        int n;
        while( is >> n ) {
            v.push_back(n);
        }

        for(nc=0;nc<v.size()-1;nc++){
			for(nnc=nc+1;nnc<v.size();nnc++){
				carry=gcd(v[nc],v[nnc]);
				//cout<<carry<<endl;
				if(carry>max) max=carry;
			}
		}
		printf("%d\n",max);
	}
	return 0;
}