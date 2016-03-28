#include<stdio.h>
int main()
{
    int n;
    while(scanf("%d",&n),n)
    {
        int i=1,j,k[101],min,min_tex;
        scanf("%d",&k[0]);
        if(n==1)
        {
            printf("%d\n",k[0]);
            continue;
        }
        min = k[0];
        for (i = 1 ; i < n ;i++)
        {
            scanf("%d",&k[i]);
            if(k[i] <= min)
            {
                min = k[i];
                j = i;
            }
        }
        min_tex=k[j];
        k[j] = k[0];
        k[0] = min_tex;
        for(i = 0 ; i < n-1; i++)
            printf("%d ",k[i]);
        printf("%d\n",k[i]);
    }
}
