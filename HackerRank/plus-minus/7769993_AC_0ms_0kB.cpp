#include <bits/stdc++.h>
using namespace std;

int main() {
	int s,sc;
	double pos=0,neg=0,zero=0;
	scanf("%d",&s);
	int a[s];
	for(sc=0;sc<s;sc++){
        cin>>a[sc];
        if(a[sc]>0)pos++;
        else if(a[sc]<0) neg++;
        else zero++;
	}
	printf("%lf\n",pos/s);
	printf("%lf\n",neg/s);
	printf("%lf",zero/s);

    return 0;
}