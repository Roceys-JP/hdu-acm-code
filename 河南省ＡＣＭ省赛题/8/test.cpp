#include <stdio.h>  
#include <string.h>
int main()
{
    int ncase,a[2006];
    scanf("%d",&ncase);
    while(ncase--)
    {
        int n,m;
        double sum,max=-0x3fffffff;
        memset(a,0,sizeof(a));
        scanf("%d %d",&n,&m);
        for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
        for(int i=0;i+m<=n;i++)
        {
            for(int k=m;k<=n&&i+k<=n;k++)
            {
                sum=0;
                for(int j=0;j<k;j++)
                sum+=a[i+j];
                if(sum/k>max)
                max=sum/k;
            }
        }
        printf("%d\n",(int)(max*1000));
    }
    return 0;
}
