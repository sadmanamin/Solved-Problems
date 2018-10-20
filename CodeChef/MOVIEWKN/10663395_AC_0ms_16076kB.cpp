#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf


int main() {
	int t;
	sc("%d",&t);
	while(t--) {
		ll n;
		sc("%lld",&n);
		ll l[n];
		ll r[n];
		ll i;
		for(i = 0; i < n ; i++)
			sc("%lld",&l[i]);
		for(i = 0; i < n ; i++)
			sc("%lld",&r[i]);
		ll max = l[0]*r[0];
		for(i = 1; i < n; i++) {
			if(l[i]*r[i] > max) {
				max = l[i]*r[i];
			}
		}
		int id;
		int ri;
		ri = -1;
		id = n;
		for(i = n-1; i >= 0; i--) {
			if(l[i] * r[i] == max) {
				if(r[i] > ri) {
					ri = r[i];
					id = i;
				}
				if(r[i] == ri) {
					if(i < id) {
						id = i;
					}
				}
			}
		}
		pr("%d\n",id+1);
	}
	return 0;
}
