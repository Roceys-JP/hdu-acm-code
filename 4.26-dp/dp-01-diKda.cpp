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
        for(p=0; p<n; p++)//找每一个物品``
        {
            for(i=v; i>=cost[p]; i--)//01解法
            {
                for(j=1; j<=k; j++)//以往默认为第一大，所以可以不用考虑``
                {
                    t1[j]=d[i-cost[p]][j]+weight[p];//不要想到二维费用背包，这里完全不是同一回事
                    t2[j]=d[i][j];//将装与不装的情况存储下来．
                }
                t1[j]=t2[j]=-1;//不需要排序，每次都是从大到小合并的
                //这里ｊ是标志位，代表两个未合并的队列的最大区域
                int x,y,z;
                x=y=z=1;
                while(z<=k&&(t1[x]!=-1||t2[y]!=-1))//起初我是 x<=k||y<=k;如果t1、t2的后面全是零，x和z将不会增加
                {//合并部分
                    if(t1[x]>t2[y])//类似０１中ｍａｘ
                    {
                        d[i][z]=t1[x];
                        x++;
                    }
                    else
                    {
                        d[i][z]=t2[y];
                        y++;
                    }
                    if(d[i][z-1]!=d[i][z]) //合并,当ｚ到ｋ时，推出,注意，这里本质上还是ｆｏｒ　ｖ－－＞ｃｏｓｔ的循环中
                        z++;
                }
            }
        }
        printf("%d\n",d[v][k]);
    }
    return 0;
}
