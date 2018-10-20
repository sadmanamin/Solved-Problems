#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main(){
    int t;
    ll a, b, r;
    for(scanf("%d", &t); t--; ){
        scanf("%lld %lld %lld", &a, &b, &r);
        printf("%.10lf\n", (r * r) / 2.0);
    }
    return 0;
}

