#include<bits/stdc++.h>
using namespace std;

long long int palindrome(long long int n)
{
    long long int c=0;
    while(n)
    {
        c=c*10+n%10;
        n/=10;
    }
    return c;
}

int main()
{
    int test;
    scanf("%d",&test);
    while(test--)
    {
        long long int n;
        cin>>n;
        int i=0;
        //cout<<i<<endl;
        while(1)
        {
            if(n==palindrome(n))
            {
                cout<<i<<' '<<n<<endl;
                break;
            }
            n+=palindrome(n);
            //cout<<n<<endl;
            i++;
        }
    }
    return 0;
}
