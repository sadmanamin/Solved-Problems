#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int test,tc=0,x,y,z,max=0,maxI=0,min=10000000,minI=0;
	cin>>test;
	string s[test];
	int a[test];
 
	while(tc<test){
		cin>>s[tc]>>x>>y>>z;
		a[tc]=x+y*30+z*12*30;
		tc++;
	}
 
	for(tc=0;tc<test;tc++){
		if(a[tc]>max){
			max=a[tc];
			maxI=tc;
		}
 
		if(a[tc]<min){
			min=a[tc];
			minI=tc;
		}
	}
	//cout<<maxI<<" "<<minI<<endl;
	cout<<s[maxI]<<endl<<s[minI]<<endl;
	return 0;
}