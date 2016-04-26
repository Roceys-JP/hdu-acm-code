#include "stdio.h"
#include "string.h"
#ifndef SYMBOL
#define max(a,b) a>b?a:b
#endif
int main(int argc, char const *argv[])
{
    int dp[500][200]={0},i,j,p,a[105],b[105];
    int n,m,k,s;
    while (~scanf("%d%d%d%d",&n,&m,&k,&s)) {
        memset(dp,0,sizeof(dp));
        for(i = 0; i < k; i++)
            scanf("%d%d",&a[i],&b[i]);
        for(i = 0 ; i < k; i++)
            for(j = 1 ; j <= s ; j++)
                for (p = b[i]; p <= m; p++) {
                    dp[p][j] = max(dp[p][j], dp[p-b[i]][j-1]+a[i]);
                }
        if (dp[m][s] < n) {
            /* code */
            printf("-1\n");
        }
        else{
            for (i = 0 ; i <= m; i++){
                if(dp[i][s] >= n){
                    printf("%d\n",m-i);
                    break;
                }
            }
        }
    }
  return 0;
}
