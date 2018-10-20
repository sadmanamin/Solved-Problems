#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pb push_back
 
using namespace std;
typedef long long int ll;
 
int main() {
	int num;
	while(sc("%d",&num)==1&& num!=0){
		ll arr[num];
		ll x;
		for(int i=0;i<num;i++){
			sc("%lld",&x);
			arr[i]=x;
		}
 
 
    for(int i=1;i<num;i++)
    {
    arr[i]=arr[i-1]+arr[i];
    }
 
    ll sum=0;
    for(int i=0;i<num;i++){
    	sum+=abs(arr[i]);
    }
 
    cout<<sum<<endl;
}
 
 
	return 0;
}