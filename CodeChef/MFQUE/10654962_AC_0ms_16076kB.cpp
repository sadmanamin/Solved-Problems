#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc scanf
#define pr printf



int main(){
    int n,nn,q,l,r,sum=0;
    sc("%d",&n);
    vector<int> v1;
    vector<int> v2;
    for(int c=0;c<n;c++){
        sc("%d",&nn);
        v1.push_back(nn);
    }

    sc("%d",&q);
    for(int c=0;c<q;c++){
            v2=v1;
            sum=0;
            sc("%d%d",&l,&r);
            sort(v2.begin()+(l-1),v2.begin()+(r));
            //for(int x=l-1;x<r;x++) cout<<v2[x]<<endl;
            for(int d=l;d<r;d++){
                sum+=(v2[d]-v2[d-1])*(v2[d]-v2[d-1]);
            }
            pr("%d\n",sum);
    }
    return 0;
}
