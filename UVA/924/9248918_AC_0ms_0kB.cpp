#include<bits/stdc++.h>
using namespace std;
vector<int>v[2510]; //adjacency list
int level[2510];  
bool visit[2510];
int boom[2510]; // checking every days booming number where index is the number of the day
void bfs(int s){
    queue<int>q;
    q.push(s);
    level[s]=0;
    visit[s]=true;
    //boom[0]++;
    while(!q.empty()){
        int p=q.front();
        q.pop();
        for(int i=0;i<v[p].size();i++){
            if(visit[v[p][i]]==false){
                level[v[p][i]]=level[p]+1;
                q.push(v[p][i]);
                visit[v[p][i]]=true;
                boom[level[v[p][i]]]++; // every level of the node is same as the day he heard the news
            }
        }
    }
}
// a function to check maximum booming day
int boomChecker(int n){
    int MaxBoom=0;
    for(int i=0;i<=n;i++){
        if(boom[i]>boom[MaxBoom]){
            MaxBoom=i;
        }
    }
    return MaxBoom;
}

int main(){
    int employers;
    scanf("%d",&employers); // taking total number of employees
    
    for(int i=0;i<employers;i++){
        int connections;
        scanf("%d",&connections); // number of collection the particular node has
        for(int j=1;j<=connections;j++){
            int collegue;
            scanf("%d",&collegue); // 
            v[i].push_back(collegue);
        }
    }
    int testCase;
    scanf("%d",&testCase);
    for(int i=1;i<=testCase;++i){
        //for every bfs, we reset the level,visit and boom array
        memset(level,0,sizeof(level));
        memset(boom,0,sizeof(boom));
        memset(visit,false,sizeof(visit));
        int spreader;
        scanf("%d",&spreader);
        // if condition checks if the starting node has any connections. If not then it will print 0.
        if(v[spreader].size() !=0 ){
            bfs(spreader);
            int index=boomChecker(employers);
            printf("%d %d\n",boom[index],index);
        }else{
            cout<<0<<endl;
        }
    }

}