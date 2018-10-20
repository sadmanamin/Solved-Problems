#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,k,cnt=0;
	scanf("%d %d",&n,&k);
	int arr[n];
	
	for(int c=0;c<n;c++){
		scanf("%d",&arr[c]);
	}
	sort(arr,arr+n);
	
	for(int c=0;arr[c]+k<=arr[n-1];c++){
		if(arr[lower_bound(arr,arr+n,arr[c]+k)-arr]==arr[c]+k) cnt++;
	}
	
	printf("%d\n",cnt);
	
	return 0;
}