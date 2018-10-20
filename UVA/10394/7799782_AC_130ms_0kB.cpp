#include <bits/stdc++.h>
#define MAX 20000010
using namespace std;


bool prime[MAX];
void primeID(){
	int n=sqrt(MAX);
	memset(prime,true,sizeof(prime));
	for(int i=3; i<=n; i+=2){
		if(prime[i]){
			for(int j=i*i;j<MAX;j+=(2*i)){
			prime[j]=false;
			}
		}
	}
}
vector<int> pNum;
void pNumPusher(){
	pNum.push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(prime[i]){
		pNum.push_back(i);
		}
	}
}
vector<int> serialP;
void sP(){
    int n=pNum.size(),nc;
    serialP.push_back(3);
    for(nc=0;nc<n-1;nc++){
        if(pNum[nc+1]-pNum[nc]==2) serialP.push_back(pNum[nc]);
    }
}

int main(){
    primeID();
    pNumPusher();
    sP();
    int n;
    while((scanf("%d",&n))!=EOF){
        printf("(%d, %d)\n",serialP[n],(serialP[n]+2));
    }
    return 0;
}