#include <bits/stdc++.h>
using namespace std;
#define MAX 1000005
int failure[MAX];
 
void build_failure(string pat, int m){
	failure[0]=failure[1]=0;
 
	for(int c=2;c<=m;c++){
 
		int j=failure[c-1];
 
		while(true){
			if(pat[j]==pat[c-1]){
				failure[c]=j+1;
				break;
			}
 
			if(j==0){
				failure[c]=0;
				break;
			}
 
			j=failure[j];
		}
	}
}
 
int kmp(string text, string pattern)
{
  int n = text.size();
  int m = pattern.size();
  build_failure(pattern, m);
  int cnt=0;
 
  int i = 0; // the initial state of the automaton is
         // the empty string
 
  int j = 0; // the first character of the text
 
  while(true) {
    if(j == n) {
        return cnt;//reached the end of the text
    }
 
    // character matched
    if(text[j] == pattern[i]) {
      i++; // change the state of the automaton
      j++; // get the next character from the text
      if(i == m) {
          cnt++;
          i=failure[i];
      }
    } else {
        if (i == 0) {
            // if we reached the empty string and failed to
            // "expand" even it; we go to the next 
            // character from the text, the state of the
            // automaton remains zero
            j++;
        }
        else {
             //we try to "expand" the next best (largest) match
            i = failure[i];
        }
    }
  }
  return cnt;
}
 
int main() {
	int t,tc=1;
	scanf("%d",&t);
	string s1,s2;
	getline(cin,s1);
	
	while(tc<=t){
		getline(cin,s1);
		getline(cin,s2);
		
		printf("Case %d: %d\n",tc++,kmp(s1,s2));
	}
	return 0;
}