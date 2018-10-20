#include <bits/stdc++.h>
using namespace std;


int main(){
    int test,a[3];
    cin>>test;
    while(test--){
        cin>>a[0]>>a[1]>>a[2];
        sort(a,a+3);
        if(a[0]+a[1]>a[2]) printf("OK\n");
        else printf("Wrong!!\n");
    }
    return 0;
}