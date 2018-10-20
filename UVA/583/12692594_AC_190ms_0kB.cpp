    #include <bits/stdc++.h>
    using namespace std;
     
    bool primeNum[10000009];
    void prime(){
         memset(primeNum,true,sizeof(primeNum));
         for(int i = 3;i*i<=10000009;i+=2){
            if(primeNum[i]){
                for(int j = i*i;j<10000009;j += 2*i){
                    primeNum[j]= false;
                }
            }
         }
    }
     
    vector<int> pNum;
    void pusher(){
        pNum.push_back(2);
        for(int i = 3;i<=10000009;i += 2){
            if(primeNum[i]){
                pNum.push_back(i);
            }
        }
    }
     
     
     
    int main(){
        prime(),pusher();
    	int n;// input
    	while(scanf("%d",&n) == 1 && n){
            int num = n;//temporary variable
            vector<int> facts;
            if(num<0){
                num *= -1;
                facts.push_back(-1);
            }
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
            int szF = facts.size();
            printf("%d = %d",n,facts[0]);
            for(int i = 1;i<szF;i++){
                printf(" x %d",facts[i]);
            }
            printf("\n");
    	}
    	return 0;
    }