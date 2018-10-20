#include <bits/stdc++.h>
using namespace std;
#define MAX 10000000
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

void psher(){


pNum.push_back(1);

pNum.push_back(2);

for(int i=3;i<MAX;i+=2){

if(prime[i]){

pNum.push_back(i);

}

}

}

int main(){
    primeID();
    psher();
    int n;
    unsigned long long int p;
    while(cin>>n && n){
        if(n==31) printf("Perfect: 2305843008139952128!\n");
        else if(binary_search(pNum.begin(),pNum.end(),n)){
            if(binary_search(pNum.begin(),pNum.end(),(pow(2,n)-1))){
                p=pow(2,n-1)*(pow(2,n)-1);
                printf("Perfect: %llu!\n",p);
            }
            else printf("Given number is prime. But, NO perfect number is available.\n");
        }
        else printf("Given number is NOT prime! NO perfect number is available.\n");
    }
	return 0;
}