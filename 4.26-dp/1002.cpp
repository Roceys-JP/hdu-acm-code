#include "stdio.h"
int main(int argc, char const *argv[])
{
  int dp[50000]={0},i,j,k;
  dp[0]=1;
  for(i = 1; i <= 3; i++)
    for(j = i; j < 35000; j ++)
      dp[j]+=dp[j-i];
  while (~scanf("%d",&k)) {
    printf("%d\n",dp[k]);
  }
  return 0;
}
