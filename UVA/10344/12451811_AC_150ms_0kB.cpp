    #include <bits/stdc++.h>
    using namespace std;
    #define sc scanf
    int arr[6];
     
    bool chk(int i, int ans){
    	if(i==4 && ans==23) return true;
    	if(i==4 && ans!=23) return false;
    	//cout<<i<<" "<<ans<<" "<<ans+arr[i+1]<<" "<<ans-arr[i+1]<<" "<<ans*arr[i+1]<<endl;
    	return chk(i+1,ans+arr[i+1]) || chk(i+1,ans-arr[i+1]) || chk(i+1, ans*arr[i+1]);
    }
     
    int main() {
    	while(sc("%d%d%d%d%d",&arr[0],&arr[1],&arr[2],&arr[3],&arr[4])){
    		if(arr[0]==0 && arr[1]==0 && arr[2]==0 && arr[3]==0 && arr[4]==0) break;
    		sort(arr,arr+5);
    		bool ch=false;
    		do{
    			if(chk(0,arr[0])){
    				ch=true;
    				break;
    			}
    		}while(next_permutation(arr,arr+5));
    		if(ch) printf("Possible\n");
    		else printf("Impossible\n");
    	}
    	return 0;
    }