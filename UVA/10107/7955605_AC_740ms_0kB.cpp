#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int n,ans;
	vector <long long int> v;
	while(scanf("%lld",&n)==1){
		v.push_back(n);
		sort(v.begin(),v.end());
		if(v.size()%2==0){
			ans=(v[v.size()/2-1]+v[(v.size()/2)])/2;
		}
		else ans=v[v.size()/2];
		cout<<ans<<endl;
	}
	return 0;
}