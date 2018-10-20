#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,tc=1,n,h,ta,td,ans;
	scanf("%d",&test);
	while(tc<=test){
		scanf("%d%d%d%d",&n,&h,&ta,&td);
		int hip[n];
		for(int c=0;c<n;c++){
			scanf("%d",&hip[c]);
		}
		sort(hip,hip+n);
		if(td>=2*ta) ans=ta*n;
		else{
			int lo=0,hi=n-1;
			int doub=0,sing=n;
			while(lo<hi){
				
				if(hip[lo]+hip[hi]>=h){
					hi--;
				}
				else if(hip[lo]+hip[hi]<h){
					lo++;
					hi--;
					doub+=1;
					sing-=2;
				}
			}
			
			ans=td*doub+ta*sing;
		}
		printf("Case %d: %d\n",tc++,ans);
	}
	return 0;
}