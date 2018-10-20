#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,targ,ln=0;
	while(scanf("%d",&n)==1){
		//if(ln!=0) printf("\n");
		int a[n];
		for(int c=0;c<n;c++){
			cin>>a[c];
		}
		cin>>targ;
		sort(a,a+n);
		int lo=0,hi=n-1,val1,val2;
		while(lo<hi){
			
			if(a[lo]+a[hi]==targ){
					
					val1=a[lo];
					val2=a[hi];
					hi--;
					lo++;
			}
			else if(a[lo]+a[hi]>targ) hi--;
			else if(a[lo]+a[hi]<targ) lo++;
			//if(lo==hi) break;
		}
		printf("Peter should buy books whose prices are %d and %d.\n",val1,val2);
		printf("\n");
	}
	//printf("\n");
	return 0;
}