#include <bits/stdc++.h>
using namespace std;
int main(){
    long long int num;
    while(cin>>num && num!=0){
        if(floor(sqrt(num))==ceil(sqrt(num))) cout<<"yes"<<endl;
        else cout<<"no"<<endl;
    }


    return 0;
}