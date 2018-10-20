#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf
vector<int> small;
vector<int> big;
vector<int> arr;
int t,tc=1,n,nn,extra,cc,c;
bool chk(vector<int> v){
    //if(v.size()==0) return true;
    if(v.size()<=2) return true;
    cc=(v.size()-1)/2;
    small.clear();
    big.clear();
    for(c=0;c<v.size();c++){
        if( c!=cc && v[c]<v[cc]) small.push_back(v[c]);
        else if(c!=cc && v[c]>v[cc]) big.push_back(v[c]);
    }
    if(small.size()!=0 && big.size()!=0) return false;
    else return chk(small) && chk(big);
}




int main(){

    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    int sz=a*a-b;
    printf("%d\n",sz);
	return 0;
}
