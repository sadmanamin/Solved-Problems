#include <bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c,test,t;
	cin>>test;
	for(t=1;t<=test;t++){
        int aa[3];
        cin>>a>>b>>c;
        aa[0]=a;
        aa[1]=b;
        aa[2]=c;
        sort(aa,aa+3);
        printf("Case %d: %d\n",t,aa[1]);
	}

	return 0;
}