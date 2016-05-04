#include "stdio.h"  
using namespace std;
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b
int n,a[10010];

int main()
{
    while(scanf("%d",&n)!=EOF&&n)
    {
        int i,j=0,tmp=0,sum=0,maxx=-1,s=0,e=n-1;
        for(i=0;i<n;i++)
            scanf("%d",&a[i]);
        for(i=0;i<n;i++)
        {
            tmp+=a[i];
            if(tmp>maxx)
            {
               s=j;
               e=i;
               maxx=tmp;
            }
            else if(tmp<0)//这时候已经没有必要计算，因为为负数则无论怎么后面的数值变化都是负影响．
            {
               j=i+1;//从新划定下一个起始位置
               tmp=0;
            }
        }
        if(maxx<0)
           maxx=0;
        printf("%d %d %d\n",maxx,a[s],a[e]);
    }
}
