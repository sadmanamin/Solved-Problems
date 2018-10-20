#include <bits/stdc++.h>
using namespace std;
#define maxN 1000001
long long arr[1000005];
bool isPrime[1000009];
/*void prime(){
     memset(primeNum,true,sizeof(primeNum));
     for(int i = 3;i*i<=1000009;i+=2){
        if(primeNum[i]){
            for(int j = i*i;j<1000009;j += 2*i){
                primeNum[j]= false;
            }
        }
     }
}


void pusher(){
    pNum.push_back(2);
    for(int i = 3;i<=1000009;i += 2){
        if(primeNum[i]){
            pNum.push_back(i);
        }
    }
}*/
vector<int> pNum;
void Sieve() {
    memset(isPrime, true, maxN);
    isPrime[0] = isPrime[1] = false;
    for (int i=2, lm=(int)sqrt(maxN); i<=lm; i++)
        if (isPrime[i]) {
            for (int j=i*i; j<=maxN; j+=i)
                isPrime[j] = false;
            pNum.push_back(i);
        }
    for (int i=pNum.back()+1; i<=maxN; i++)
        if (isPrime[i]) pNum.push_back(i);
}
 vector<int> facts;
int szOf(int n){
	int num = n;//temporary variable
    	facts.clear();
        int sz = pNum.size();
        for(int i = 0;i<sz && num!=1 && pNum[i]*pNum[i]<=num;i++){
            int x = pNum[i];
            if(num%x == 0){
                while(num%x == 0){
                    facts.push_back(x);
                    num/= x;
                }
            }
        }
        if(num>1){
            facts.push_back(num);
        }
		return facts.size();
}


int main(){
    //prime(),pusher();
    Sieve();
	int n,cnt;// input
	arr[1]=0;
	for(int c=2;c<=1000000;c++){
		/*if(binary_search(pNum.begin(),pNum.end(),c)){
    		arr[c]=1;
    		}*/
    		arr[c]=arr[c-1];
    		 arr[c]+=szOf(c);
	}
	while(scanf("%d",&n)!=EOF){
		cnt=0;
	      /*for(int c=2;c<=n;c++){ 
	    	cnt+=arr[c];
	      }*/
	cout<<arr[n]<<endl;
	}
	return 0;
}