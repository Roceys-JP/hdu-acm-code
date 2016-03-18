#include<stdio.h>
int main()
{
    int a,b,n;
    while(scanf("%d",&n),n)
    {
        int sum =0;
        while(n--)
            {
                scanf("%d",&a);
                sum += a;
            }
        printf("%d\n",sum);
    }
}

