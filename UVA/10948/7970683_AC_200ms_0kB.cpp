#include <bits/stdc++.h>
using namespace std;
 
bool pNum[10000000];
void primeChecker(){
	memset(pNum,true,sizeof(pNum));
	 //setting all values into true
	int n=sqrt(10000000);
	for(int i=2;i<=n;i++)
	{
		if(pNum[i==true])
		{
		   for(int j=i*i;j<=10000000;j+=i)
		  {
			pNum[j]=false;
		  }
		}
	}
	pNum[0]=false;
	pNum[1]=false;
}
     //all values except primes has been turned into true;
 
 
     vector<int>primes;
 
void store(){
	primes.push_back(2);
	for(int i=3;i<=10000000;i+=2)
	{
		if(pNum[i]==true)
		{
			primes.push_back(i);
		}
	}
}
 
 
int main() {
	primeChecker();
	store();
	int num;
	while(scanf("%d",&num)==1)
	{
		if(num==0)
		{
			break;
		}
		int counter=0;
		while(primes[counter]<num)
		{
			counter++;
		}
 
		int x=0;
		for(int i=0;i<=counter-1;i++)
		{
			if(pNum[num-primes[i]]==true)
			{
				printf("%d:\n%d+%d\n",num,primes[i],num-primes[i]);
				x++;
				break;
			}
		}
		if(x==0)
		{
				printf("%d:\nNO WAY!\n",num);
		}
	}
	return 0;
}