#include <stdio.h>
int main()
{
    int n;
    while(~(scanf("%d",&n)))
    {
        int i,j,y,N;
        while(n--)
        {
            int count=0;
            scanf("%d%d",&y,&N);
        for(i=y;count!=N;i++)
        {
            if((i%4==0&&i%100!=0)||i%400==0)
            {
                j=i;
                count++;
            }
        }
        printf("%d\n",j);
        }
            break;
    }
    return 0;
}
