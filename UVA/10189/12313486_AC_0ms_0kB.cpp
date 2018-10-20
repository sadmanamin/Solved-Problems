#include<bits/stdc++.h>
using namespace std;
#define sc scanf
#define pf printf
#define ll long long
#define pb push_back
#define pii pair<int,int>

int n,m;
char field[105][105];

void Fill (int x,int y)
{
    for (int i=-1; i<=1; i++)
        for (int j=-1; j<=1; j++)
            if (field[x+i][y+j]!='*')
                field[x+i][y+j]++;
}

int main()
{

    int T = 1;
    while (scanf("%d %d",&n,&m))
    {
        if (!n && !m) break;
        if (T!=1) printf("\n");
        for(int i=1; i<=n; i++)
            for (int j=1; j<=m; j++)
                field[i][j]='0';
        for(int i=1; i<=n; i++){
            for(int j=1; j<=m; j++){
                char c;
                c = getchar();
                while (c=='\n') c = getchar();

                if (c == '*'){
                    field[i][j]='*';
                    Fill(i,j);
                }
            }
        }
        printf("Field #%d:\n",T++);
        for (int i=1; i<=n; i++){
            for (int j=1; j<=m; j++)
                printf("%c",field[i][j]);
            printf("\n");
        }
    }
    return 0;
}