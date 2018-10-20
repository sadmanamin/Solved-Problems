#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define sc scanf
#define pr printf

struct elem{
    int id,solve;

    elem(){}

    bool operator < (elem X)const{
        return solve>X.solve;
    }
}
str[170000];

int main(){
    int n;
    sc("%d",&n);
    for(int c= 0;c<n;c++)
        scanf("%d %d",&str[c].id,&str[c].solve);
    stable_sort(str,str+n);
        for(int c=0;c<n;c++)
        printf("%d %d\n",str[c].id,str[c].solve);
    return 0;
}
