#include<stdio.h>
int main()
{
    int n,i,j,a[1010];
    while(~scanf("%d",&n)&&n)
    {
        long long int  dp[1010]={0},maxx=0;
        for(i=1;i<=n;i++)
          scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        { //每一个找一遍
            int  x=0; //存储递增值的临时变量
            for(j=i-1;j>0;j--)
             //每一个之前的都找一遍
                if(a[j]<a[i]&&x<dp[j])
                 x=dp[j];
                //记录最大的dp值
            dp[i]=x+a[i];
            //那么的当前的dp值就是原值加遍历之前最大的x
            if(dp[i]>maxx) maxx=dp[i];
            //当前最大值
        }
        printf("%lld\n",maxx);
    }
}
