#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf

int main() {
	int t,tc=1,r,c,rc,cc;
	sc("%d",&t);
	while(tc<=t){
		sc("%d%d",&r,&c);
		int a[r][c];
		int b[r];
		memset(b,0,sizeof(b));
		for(rc=0;rc<r;rc++){
			for(cc=0;cc<c;cc++){
				sc("%d",&a[rc][cc]);
				b[rc]+=a[rc][cc];
			}
		}
		int x=0;
		for(int c=0;c<r;c++){
			x^=b[c];
		}
		if(x==0) pf("Case %d: Bob\n",tc++);
		else pf("Case %d: Alice\n",tc++);
	}
	return 0;
}