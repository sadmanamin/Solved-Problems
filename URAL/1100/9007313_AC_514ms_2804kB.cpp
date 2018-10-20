#include <bits/stdc++.h>
using namespace std;

bool cmp(pair<int,int> a, pair<int,int> b){
	return (a.second>b.second);
}

int main() {
	int test,id,solve;
	scanf("%d",&test);
	vector<pair<int,int>> v;
	while(test--){
		scanf("%d%d",&id,&solve);
		v.push_back(make_pair(id,solve));
	}
	stable_sort(v.begin(),v.end(),cmp);
	for(int c=0;c<v.size();c++){
		printf("%d %d\n",v[c].first,v[c].second);
	}
	return 0;
}