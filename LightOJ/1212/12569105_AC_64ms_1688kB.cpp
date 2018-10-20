#include <bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define MAX 1000000

int main() {
	int t,tc=1,n,m,nn,ex;
	string s;
	sc("%d",&t);
	deque<int> dq;
	while(tc<=t){
		pf("Case %d:\n",tc++);
		cin>>n>>m;
		while(m--){
			cin>>s;
			if(s=="pushLeft" || s=="pushRight"){
				cin>>nn;
				//cout<<dq.size()<<endl;
				if(dq.size()==n) pf("The queue is full\n");
				else{
					if(s=="pushLeft"){
						dq.push_back(nn);
						cout<<"Pushed in left: "<<nn<<endl;
					}
					else{
						dq.push_front(nn);
						cout<<"Pushed in right: "<<nn<<endl;
					}
				}
			}
			else{
				if(dq.size()==0) pf("The queue is empty\n");
				else{
					if(s=="popLeft"){
						ex=dq.back();
						dq.pop_back();
						cout<<"Popped from left: "<<ex<<endl;
					}
					else{
					ex=dq.front();
						dq.pop_front();
						cout<<"Popped from right: "<<ex<<endl;	
					}
				}
			}
			
		}
		dq.clear();
		//tc++;
	}
	return 0;
}