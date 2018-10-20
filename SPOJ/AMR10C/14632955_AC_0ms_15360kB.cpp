#include <bits/stdc++.h>
using namespace std;
 
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,sum=0;
        scanf("%d",&n);
        int lim = sqrt(n);
        for(int c=2;c<=lim;c++){
        int cnt=0;
         if(n%c==0){
	         while(n%c==0)
	             {
	                 n/=c;
	                 cnt++;
	             }
	         }
         
         if(sum<cnt){
         	sum=cnt;
         }
        }
        if(n!=1)
        if(sum==0)
        sum=1;
        printf("%d\n",sum);
    }
    return 0;
}