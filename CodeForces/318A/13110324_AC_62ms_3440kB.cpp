#include<bits/stdc++.h>
using namespace std;

int an(int a,int b){
	return a+a/b;
}

int main(){
    long long n,k,ans;
    scanf("%lld %lld",&n,&k);
    long long mid=n/2;
    if(n%2!=0) mid++;
    if(k>mid){
    	k=k-mid;
    	ans=2+(k-1)*2;
    }
    else{
    	ans=1+(k-1)*2;
    }
    printf("%lld\n",ans);
}
