#include <bits/stdc++.h>
#define le 10004
using namespace std;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    int t, len, sum, x;
    for(scanf("%d", &t); t--; ){
        memset(n, 0, sizeof(n));
        scanf("%d", &len);
        for(int i = 0; i < len; scanf("%d", &x), n[x]++, i++);
        int sum = 0;
        for(int i = 1; i < le; i++){
            sum = max(sum, n[i] + n[i + 1]);
        }
        printf("%d\n", sum);
    }
}
