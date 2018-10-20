#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test;
	scanf("%d",&test);
	for(int i=0;i<test;i++){
		int n,k;
		scanf("%d%d",&n,&k);
		int counter=0;
		for(int j=0;j<n;j++){
			long long int num,a,b;
			scanf("%lld",&num);
			if(k==1||num==1)counter++;
			else{
				while(num%k==0){
					if(num==k){
						counter++;
						break;
					}
					num=num/k;
				}
			}
		}
		cout<<counter<<endl;
	}
	return 0;
}