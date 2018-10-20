#include <bits/stdc++.h>
using namespace std;

int main() {
	int t,n,tc=1,res=0;
	int a[201],b[101];
	scanf("%d",&t);
	while(tc<=t){
		res=0;
		scanf("%d",&n);
		for(int c=0;c<2*n;c++){
			scanf("%d",&a[c]);
		}
		for(int c=0,d=0;c<n;c++,d+=2){
			b[c]=abs(a[d]-a[d+1])-1;
		}
		
		for(int c=0;c<n;c++){
			res^=b[c];
		}
		if(res==0) printf("Case %d: Bob\n",tc++);
		else printf("Case %d: Alice\n",tc++);
		
	}
	return 0;
}