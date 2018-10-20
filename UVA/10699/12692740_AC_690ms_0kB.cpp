    #include <bits/stdc++.h>
    using namespace std;
    #define MAX 100000000
    map<long long,long long> mp;
    map<long long,long long> :: iterator it;
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
    	long long n;
    	bool chk=false;
    	while(scanf("%lld",&n) && n){
    		//if(chk) printf("\n");
    		long long m=n;
     
    		for(int c=0;pNum[c]*pNum[c]<=10000000;c++){
    		if(n==1) break;
     
    		if(n%pNum[c]==0){
    			int cnt=0;
    			while(n%pNum[c]==0){
    				n/=pNum[c];
    				cnt++;
    			}
    			mp[pNum[c]]=cnt;
    		}
    		}
    		if(n>1) mp[n]=1;
     
     
    		printf("%lld : %d\n",m,mp.size());
    		mp.clear();
    		chk=true;
    	}
     
    	return 0;
    }