#include <bits/stdc++.h>
using namespace std;

int main() {
	long long int test,t,a;
	cin>>test;
	for(t=1;t<=test;t++){
        cin>>a;
        if(a%2==0){
            printf("%lld is even\n",a);
        }
        else{
            printf("%lld is odd\n",a);
        }
	}


    return 0;
}