#include <bits/stdc++.h>
using namespace std;
int main(){
    string a;
    int x,c;
    while(getline(cin,a)){
        x=a.size();
       for(c=0;c<x;c++){


        if(a[c]=='A' || a[c]=='B' || a[c]=='C'){
            cout<<"2";
        }
        else if(a[c]=='D'||a[c]=='E'||a[c]=='F'){
            cout<<"3";
        }
        else if(a[c]=='G'||a[c]=='H'||a[c]=='I'){
            cout<<"4";
        }
        else if(a[c]=='J'||a[c]=='K'||a[c]=='L'){
                cout<<"5";
        }
        else if(a[c]=='M'||a[c]=='N'||a[c]=='O'){
                cout<<"6";
                }
        else if(a[c]=='P'||a[c]=='Q'||a[c]=='R'||a[c]=='S'){
            cout<<"7";
        }
        else if(a[c]=='T'||a[c]=='U'||a[c]=='V'){
            cout<<"8";
        }
        else if(a[c]=='W'||a[c]=='X'||a[c]=='Y'||a[c]=='Z'){
            cout<<"9";
        }
        else{
            cout<<a[c];
        }

       }
       printf("\n");
    }
    return 0;
}