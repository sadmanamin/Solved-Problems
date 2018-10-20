#include <bits/stdc++.h>
using namespace std;



int main() {
    int test;
    unsigned long long int num,i,count=0;
    scanf("%d",&test);
    while(test--)
        {

        scanf("%llu",&num);

        for(i=1;i<=sqrt(num);i++)
            {
            if(num%i==0 && i%2==0)
                count++;
            if(num%(num/i)==0 && ((num/i)!=i) && ((num/i)%2==0))
            count++;
        }

        printf("%llu\n",count);
        count=0;
    }
    return 0;
}