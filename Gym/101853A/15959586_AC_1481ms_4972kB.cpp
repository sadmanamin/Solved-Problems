#include <bits/stdc++.h>
#define ll long long int
using namespace std;
#define le 100005
map<int,int> mp;
set<int> s;
map<int,int> :: iterator it;
int n[le];
int main(){
    //freopen("input.txt", "r", stdin);
    int t, len, a, b, x, q, c;
    for(scanf("%d", &t); t--; ){
        scanf("%d %d", &len, &q);
        for(int i = 1; i <= len; i++){
            scanf("%d", &n[i]);
            if(n[i]){
                //n[i] = c;
                mp[n[i]]++;
                s.insert(n[i]);
            }
        }
        while(q--){
            scanf("%d", &x);
            if(x == 2) printf("%d\n", s.size());
            else{
                scanf("%d %d", &a, &b);
                if(n[a]){
                    mp[n[a]]--;
                    if(mp[n[a]] == 0) s.erase(n[a]);
                }
                n[a] = b;
                if(b){
                    mp[n[a]]++;
                    s.insert(n[a]);
                }
            }
        }
        s.clear();
        mp.clear();
    }
    return 0;
}
