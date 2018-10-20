#include <bits/stdc++.h>
using namespace std;

vector<int> g[205];
int color[205];
int nd,edge,a,b;

void clr(int nd){
	for(int c=0;c<nd;c++){
		g[c].clear();
	}
}

bool is_bipartite(int s){
	color[s]=0;
	queue<int> q;
	q.push(s);
	while(!q.empty()){
		int u=q.front();
		q.pop();
		int sz=g[u].size();
		for(int c=0;c<sz;c++){
			int v=g[u][c];
			if(color[v]==-1){
				color[v]=1-color[u];
				q.push(v);
			}
			else{
				if(color[u]==color[v]) return false;
			}
		}
	}
	return true;
}

int main() {

	while(scanf("%d",&nd)==1 && nd){
		memset(color,-1,sizeof(color));
		scanf("%d",&edge);
		for(int c=0;c<edge;c++){
			scanf("%d%d",&a,&b);
			g[a].push_back(b);
			g[b].push_back(a);
		}
		
		if(is_bipartite(0)==false) printf("NOT BICOLORABLE.\n");
		else printf("BICOLORABLE.\n");
		clr(nd);
	}
	return 0;
}