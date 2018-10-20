#include <bits/stdc++.h>
using namespace std;
int main()
{
    string a,b;
    int asci;
    while(getline(cin,a)){
        getline(cin,b);
        int sum1=0,sum2=0;
        int s1=0,s2=0;
        int ch=0,cb=0;

        if(a=="" && b==""){
            cout<<""<<endl;
        }
        else{
        for(int c=0;c<a.size();++c){
            if((a[c]>='a' && a[c]<='z') || (a[c]>='A' && a[c]<='Z')){
                    if(a[c]>='a' && a[c]<='z'){
                     asci =a[c] - 96;
                     sum1+=asci;
                    }
                    else{
                     asci =a[c]- 64;
                     sum1+=asci;
                    }
            }
            else{
                ++ch;
            }
        }
        s1=sum1;
        int see1=0;
        while(s1>=10){
            int x =0;
            sum1=s1;
            while(sum1>0){
            see1 = sum1%10;
            x+=see1;
            s1=x;
            sum1=sum1/10;
            }

        }

        for(int c=0;c<b.size();++c){
            if((b[c]>='a' && b[c]<='z') || (b[c]>='A' && b[c]<='Z')){
                    if(b[c]>='a' && b[c]<='z'){
                     asci = b[c] - 96;
                     sum2+=asci;
                    }
                    else{
                     asci =b[c] - 64;
                     sum2+=asci;
                    }
            }
            else{
                ++cb;
            }
        }

        s2=sum2;
        see1=0;
        while(s2>=10){
            int x =0;
            sum2=s2;
            while(sum2>0){
            see1 = sum2%10;
            x+=see1;
            s2=x;
            sum2=sum2/10;
            }

        }
        if(ch==a.size() && cb==b.size()){
            cout<<""<<endl;
        }
        else{
        double p, a = s1,b=s2;
        if(a>=b){
            p=b/a*100;
            printf("%.2lf %%\n",p);
        }
        else{
            p=a/b*100;
            printf("%.2lf %%\n",p);
        }
        }
     }
    }
    return 0;
}