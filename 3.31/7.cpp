#include<stdio.h>
#include<string.h>
#include <time.h>
int main()
{
    int n;
    /* double start = clock();
     while(n--)
        memset(a,-1,sizeof(a));
    double  finish = clock();
       printf("%lf\n",finish-start);*/
    while(~scanf("%d",&n))
    {
         int arr[1445]={0},sum=1;
        while(n--)
        {
             int m,a,b,a1,b1,t1,t2;
             scanf("%d:%d %d:%d",&a,&a1,&b,&b1);
             t1 = a *60 +a1;
             t2 = b *60 +b1;
            // printf("%d %d\n",t1,t2);
             int t = t2-t1+1;
             memset(&arr[t1],-1,sizeof(int)*t);
        }
        for(int i = 0 ; i < 1440;i++)
            if(arr[i]==0)
                sum++;
                //printf("i=%d :%d \n",i,arr[i]);
        printf("%d\n",sum);
    }
}

