#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int a1[20000]={0};

int main(){
    int n1,n2,n;
    //vector<int> v1,v2;
    scanf("%d",&n1);
    for(int c=0;c<n1;c++){
        scanf("%d",&n);
        //v1.push_back(n);
        a1[n]++;
    }
    scanf("%d",&n2);
    for(int c=0;c<n2;c++){
        scanf("%d",&n);
        //v2.push_back(n);
        a1[n]--;
    }

    for(int c=0;c<20000;c++){
        if(a1[c]<0) printf("%d ",c);

    }

    return 0;
}

