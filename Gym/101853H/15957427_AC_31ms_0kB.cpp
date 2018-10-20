#include <bits/stdc++.h>
#define sc scanf
#define pf printf
#define pii pair<int,int>
#define fread freopen("input.txt","r",stdin)
#define pb push_back
#define ub upper_bound
#define lb lower_bound
#define bs binary_search
#define gcd(a,b)  __gcd(a,b)
#define lcm(a,b) (a*b)/gcd(a,b)

using namespace std;

typedef long long int ll;


void solve(){
    int n;
    sc("%d",&n);
    int ans = n/6;
    ans=sqrt(ans);
    pf("%d\n",ans);
}

int main()
{
    //fread;

    int n;
    sc("%d",&n);
    for(int i=0;i<n;i++){
        solve();
    }

    return 0;
}
