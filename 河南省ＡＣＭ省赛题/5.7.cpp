#include<stdio.h>
#include "string.h"
int w[15],n[15],f[500000],V;
void ZeroOnePack(int cost , int weight) {
    int v;
    for (size_t v = V; v >= cost; v--) {
        if(f[v] < f[v-cost] + weight)
            f[v] = f[v-cost] + weight;
    }
}
void CompletePack(int cost, int weight){
    int v;
    for (size_t v = cost; v <= V; v++) {
        if(f[v] < f[v-cost]+weight)
            f[v] = f[v -cost] + weight;
    }
}
void MultiplePack(int cost,int weight,int amount)//多重背包
{
       int k;
       if (cost*amount>=V)
       {
        CompletePack(cost,weight);
              return;
       }
       k=1;
       while(k<amount)
       {
              ZeroOnePack(k*cost,k*weight);
              amount=amount-k;
              k=k*2;//分割
       }
       ZeroOnePack(amount*cost,amount*weight);
}
int main(){
    int i, j, t=1, a[10], sum;
    while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[1],&a[2],&a[3],
                         &a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]))
    {
           if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0
                     &&a[6]==0&&a[7]==0&&a[8]==0&&a[9]==0&&a[10]==0)
                  break;//结束条件
           sum = 0 ;
           j = 1;
           for (size_t i = 1; i <= 10; i++) {
               sum += a[i] * i;
               if (a[i]) {
                   w[j] = i;
                   n[j] = a[i];
                   j ++;
               }
           }
           printf("#%d:",t );
           if(sum % 2 == 1)
                printf("Can't be divided.\n" );
            else
            {
                V = sum / 2;
                memset(f,0,sizeof(f));
                for (size_t i = 1; i < j; i++) {
                    MultiplePack(w[i],w[i],n[i]);
                }
                if (f[V] == V)
                    printf("Can be divided.\n");
                else
                    printf("Can't be divided.\n");
            }
            printf("\n" );
            t++;
        /* code */
    }
    return 0;
}
