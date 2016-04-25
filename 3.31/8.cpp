#include<stdio.h>
#include<string.h>
int main()
{
    int n,arr[1445];
    while(scanf("%d",&n)!=EOF)
    {
        memset(arr,0,1440*sizeof(int));
        int sum=0;
        for(int i = 0 ;i < n ; i++)
        {
             int m,a,b,a1,b1,t1,t2;
             scanf("%d:%d %d:%d",&a,&a1,&b,&b1);
             t1 = a *60 +a1;
             t2 = b *60 +b1;
            // printf("%d %d\n",t1,t2);
             memset(arr+t1,1,(t2-t1)*sizeof(int));
        }
        for(int i = 0 ; i <= 1440;i++)
            if(arr[i] == 0)
                sum++;
                //printf("i=%d :%d \n",i,arr[i]);
        printf("%d\n",sum);
    }
}

