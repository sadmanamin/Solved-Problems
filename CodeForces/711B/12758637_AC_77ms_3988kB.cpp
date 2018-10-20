    #include <bits/stdc++.h>
    using namespace std;
     
    long long sz,x,y,cur=0,summ1=0,summ2=0;
    long long arr[502][502];
     
    long long hS(long long n,long long m){
    	long long nn=0,sum=0,xx=0;
    	//cout<<"sz "<<sz<<" "<<n<<endl;
    	if(n>=0 && n<sz){
    		nn=n;
    		xx=n+1;
    		//cout<<xx<<" "<<n<<endl;
    	}
    	else if(m>=0 && m<sz){
    		nn=m;
    		xx=m-1;
    		//cout<<xx<<" "<<m<<endl;
    	}
     //cout<<xx<<" "<<n<<" "<<m<<endl;
    	for(int c=0;c<sz;c++){
    		sum+=arr[c][nn];
    	}
    	for(int c=0;c<sz;c++){
    		cur+=arr[c][xx];
    	}
    	return sum;
    }
     
     
    int main() {
    	scanf("%lld",&sz);
    	bool chk=true;
    	if(sz>1){
    	for(int c=0;c<sz;c++){
    		for(int d=0;d<sz;d++){
    			scanf("%lld",&arr[c][d]);
    			if(arr[c][d]==0){
    				x=c;
    				y=d;
    			}
    		}
    	}
	//cout<<x<<" "<<y<<endl;
    	long long full=hS(y-1,y+1),sm2=0,sm3=0;
    	//cout<<full<<" "<<cur<<endl;
    	//printf("%lld %lld\n",full,cur);
    	cur=full-cur;
    	arr[x][y]=cur;
    	int y=sz-1;
     
    	//printf("%lld %lld\n",full,summ);
    	for(int c=0;c<sz;c++){
    		summ1=0,summ2=0;
    		for(int d=0;d<sz;d++){
    			summ1+=arr[c][d];
    			summ2+=arr[d][c];
    		}
    		if(summ1!=full || summ2!=full){
    			chk=false;
    			break;
    		}
     
    		//cout<<summ<<endl;
    		sm2+=arr[c][c];
    		sm3+=arr[y--][c];
     
    	}
    	if(cur<=0 || sm2!=full ||sm3!=full) chk=false;
    	}
    	if(sz==1){
    		printf("1\n");
    	}
     
    	else if(chk) printf("%lld\n",cur);
    	else printf("-1\n");
    	return 0;
    }
     

