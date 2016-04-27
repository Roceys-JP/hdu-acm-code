#include "iostream"  
#include "stdio.h"  
#include "math.h"  
#include "vector"  
#include "queue"  
#include "memory.h"  
#include "algorithm"  
#include "string"  
using namespace std;  
#define max(a,b) a>b?a:b
#define min(a,b) a<b?a:b

int n;
int a[10010];

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
            else if(tmp<0)
            {
               j=i+1;
               tmp=0;
            }
        }
        if(maxx<0)
           maxx=0;
        printf("%d %d %d\n",maxx,a[s],a[e]);
    }
}

