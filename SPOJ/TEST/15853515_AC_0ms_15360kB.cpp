#include <bits/stdc++.h>
using namespace std;

int main() {
	int n;
	vector<int> v;
	bool chk = true;
	
	while(scanf("%d",&n)==1){
		if(n==42) chk=false;
		
		if(chk) v.push_back(n);
	}
	
	for(int c=0;c<v.size();c++){
		printf("%d\n",v[c]);
	}
	return 0;
}