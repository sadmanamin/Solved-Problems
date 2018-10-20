#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf

int main() {
	int t,tc=1,x1,x2,y1,y2,x,y,n;
	sc("%d",&t);
	while(tc<=t){
		sc("%d%d%d%d",&x1,&y1,&x2,&y2);
		pf("Case %d:\n",tc++);
		sc("%d",&n);
		while(n--){
			sc("%d%d",&x,&y);
			if(x>x1 && x<x2 && y>y1 && y<y2) pf("Yes\n");
			else pf("No\n");
		}
	}
	return 0;
}