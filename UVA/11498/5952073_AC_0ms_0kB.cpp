#include<bits/stdc++.h>
using namespace std;
int main(){
    int k,i,x,y,x1,y1;
    while(scanf("%d",&k)==1 && k>0){
        scanf("%d%d",&x,&y);
        for(i=1;i<=k;i++){
            scanf("%d%d",&x1,&y1);
            if(x1==x || y1==y){
                printf("divisa\n");
            }
            else if(x1>x && y1>y){
                printf("NE\n");
            }
            else if(x1<x && y1>y){
                printf("NO\n");
            }
            else if(x1<x && y1<y){
                printf("SO\n");
            }
            else if(x1>x && y1<y){
                printf("SE\n");
            }
        }

    }
    return 0;
}