#include<stdio.h>
int main()
{
    int n,a[105],i,sum=0;
    while(scanf("%d",&n),n)
    {
        a[0] = 0;
        sum = 0;
        for(i = 1; i <= n ; i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
        {
           if(a[i]>a[i-1])
                sum = sum +(a[i]-a[i-1])*6+5; 
            else 
                sum = sum +(a[i-1]-a[i])*4+5;
        }
        printf("%d\n",sum);
    }
}
