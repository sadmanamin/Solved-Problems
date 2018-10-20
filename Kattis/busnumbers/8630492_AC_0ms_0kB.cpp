#include<bits/stdc++.h>
using namespace std;



int main(){
    int n;
    scanf("%d",&n);
    int a[n];

    for(int c=0;c<n;c++){
        scanf("%d",&a[c]);
    }
    sort(a,a+n);

    int save,check=0;
    printf("%d",a[0]);
    if(a[0]+1==a[1])check++;
    for(int c=1;c<n;c++){
            if(check==0&&a[c]+1==a[c+1]){
                printf(" %d",a[c]);
                check++;
            }
            else if(check && a[c]+1==a[c+1]){
                check++;
            }
            //cout<<check<<endl;
            else if(a[c+1]!=a[c]+1){
                if (check>1){
                    check=0;
                    printf("-%d",a[c]);
                }
                //cout<<check<<endl;
                else{
                    check=0;
                    printf(" %d",a[c]);
                }
            }
    }
    //printf("\n");
    return 0;
}
