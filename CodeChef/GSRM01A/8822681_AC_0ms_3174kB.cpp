#include <bits/stdc++.h>
using namespace std;

/*bool isSubsequence(string s1, string s2){
    int m=s1.size(),n=s2.size(),j=0;
    for(int c=0;c<n;c++){
        if(s1[j]==s2[c]) j++;
    }
    return j==m;
}*/

int main() {
	int test,n,k,nn,sum;
	scanf("%d",&test);
	while(test--){
        scanf("%d%d",&n,&k);
        sum=0;
        bool chk=false;
        for(int c=0;c<n;c++){
            scanf("%d",&nn);
            sum+=nn;
            if(sum>=k) {
                chk=true;
            }
        }
        if(chk) printf("YES\n");
        else printf("NO\n");
	}
	return 0;
}
