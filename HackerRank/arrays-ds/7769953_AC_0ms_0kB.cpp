#include <bits/stdc++.h>
using namespace std;

int main() {
	int n,nC;
	cin>>n;
	int a[n];
	for(nC=0;nC<n;nC++){
        cin>>a[nC];
	}
	for(nC=n-1;nC>=0;nC--){
        printf("%d ",a[nC]);
        if(nC==0) printf("\n");
	}
    return 0;
}