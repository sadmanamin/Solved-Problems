#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,t,n,nC;
	cin>>test;;
	for(t=1;t<=test;t++){
       cin>>n;
       int a[n],sum=0;;
       for(nC=0;nC<n;nC++){
            cin>>a[nC];
            if(a[nC]>=0)sum+=a[nC];
       }
       printf("Case %d: %d\n",t,sum);
        
	}


	return 0;
}