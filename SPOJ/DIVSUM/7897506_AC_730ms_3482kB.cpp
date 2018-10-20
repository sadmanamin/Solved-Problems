#include <bits/stdc++.h>
using namespace std;

int main() {
    int test;
    scanf("%d",&test);
    while(test--)
        {
        unsigned long long int n,i,count=0;
        scanf("%llu",&n);

        for(i=2;i<=sqrt(n);i++)
            {
            if(n%i==0 && i==(n/i))
                count+=i;
            if(n%(n/i)==0 && ((n/i)!=i))
            count+=i+(n/i);
        }
        if(n==1)
        printf("%llu\n",count);
        else printf("%llu\n",count+1);
    }
    return 0;
}