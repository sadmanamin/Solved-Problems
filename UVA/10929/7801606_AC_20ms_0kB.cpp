#include <bits/stdc++.h>
using namespace std;

int main() {
	string num;
	stringstream ss;
	int sum1,sum2,nc,c;
	while(cin>>num && num!="0"){
		sum1=0;
		sum2=0;
		for(nc=0;nc<num.size();nc+=2){
			//ss<<num[nc];
			//ss>>c;
			sum1+=num[nc]-'0';
		}
		
		for(nc=1;nc<num.size();nc+=2){
			
			sum2+=num[nc]-'0';
		}
		//cout<<sum1<<" "<<sum2<<endl;
		//cout<<abs(sum1-sum2)<<endl;
		if((abs(sum1-sum2))==0 || (abs(sum1-sum2))%11==0) cout<<num<<" is a multiple of 11."<<endl;
		else cout<<num<<" is not a multiple of 11."<<endl;
	}
	return 0;
}