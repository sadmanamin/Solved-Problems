#include <bits/stdc++.h>
using namespace std;

int main() {
	int test,t,n,nC;
	cin>>test;;
	for(t=1;t<=test;t++){
        cin>>n;
        int a[n];
        for(nC=0;nC<n;nC++){
            cin>>a[nC];
        }
        sort(a,a+n);
        int check=n/2;
        printf("Case %d: %d\n",t,a[check]);
	}


	return 0;
}