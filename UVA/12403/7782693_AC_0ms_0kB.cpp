#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,t,sum=0,num;
    char s[30];
    cin>>test;
    for(t=1;t<=test;t++){
        scanf("%s",&s);
        if(strcmp(s, "donate") == 0){
            scanf("%d",&num);
            sum+=num;
        }
        else printf("%d\n",sum);
    }
    return 0;
}
