#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int test,tc=1,n,carri,carry,sum;
    scanf("%d",&test);
    while(tc<=test){
        scanf("%d",&n);
        bool chk=true;
        bool chker=false;
        carry=n;
        while(chk){
            sum=0;
            if(carry==1){
                chker=true;
                break;
            }
            if(carry<=9){
                chker=false;
                break;
            }
            while(carry!=0){
                    carri=carry%10;
                sum+=carri*carri;
                carry/=10;
            }
            if(sum==1 || sum==7){
                chk=false;
                chker=true;
                break;
            }
            if(sum==n){
                chk=false;
                chker=false;
                break;
            }

            else carry=sum;
        }
        if(chker) printf("Case #%d: %d is a Happy number.\n",tc++,n);
        else printf("Case #%d: %d is an Unhappy number.\n",tc++,n);
    }
    return 0;
}

