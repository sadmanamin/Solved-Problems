#include <bits/stdc++.h>
using namespace std;

void reverseChar(char* str)
{   int i;
    for(i=0;i<strlen(str)/2;i++){

    char temp=str[i];
    str[i]=str[strlen(str)-i-1];
    str[strlen(str)-i-1]=temp;
    }

}

int main(){
    int test,a1,b1,s1;
    char a[10],b[10],sum[10];


    cin>>test;
    while(test--){
        
        scanf("%s%s",&a,&b);
        
        reverseChar(a);
        reverseChar(b);
        
        string aa(a);
        string bb(b);
        string summ;

        stringstream ss1;
        ss1<<aa;
        ss1>>a1;
        
        stringstream ss2;
        ss2<<bb;
        ss2>>b1;
        s1=a1+b1;
        
        stringstream ss3;
        ss3<<s1;
        ss3>>summ;
        
        strcpy(sum,summ.c_str());
        
        reverseChar(sum);
        
        string s(sum);
        stringstream ss4;
        ss4<<s;
        ss4>>s1;
        
        cout<<s1<<endl;

    }
    return 0;
}