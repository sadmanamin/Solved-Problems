#include <bits/stdc++.h>
using namespace std;
#define ll long long int
//int a1[20000]={0};

int main(){
    int n,m;
    deque<int> d;
    scanf("%d",&n);
    for(int c=0;c<n;c++){
        scanf("%d",&m);
        d.push_back(m);
    }
    int sum1=0,sum2=0;
    int c=0;
    while(d.size()>0){
        if(c%2==0){
            sum1+=max(d.front(),d.back());
            if(d.front()>d.back()) d.pop_front();
            else d.pop_back();
        }
        else{
            sum2+=max(d.front(),d.back());
            if(d.front()>d.back()) d.pop_front();
            else d.pop_back();
        }
        c++;
    }

    printf("%d %d\n",sum1,sum2);
    return 0;
}

