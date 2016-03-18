#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {   
        int i,j,k,sum=0;
        for(i = 1; i <= n ; i++)
            sum +=i;
        printf("%d\n\n",sum);
    }
}
