#include <bits/stdc++.h>
using namespace std;
int main(){
    //freopen("input.txt", "r", stdin);
    int t, n, m, a, b, x, y;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &n, &m);
        int sum = 0;
        while(n--){
            scanf("%d:%d %d:%d", &a, &b, &x, &y);
            a = (a * 60) + b;
            x = (x * 60) + y;
            sum += (x - a);
            //cout<<a<<" "<<x<<" "<<sum<<endl;
        }
        sum=sum/60;
        printf("%s\n", (sum >= m) ? "YES" : "NO");
    }
    return 0;
}