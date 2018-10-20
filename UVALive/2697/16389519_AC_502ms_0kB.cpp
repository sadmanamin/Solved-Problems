#include <bits/stdc++.h>
#define le 10000007
using namespace std;
double n[le];
int main(){
    n[0] = 0.0;
    for(int i = 1; i < le; i++) n[i] = n[i - 1] + log10(i * 1.0);
    int t, co = 0, idx;
    for(scanf("%d", &t); t--; ){
        scanf("%d", &idx);
        printf("%d\n", (int)n[idx] + 1);
    }
    return 0;
}
