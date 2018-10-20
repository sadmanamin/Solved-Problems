#include <bits/stdc++.h>
using namespace std;

int main() {
	int cor,cnt=0;
	cin>>cor;
	while(cor!=0){
		if(cor>=5){
		cor=cor-5;
		cnt++;
		}
		else if(cor>=4){
			cor=cor-4;
			cnt++;
		}
		else if(cor>=3){
			cor=cor-3;
			cnt++;
		}
		else if(cor>=2){
			cor=cor-2;
			cnt++;
		}
		else if(cor>=1){
			cor=cor-1;
			cnt++;
		}
		
	}
	cout<<cnt<<endl;
	return 0;
}