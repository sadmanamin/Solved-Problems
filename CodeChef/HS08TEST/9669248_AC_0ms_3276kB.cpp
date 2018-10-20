#include<bits/stdc++.h>
using namespace std;
int main()
{
 int x;
 double y;
 cin>>x;
 cin>>y;
 if((x>0&&x<=2000)&&(y>=0&&y<=2000))
{
    if(x%5==0&&(y-0.5)>x)
    {
     y=y-(x+0.5);
     cout<<endl<<y;
     }
     else{
     cout<<endl<<y;
      }
 
}
  return 0;
 }