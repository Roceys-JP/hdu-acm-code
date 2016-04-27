#include "stdio.h"
#include "string.h"
#ifndef SYMBOL
#define max(a,b) a>b?a:b
#endif
int main(int argc, char const *argv[])
{
    int dp[500][200]={0},i,j,p,a[105],b[105];
    int n,m,k,s;
    while (~scanf("%d%d%d%d",&n,&m,&k,&s)) {//分别表示还需的经验值，保留的忍耐度，怪的种数和最多的杀怪数
        memset(dp,0,sizeof(dp));
        for(i = 0; i < k; i++)//输入怪数据ａ是价值，ｂ是消耗的耐久度，
            scanf("%d%d",&a[i],&b[i]);
        for(i = 0 ; i < k; i++)//k个物品都找一圈
            for(j = 1 ; j <= s ; j++)//完全背包
                for (p = b[i]; p <= m; p++) {//增加的一维需要作为消耗去遍历
                    dp[p][j] = max(dp[p][j], dp[p-b[i]][j-1]+a[i]);
                }
        /*　**ｔｅｓｔ***
       n=10 m=10 k=1 s=10 a[0]=1,b[0]=1
       for j = 1--> 10
            p = 1 --> 10
               dp[p][j] = max(O0,dp[0][j-1]+a[i])
               //dp[][] = p 的花费下，以ｊ为最大杀怪数，可以得到的最大价值
        */
        if (dp[m][s] < n) {//dp[m][s]中存储的是在付出ｍ的忍耐度和最多杀ｓ个怪下可得到的最大价值，是否能升级
            printf("-1\n");
        }
        else{
            for (i = 0 ; i <= m; i++){//当能够升级，则需要进一步去找第一个恰好可以ｉ的忍耐值下的可以升级
                if(dp[i][s] >= n){
                    printf("%d\n",m-i);
                    break;
                }
            }
        }
    }
  return 0;
}
