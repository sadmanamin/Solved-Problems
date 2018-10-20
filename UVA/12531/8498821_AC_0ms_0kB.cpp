#include<bits/stdc++.h>
using namespace std;
int main()
{
vector<int> v;
int n,carry;
for(int c=0;c<=60;c++){
    carry=6*c;
    v.push_back(carry);
}
while(scanf("%d",&n)==1){
    if(binary_search(v.begin(),v.end(),n)) cout<<"Y"<<endl;
    else cout<<"N"<<endl;
}

    return 0;
}
