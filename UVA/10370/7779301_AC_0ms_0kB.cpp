#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t,no,noC;
    double avg=0,count=0;
    cin>>test;
    for(t=0;t<test;t++){
        cin>>no;
        int a[no];
        for(noC=0;noC<no;noC++){
            cin>>a[noC];
            avg+=a[noC];
        }
        avg=avg/no;
        for(noC=0;noC<no;noC++){
            if(a[noC]>avg) count++;
        }
        avg=count/no;
        printf("%.3lf%\n",avg*100);
        count=0;
    }
}
