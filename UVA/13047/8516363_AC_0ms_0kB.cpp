#include<bits/stdc++.h>
using namespace std;
int c=0;
int hash(string s, int cnt, int c){
    for(c=c;c<s.size();c++){
        if(s[c]=='-') cnt++;
        else return cnt;
    }
    return cnt;
}

int douHash(string s, int cnt, int c){
    for(c=c;c<s.size();c++){
        if(s[c]=='=') cnt++;
        else if(s[c]=='>'){
            cnt++;
            return cnt;
        }
        else return 0;
    }
    return 0;
}

int main(){
    int test,tc=1,cnt,maxC;
    string s;
    scanf("%d",&test);
    while(tc<=test){
        cin>>s;
        cnt=0;
        maxC=0;
        for(c=0;c<s.size();c++){
           if (s[c] == '>') {
                //hash()
				int type =s[c-1];
				cnt = 1;
				if (type == '=' || type == '-')
				for (int d = c-1; d >= 0 && s[d] == type; d--){
					cnt++;
				}

				maxC = max(maxC, cnt);
			} else if (s[c] == '<') {

				int type = s[c+1];
				cnt = 1;
				if (type == '=' || type == '-')
				for (int d = c+1; s[d] && s[d] == type; d++)
					cnt++;
				maxC = max(maxC, cnt);
			}
        }
        if(maxC==0)
        printf("Case %d: -1\n",tc++);
        else printf("Case %d: %d\n",tc++,maxC);
    }
    return 0;
}
