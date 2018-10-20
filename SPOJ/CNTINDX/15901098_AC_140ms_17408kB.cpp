#include <bits/stdc++.h>
using namespace std;

unordered_map< int, vector<int> > str;
int arr[200005];
int sz=0;

int freq(int l, int r, int element){
	int a = lower_bound(str[element].begin(),str[element].end(),l)- str[element].begin();
	int b = upper_bound(str[element].begin(),str[element].end(),r)- str[element].begin();
	return b-a;
}

int main() {
	int n,q,num,x,y;
	scanf("%d",&n);
	
	for(int c=0;c<n;c++){
		scanf("%d",&q);
		
		if(q==1){
			scanf("%d",&num);
			arr[sz]=num;
			str[num].push_back(sz);
			sz++;
		}
		else if(q==2){
			scanf("%d%d%d",&num,&x,&y);
			printf("%d\n",freq(x-1,y-1,num));
			//cout<<1111<<" "<<c<<endl;
		}
		
		else if(q==0){
			if(sz>0){
			str[arr[--sz]].pop_back();
			}
			else{
				printf("invalid\n");
			}
			
		}
	}
	return 0;
}