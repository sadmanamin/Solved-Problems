#include <bits/stdc++.h>
using namespace std;
 
bool primeNum[10000000];
void prime(){
	memset(primeNum,true,sizeof(primeNum));
	int n=sqrt(10000000);
	for(int i=2;i<=n;i++)
	{
		if(primeNum[i]==true)
		{
			for(int j=i*i;j<=10000000;j+=i)
			{
				primeNum[j]=false;
			}
		}
	}
	primeNum[0]=false;
	primeNum[1]=true;
}
 
vector<int>pNum;
void pusher(){
	pNum.push_back(1);
	pNum.push_back(2);
	for(int i=3;i<=10000000;i+=2){
		if(primeNum[i])
		{
			pNum.push_back(i);
		}
	}
}
int main() {
	prime();
	pusher();
	string a;
	while(getline(cin,a))
	{
		int sum=0;
		for(int i=0;i<a.size();i++)
		{
			if(islower(a[i]))
			{
				sum=sum+(a[i]-'a'+1);
			}
			else
			{
				sum=sum+(a[i]-'A'+27);
			}
		}
		if(primeNum[sum])
		{
			cout<<"It is a prime word."<<endl;
		}
		else
		{
			cout<<"It is not a prime word."<<endl;
		}
	}
 
 
	return 0;
}