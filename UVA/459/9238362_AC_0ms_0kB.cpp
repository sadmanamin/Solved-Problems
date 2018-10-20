#include <bits/stdc++.h>
using namespace std;

map<char,vector<char> > mp;
map<char,bool> visit;
int t,cnt,tc=1;
string foul,s,mx;

void bfs(char c){
    queue<char> q;
    q.push(c);
    char crnt;

    while(!q.empty()){
        crnt=q.front();
        q.pop();
        visit[crnt]=true;
        for(int d=0;d<mp[crnt].size();d++){
            if(visit[mp[crnt][d]]==false){
                q.push(mp[crnt][d]);
            visit[mp[crnt][d]]=true;
            }
        }
    }
}

int main() {

    scanf("%d",&t);
    getline(cin,foul);
    getline(cin,foul);

    while(tc<=t){
        //mp.clear();

       getline(cin,mx);
       cnt=0;
       for(char c='A';c<=mx[0];c++){
       	mp[c].clear();
            visit[c]=false;
       }
       while(getline(cin,s) && s!=""){
            mp[s[0]].push_back(s[1]);
            mp[s[1]].push_back(s[0]);
       }

        for(char c='A';c<=mx[0];c++){
            if(visit[c]==false){
                bfs(c);
                cnt++;
            }
       }
       if(tc==t)
       printf("%d\n",cnt);
       else printf("%d\n\n",cnt);
       tc++;
    }
	return 0;
}
