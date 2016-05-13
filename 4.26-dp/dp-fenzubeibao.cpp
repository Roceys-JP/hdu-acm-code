#include <stdio.h>
#include <string.h>
#define max(a,b) a>b?a:b
int A[105][105],f[1001]={0};
int n,c,k;
void fenzubeibao()
{
    memset(f,0,sizeof(f));
    int i,j,k;
    for (i = 1; i <= n; i++) {
        for ( j = c; j >= 0; j--) {
            for (k = 1; k <= j; k++){
                f[j] = max(f[j],f[j-k]+A[i][k]);
            }
        }
    }
    printf("%d\n",f[c] );
}
int main()
{
    while(~scanf("%d%d",&n,&c),n+c)//n个物体，c的容量
    {
        int i,j;

        for(i = 1 ; i <= n; i++)
        {
            for(j = 1; j <= c; j++)
            {
                scanf("%d",&A[i][j]);
            }
        }
        fenzubeibao();
    }
}

#include<cstdio>
#include<cstring>
const int maxn=1000+5;
char tu[maxn][maxn];  //输入图的数组
int m,n,idx[maxn][maxn]; //标记数组
void dfs(int r,int c,int id)
{
    if(r<0||r>=m||c<0||c>=n)
        return;
    if(idx[r][c]>0||tu[r][c]!='W')
        return;
    idx[r][c]=id;
    for(int dr=-1; dr<=1; dr++)
        for(int dc=-1; dc<=1; dc++)   // 寻找周围八块
            if(dr!=0||dc!=0)
                dfs(r+dr,c+dc,id);
}
int main()
{
    int i,j;
    while(scanf("%d%d",&m,&n)==2&&m&&n)
    {
        for(i =0; i<m; i++)
            scanf("%s",tu[i]);
        memset(idx,0,sizeof(idx));
        int q=0;
        for(i=0; i<m; i++)
            for(j=0; j<n; j++)
                if(idx[i][j]==0&&tu[i][j]=='W')
                    dfs(i,j,++q);
        printf("%d\n",q);
    }
    return 0;
}
