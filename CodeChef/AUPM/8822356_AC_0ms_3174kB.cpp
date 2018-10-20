#include <bits/stdc++.h>
using namespace std;
 
int main() {
	int x;
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		int num;
		scanf("%d",&num);
		int size=num+(num/2);
		char a[size][size];
		for(int i=0;i<size;i++){
			for(int j=0;j<size;j++){
				a[i][j]=' ';
			}
		}
 
		for(int row=0;row<num;row++){
			for(int column=0;column<num;column++){
				if(row==0||row==num-1){
					a[row][column]='#';
				}
				else if(column==0||(column==num-1&&row!=num/2)){
					a[row][column]='#';
				}
			}
		}
 
		for(int row=num/2;row<size;row++){
			for(int column=num/2;column<size;column++){
				if(row==num/2||row==size-1){
					a[row][column]='#';
				}
				else if((column==num/2&&row!=num-1)||column==size-1){
					a[row][column]='#';
				}
			}
		}
		printf("Case %d:\n",i);
 
		for(int row=0;row<size;row++){
            for(int column=0;column<size;column++){
                if(a[row][column]=='#')printf("#");
                 else printf(" ");
            }
            printf("\n");
        }
	}
	return 0;
}