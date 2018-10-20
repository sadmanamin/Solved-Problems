#include <bits/stdc++.h>
using namespace std;

int main() {
	int num,c,space,sC,star,starC=0,stC;
	cin>>num;
	for(c=1;c<=num;c++){
            space=num-c;
            for(sC=1;sC<=space;sC++){
                printf(" ");
            }
            star=c;

            for(stC=1;stC<=star;stC++){
                printf("#");
            }
            starC++;
            printf("\n");
        }

    return 0;
}