#include<bits/stdc++.h>
using namespace std;
int main(){
int a[3005],b[3005],n,check,c,i;
    while(cin >> n){
                    c=1;
        for(i=0;i<n;i++){
                cin>>a[i];
        }

        for(i=1;i<n;i++){
            b[i]=abs(a[i]-a[i-1]);

        }
sort(b,b+i);

        for(i=1;i<n;i++){
           //cout<<b[i]<<" ";
            if(b[i]!=i){
                    c=0;
                    break;
            }
        }
        if(c==0)
        cout<<"Not jolly\n";
        else
        cout<<"Jolly\n";
    }
return 0;
}

