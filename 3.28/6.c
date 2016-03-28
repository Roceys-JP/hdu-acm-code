#include<stdio.h>
#include<string.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n--)
        {   getchar();
            char a[10005];
            int i,j,k=0;
            scanf("%s",a);
            //gets(a);
            for(i = 0 ; a[i] ; i++)
            {
                if(a[i] == '#')
                    printf(" ");
                else if(a[i] == '-')
                {
                    printf("%c",k+'A');
                    k = 0;
                }
                else if(k > 0&& k < 10)
                {
                    k*=10;
                    k+=a[i]-'0';
                    printf("%c",k+'A');
                    k=0;
                }
                else
                    k = a[i]-'0';
            }
            printf("\n");
        }
    }

}
