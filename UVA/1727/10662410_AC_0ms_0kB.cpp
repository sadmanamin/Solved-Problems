#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define clr(a) memset(a, 0, sizeof a)
#define sc scanf
#define pr printf


int main(){
    string d[7] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
    string m[12] = {"JAN", "FEB", "MAR", "APR", "MAY", "JUN", "JUL", "AUG", "SEP", "OCT", "NOV", "DEC"};
    int nD[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    string a,b;
    int t,ans=0;
    sc("%d",&t);
    while(t--){
        cin>>a>>b;
        int x = find(d,d+7,b)-d;
		int y = find(m,m+12,a)-m;
		ans=0;
		for(int c=0;c<nD[y];c++){
            if((x+c)%7==5 || (x+c)%7==6) ans++;
		}
		printf("%d\n",ans);
    }
	return 0;
}
