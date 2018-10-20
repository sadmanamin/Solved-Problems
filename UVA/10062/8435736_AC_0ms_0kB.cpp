#include <bits/stdc++.h>
using namespace std;
#define ll long long int


int main(){
    string s;
    int chk=0;
    while(getline(cin,s)){
            if(chk==1) printf("\n");
        int a[256]={0};
        for(int c=0;c<s.size();c++){
            a[s[c]]++;
        }
        int l=s.size();
        for(int c=1;l>0;c++){
            for(int d=130;d>=0;d--){
                if(a[d]==c){
                    printf("%d %d\n",d,c);
                    l-=c;
                }
            }
        }
        chk=1;
    }
    return 0;
}