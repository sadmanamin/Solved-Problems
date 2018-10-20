#include<bits/stdc++.h>
using namespace std;
int main()
{
int a[26]={1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,1,2,3,4,1,2,3,1,2,3,4};
int test,tc=1,sum;
string s;
scanf("%d",&test);
getline(cin,s);
while(tc<=test){
    getline(cin,s);
    sum=0;
    for(int c=0;c<s.size();c++){
        if(s[c]==' ') sum++;
        else sum+=a[s[c]-'a'];
    }
    printf("Case #%d: %d\n",tc++,sum);
}
    return 0;
}
