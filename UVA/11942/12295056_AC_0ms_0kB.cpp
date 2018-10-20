#include <bits/stdc++.h>
using namespace std;
int main(){
    int test,ac;

    cin>>test;
    printf("Lumberjacks:\n");
    while(test--){
        bool check=true;
        int a[10];
        for(ac=0;ac<10;ac++){
            cin>>a[ac];
        }
        if(a[0]>a[9]){
            for(ac=1;ac<10;ac++){
                if(a[ac]>a[ac-1]) check=false;
            }
        }

        else if(a[0]<a[9]){
            for(ac=1;ac<10;ac++){
                if(a[ac]<a[ac-1]) check=false;
            }
        }
        else check=false;
        
        if(check) printf("Ordered\n");
        else printf("Unordered\n");
        check=true;
    }
    return 0;
}