#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,x1,x2,x3,y1,y2,y3,cnt=0;
    int x,y,z;
    scanf("%d",&n);
    while(n--){
        int a[3];
        scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
        x=(x2-x1)*(x2-x1)+(y2-y1)*(y2-y1);
        a[0]=x;
        y=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
        a[1]=y;
        z=(x3-x2)*(x3-x2)+(y3-y2)*(y3-y2);
        a[2]=z;
        sort(a,a+3);
        //printf("%d %d\n",(int)(a[0]*a[0]+a[1]*a[1]),(int)(a[2]*a[2]));
        if(a[0]+a[1]==a[2]) cnt++;
    }
    printf("%d\n",cnt);
    return 0;
}
