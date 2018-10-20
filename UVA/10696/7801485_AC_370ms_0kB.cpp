#include <bits/stdc++.h>
using namespace std;



int main() {
	int n;
	while(cin>>n && n!=0){
		if(n>=101) printf("f91(%d) = %d\n",n,(n-10));
		else printf("f91(%d) = 91\n",n);
	}
	
	return 0;
}