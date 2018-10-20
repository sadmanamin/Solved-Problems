#include <bits/stdc++.h>
using namespace std;
 
int main (){
int c,t;
long long int sum=0;
cin>>t;
long long int a[t];
for(c=0;c<t;++c){
	cin>>a[c];
}

sort(a,a+t);

for(c=0;c<t;++c){
	sum=sum+a[c];
}

if(sum%2==0){
	cout<<sum;
}

else{
	for(c=0;c<t;++c){
    	if(a[c]%2!=0){
    	sum=sum-a[c];
    	break;
    }
}

cout<<sum;
	}
	
	

return 0;
}