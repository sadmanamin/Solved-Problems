#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define MAX 1000000

bool prime[MAX];
void primeID(){
	//int n=sqrt(MAX);
	memset(prime,true,sizeof(prime));
	for(int i=3; i*i<=MAX; i+=2){
		if(prime[i]){
			for(int j=i*i;j<MAX;j+=(2*i)){
			prime[j]=false;
			}
		}
	}
}
vector<int> pNum;
void pusher(){
	pNum.push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(prime[i]){
		pNum.push_back(i);
		}
	}
}



int main() {
	primeID();
	pusher();
	//cout<<pNum.size()<<endl;
	int t,n;
	sc("%d",&t);
	while(t--){
		sc("%d",&n);
		pf("%d\n",pNum[n-1]);
	}
	return 0;
}