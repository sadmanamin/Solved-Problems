#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pr printf
#define ll long long

int main(){
    int t,hh,mm;
    //string h,m;
    sc("%d",&t);
    while(t--){
        sc("%d:%d",&hh,&mm);
        if(hh==12) hh=0;
        
        if((hh==12 || hh==6 || hh==0) && mm==0){
            //printf("%d:%d\n",hh,mm);
        }
        else if(mm==0){
            hh=12-hh;
            //printf("%d:%d\n",hh,mm);
        }
        else{
            mm=60-mm;
            if(mm==60) mm=0;
            hh=12-hh-1;
            //printf("%d:%d\n",hh,mm);
        }
        if(hh==0) hh=12;
        if(hh<10 && mm<10) printf("0%d:0%d\n",hh,mm);
        else if(hh<10 && mm>=10) printf("0%d:%d\n",hh,mm);
        else if(hh>=10 && mm<10) printf("%d:0%d\n",hh,mm);
        else printf("%d:%d\n",hh,mm);

    }
}
