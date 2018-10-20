#include <bits/stdc++.h>
using namespace std;
int main(){
    int t;
    scanf("%d",&t);
    char s[20];
    while(t--){
        scanf("%s",&s);
        if(strlen(s)>3){
            printf("3\n");
        }
        else{
            if((s[0] == 'o' && s[1] == 'n' && s[2] == 'e') || (s[0] == 'o' && s[1] == 'n') || (s[0] == 'o' && s[2] == 'e') || (s[1] == 'n' && s[2] == 'e')) printf("1\n");
            else printf("2\n");
        }
    }
    return 0;
}