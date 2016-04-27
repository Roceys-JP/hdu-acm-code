#include<iostream>
#include<algorithm>
#include<cstring>
#include<cstdio>
#define MAXN 110
#define MAXV 1010
#define MAXK 50

using namespace std;

int cost[MAXN],weight[MAXN],d[MAXV][MAXK],t1[MAXK],t2[MAXK];

int main()
{
    int test,n,v,k,i,j,p;
    scanf("%d",&test);
    while(test--)
    {
        scanf("%d%d%d",&n,&v,&k);
        for(i=0; i<n; i++)
            scanf("%d",&weight[i]);
        for(i=0; i<n; i++)
            scanf("%d",&cost[i]);
        memset(d,0,sizeof(d));
        for(p=0; p<n; p++)
        {
            for(i=v; i>=cost[p]; i--)
            {
                for(j=1; j<=k; j++)
                {
                    t1[j]=d[i-cost[p]][j]+weight[p];//不要想到二维费用背包，这里完全不是同一回事
                    t2[j]=d[i][j];
                }
                t1[j]=t2[j]=-1;//不需要排序，每次都是从大到小合并的
                int x,y,z;
                x=y=z=1;
                while(z<=k&&(t1[x]!=-1||t2[y]!=-1))//起初我是 x<=k||y<=k;如果t1、t2的后面全是零，x和z将不会增加
                {
                    if(t1[x]>t2[y])
                    {
                        d[i][z]=t1[x];
                        x++;
                    }
                    else
                    {
                        d[i][z]=t2[y];
                        y++;
                    }
                    if(d[i][z-1]!=d[i][z]) //起初自己写了个合并太真戳了，后来网上看了下，很精简！！
                        z++;
                }
            }
        }
        printf("%d\n",d[v][k]);
    }
    return 0;
}
