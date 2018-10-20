#include <bits/stdc++.h>
using namespace std;
vector<string> s;
string ss;
int x=0,o=0;

char ch(int c,int d){
	if(c<0 || c>=4 || d<0 || d>=4) return 'z';
	return s[c][d];
}

bool cc(int c,int d){
	if((ch(c+1,d)==ch(c,d) && ch(c+2,d)=='.') || (ch(c+1,d)=='.' && ch(c+2,d)==ch(c,d))) return true;
	if((ch(c-1,d)==ch(c,d) && ch(c-2,d)=='.') || (ch(c-1,d)=='.' && ch(c-2,d)==ch(c,d))) return true;
	if((ch(c,d+1)==ch(c,d) && ch(c,d+2)=='.') || (ch(c,d+1)=='.' && ch(c,d+2)==ch(c,d))) return true;
	if((ch(c,d-1)==ch(c,d) && ch(c,d-2)=='.') || (ch(c,d-1)=='.' && ch(c,d-2)==ch(c,d))) return true;
	if((ch(c+1,d+1)==ch(c,d) && ch(c+2,d+2)=='.') || (ch(c+1,d+1)=='.' && ch(c+2,d+2)==ch(c,d))) return true;
	if((ch(c-1,d-1)==ch(c,d) && ch(c-2,d-2)=='.') || (ch(c-1,d-1)=='.' && ch(c-2,d-2)==ch(c,d))) return true;
	if((ch(c-1,d+1)==ch(c,d) && ch(c-2,d+2)=='.') || (ch(c-1,d+1)=='.' && ch(c-2,d+2)==ch(c,d))) return true;
	if((ch(c+1,d-1)==ch(c,d) && ch(c+2,d-2)=='.') || (ch(c+1,d-1)=='.' && ch(c+2,d-2)==ch(c,d))) return true;
	return false;
}

int main() {
	for(int c=0;c<4;c++){
		cin>>ss;
		s.push_back(ss);
		for(int d=0;d<4;d++){
			if(ss[d]=='x') x++;
			else if(ss[d]=='o')o++;
		}
	}
	
	bool chk=false;
	
	if(x==o){
		for(int c=0;c<4;c++){
			for(int d=0;d<4;d++){
				if(s[c][d]=='x' && cc(c,d)){
					chk=true;
					break;
				}
			}
		}
	}
	else{
		for(int c=0;c<4;c++){
			for(int d=0;d<4;d++){
				if(s[c][d]=='y' && cc(c,d)){
					chk=true;
					break;
				}
			}
		}
	}
	
	if(chk) printf("YES\n");
	else printf("NO\n");
	
	return 0;
}