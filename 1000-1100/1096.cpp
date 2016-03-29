#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n!=1)
    {
        int sum =0,m,i,t;
        scanf("%d",&m);
        for (i = 0 ; i < m ; i++)
        {
            scanf("%d",&t);
            sum += t;
        }
        printf("%d\n\n",sum);
       n--;
    }
        int sum =0,m,i,t;
        scanf("%d",&m);
        for (i = 0 ; i < m ; i++)
        {
            scanf("%d",&t);
            sum += t;
        }
        printf("%d\n",sum);
       n--;

}
