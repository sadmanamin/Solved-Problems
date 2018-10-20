#include <bits/stdc++.h>
#define pb push_back
typedef long long int ll;
using namespace std;
 
vector<ll>store;
 
void fac(){
	int counter=1;
	store.pb(1);
	store.pb(1);
	for(int i=2;i<11;i++){
		ll sum=store[i-1]*i;
		store.pb(sum);
	}
}
 
ll combo(int num){
	ll ans = store[num]/(2*store[num-2]);
	return ans;
}
 
int main() {
	fac();
	int n;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int m,n;
		scanf("%d%d",&m,&n);
		//cout<<m<<" "<<n<<endl;
		int arr[m][n];
		for(int j=0;j<m;j++){
			string str;
			cin>>str;
			for(int k=0;k<n;k++){
				arr[j][k]=str[k]-'0';
				//cout<<arr[j][k];
			}
			//cout<<endl;
		}
		int sum=0;
		for(int j=0;j<n;j++){
			int counter=0;
			for(int k=0;k<m;k++){
				//cout<<arr[k][j];
				if(arr[k][j]==1)counter++;
			}
			//cout<<counter<<endl;
			if(counter>1)sum+=combo(counter);
		}
		cout<<sum<<endl;
	}
 
 
	return 0;
}