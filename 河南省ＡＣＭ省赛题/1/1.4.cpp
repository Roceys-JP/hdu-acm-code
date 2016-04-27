# include<stdio.h>
# include<string.h>
#define sum(a,b) a+b
int w[15],n[15],f[500000],V;
void ZeroOnePack(int cost,int weight)//01背包
{
       int v;
       for(v=V;v>=cost;v--)
            f[v]=sum(f[v],f[v-cost]+weight);

             /* if(f[v]<f[v-cost]+weight)
                     f[v]=f[v-cost]+weight;*/
}
void CompletePack(int cost,int weight)//完全背包
{
       int v;
       for(v=cost;v<=V;v++)
            f[v]=sum(f[v],f[v-cost]+weight);
            //  if(f[v]<f[v-cost]+weight)
            //         f[v]=f[v-cost]+weight;
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
int main()
{
       int i,j,t=1,c[10],sum;
       while(~scanf("%d%d%d%d%d",&c[0],&c[1],&c[2],&c[3],&t))
       {
            int m[10],w;
            memset(f,0,sizeof(f));
            for(i=0;i<t;i++)
            {
                scanf("%d%d%d%d%d",&m[0],&m[1],&m[2],&m[3],&w);
                for(i=1;i<5;i++)
                    MultiplePack(c[i],c[i],m[i]);
                printf("%d\n",f[w] );
            }


       }
       return 0;
}
