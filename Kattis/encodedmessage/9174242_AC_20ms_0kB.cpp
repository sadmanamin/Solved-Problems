#include<bits/stdc++.h>
using namespace std;
int main(){
    int test;
    string s;
    scanf("%d",&test);
    while(test--){
        cin>>s;

        int sz=sqrt(s.size()),cnt=0;
        char a[sz][sz];
        char b[sz][sz];
        for(int e=0;e<sz;e++){
            for(int d=0;d<sz;d++)
                b[e][d]=s[cnt++];
                //b[e][d]=
        }
        for(int e=sz-1,c=0;e>=0 && c<sz;e--,c++){
            for(int d=0;d<sz;d++)
               a[c][d]=b[d][e];
                //b[e][d]=
        }
        for(int e=0;e<sz;e++){
            for(int d=0;d<sz;d++)
                printf("%c",a[e][d]);
                //b[e][d]=
        }printf("\n");
    }
    return 0;
}
