#include <bits/stdc++.h>
using namespace std;
int main(){
  int n,test,price[300000],i,j;
  long int discount;

  scanf("%d",&test);

    for(i=0;i<test;i++){
    discount=0;
      scanf("%d",&n);
      for(j=0;j<n;j++)
      scanf("%d",&price[j]);
      sort(price,price+n);
      for(j=n-3;j>=0;j=j-3){
      discount=discount+price[j];
      }
      printf("%ld\n",discount);
  }
    return 0;
}