#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define pb push_back
#define ll long long

int arr[1005];
 
int main() {
   int n;
   sc("%d",&n);
   for(int c=0;c<n;c++){
    sc("%d",&arr[c]);
   }
   int cc=0;
   int x1=1000000;
   for(int c=0;c<n;c++){
    for(int d=0;d<n;d++){
        int t=arr[c];
        if(arr[d]<=t){
 
            cc++;
        }
        else
        {
            cc=0;
        }
        if(cc>1||(d==n-1&&arr[d]<=t)||(d==0&&arr[d]<=t))
	        {
	            if(x1>arr[c])
	                x1=arr[c];
	        }
    }
   }
 
        pf("%d\n",x1);
 
 
   return 0;
}