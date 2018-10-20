#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pf printf
#define sc scanf
int n,nn;



int main(){
    sc("%d",&n);
    stack<int> s;
    for(int c=0;c<n;c++){
        if(s.empty()){
            sc("%d",&nn);
        s.push(nn);
        }
        else{
            sc("%d",&nn);
            if((s.top()+nn)%2==0) s.pop();
            else s.push(nn);
        }
    }
    printf("%d\n",(int)s.size());
    return 0;
}
