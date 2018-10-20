#include <bits/stdc++.h>
using namespace std;
#define MAX 500000
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
void pusher(){
	pNum.push_back(2);
	for(int i=3;i<MAX;i+=2){
		if(prime[i]){
		pNum.push_back(i);
		}
	}
}


int main(){
    primeID();
    pusher();
    int pCnt=0,n,cnt;
    cin>>n;
    for(int c=2;c<=n;c++){

        for(int d=0;pNum[d]<=c &&pNum[d]<=n;d++){
            if(c%pNum[d]==0) cnt++;
        }
        if(cnt==2){
            //cout<<c<<endl;
            pCnt++;
        }
        cnt=0;
    }
    cout<<pCnt<<endl;
    return 0;
}
