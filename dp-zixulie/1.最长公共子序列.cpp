//最长公共子序列
#include <cstdio>
#include <cstring>
#define max(a,b) a>b?a:b
#define max1 1001
int dp[max1][max1];//保存当前位置最长公共子序列的个数
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {  char s1[max1],s2[max1];
       int l1, l2, i, j;
       memset(dp,0,sizeof(dp));
       scanf("%s%s",s1,s2);
       l1 = strlen(s1);
       l2 = strlen(s2);
       for(i = 1; i <= l1; i++)
            for(j = 1; j <= l2; j++)
                {
                    if(s1[i-1] == s2[j-1])
                        dp[i][j] = dp[i-1][j-1]+1;
                    else
                        dp[i][j] = max(dp[i][j-1],dp[i-1][j]);
                }
            printf("%d\n",dp[l1][l2]);
    }
}
