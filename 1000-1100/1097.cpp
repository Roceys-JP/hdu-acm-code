#include<stdio.h>
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        int m[5],num;
        a %= 10;
        m[1] = a % 10;
        m[2] = a*a % 10;
        m[3] = a*a*a % 10;
        m[0] = a*a*a*a % 10;
        num = b %4;
        printf("%d\n",m[num]);
    }
}
