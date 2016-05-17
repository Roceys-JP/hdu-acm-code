#include <stdio.h>
int a[32][32],n;
bool o1()
{
   for(int i=0;i<n;i++)
       if(a[i][i])
           return false;
   return true;
}
bool o2()
{
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           if(i!=j && a[i][j]<=0)
               return false;
   return true;
}
bool o3()
{
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           if(a[i][j]!=a[j][i])
               return false;
   return true;
}
bool o4()
{
   for(int i=0;i<n;i++)
       for(int j=0;j<n;j++)
           for(int k=0;k<n;k++)
               if(i!=j && j!=k && i!=k && a[i][j]+a[j][k]<a[i][k])
                   return false;
   return true;
}
int main()
{
   int z,ans;
   scanf("%d",&z);
   while(z--)
   {
       ans = 0;
       scanf("%d",&n);
       for(int i=0;i<n;i++)
           for(int j=0;j<n;j++)
               scanf("%d",&a[i][j]);
       while(1)
       {
           if(!o1())
           {
               ans = 1;
               break;
           }
           if(!o2())
           {
               ans = 2;
               break;
           }
           if(!o3())
           {
               ans = 3;
               break;
           }
           if(!o4())
               ans = 4;
           break;
       }
       printf("%d\n",ans);
   }
   return 0;
}
#include<stdio.h>
#include<string.h>
int w[15],n[15],f[500000],V;
void ZeroOnePack(int cost,int weight)//01背包
{
       int v;
       for(v=V;v>=cost;v--)
              if(f[v]<f[v-cost]+weight)
                     f[v]=f[v-cost]+weight;
}
void CompletePack(int cost,int weight)//完全背包
{
       int v;
       for(v=cost;v<=V;v++)
              if(f[v]<f[v-cost]+weight)
                     f[v]=f[v-cost]+weight;
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
       int i,j,t=1,a[10],sum;
       while(scanf("%d%d%d%d%d%d%d%d%d%d",&a[1],&a[2],&a[3],
		 					&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]))
       {
              if(a[1]==0&&a[2]==0&&a[3]==0&&a[4]==0&&a[5]==0
				  		&&a[6]==0&&a[7]==0&&a[8]==0&&a[9]==0&&a[10]==0)
                     break;//结束条件
              sum=0;j=1;
              for(i=1;i<=10;i++)
              {
                     sum+=a[i]*i;
                     if(a[i])
                     {
                            w[j]=i;
                            n[j]=a[i];
                            j++;
                     }
              }
              printf("#%d:",t);
              if(sum%2==1)
                     printf("Can't be divided.\n");
              else
              {
                     V=sum/2;
                     memset(f,0,sizeof(f));
                     for(i=1;i<j;i++)
                            MultiplePack(w[i],w[i],n[i]);
                     if(f[V]==V)
                            printf("Can be divided.\n");
                     else
                            printf("Can't be divided.\n");
              }
              printf("\n");
              t++;
       }
       return 0;
}
#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
#include<cmath>
#include<algorithm>
#include<cctype>
#include <fstream>
#include <limits>
#include <vector>
#include <list>
#include <set>
#include <map>
#include <queue>
#include <stack>
#include <cassert>
using namespace std;
int a[20];
int solve(int st,int ed);
int main()
{
    int ci;
    scanf("%d",&ci);
    while(ci--)
    {
        int ans=10000,st,ed;
        scanf("%d %d %d %d",&a[1],&a[2],&a[3],&a[11]);
        scanf("%d %d %d %d",&a[4],&a[5],&a[6],&a[12]);
        scanf("%d %d %d",&a[7],&a[8],&a[9]);
        scanf("%d %d",&a[10],&a[0]);
        scanf("%d %d",&st,&ed);
        ans=solve(st,ed);
        for(int i=0; i<=9; i++)
        {
            if(a[i]&&a[10]&&i)
                for(int j=0; j<=9; j++)
                    if(a[j])
                    {
                        int t=solve(i*10+j,ed)+3;
                        if(t<ans)
                            ans=t;
                    }
            int t=solve(i,ed)+1;
            if(t<ans)
                ans=t;
        }
        printf("%d\n",ans==10000?-1:ans);
    }
    return 0;
}
int solve(int st,int ed)
{
    int ans=10000;
    if(a[11])
        ans=min(ans,((ed-st+100)%100));
    if(a[12])
        ans=min(ans,((st-ed+100)%100));
    //if(ans<5)cout<<'!'<<st<<ed<<ans<<endl;
    return ans;
}
#include<stdio.h>
#define INF 0xfffffff
#define minn(a, b)(a < b ? a : b)
int fly_to(int x, int y);
int walk_to(int x, int y);
int a[10], up, down, flash;
int main()
{
    int t, i, ans, x, y;
    scanf("%d", &t);
    while(t--)
    {
        scanf("%d%d%d%d", &a[1], &a[2], &a[3], &up);
        scanf("%d%d%d%d", &a[4], &a[5], &a[6], &down);
        scanf("%d%d%d", &a[7], &a[8], &a[9]);
        scanf("%d%d", &flash, &a[0]);
        scanf("%d%d", &x, &y);
        ans = INF;
        for(i = 0; i <= 99; i++)
        {
            ans = minn(ans, fly_to(x, i) + walk_to(i, y));
        }
        printf("%d\n", ans == INF ? -1 : ans);
    }
    return 0;
}
int fly_to(int x, int y)
{
    if(x == y)
        return 0;
    if(y / 10 == 0)
    {
        if(a[y])
            return 1;
        return INF;
    }
    else{
        if(flash && a[y/10] && a[y%10])
            return 3;
        return INF;
    }
}
int walk_to(int x, int y)
{
    int b = INF, c = INF;
    if(up)
        b = (y + 100 - x) % 100;
    if(down)
        c = (x + 100 - y) % 100;
    return minn(b, c);
}
#include <cstdio>
#include <cstring>
#include <map>
#include <string>
#include <algorithm>
using namespace std;
#define FIN freopen("input.txt","r", stdin)
int N;
char tstr[40 + 5];
map<string, int>TM;
int main(){
    //FIN;
    TM.clear();
    scanf("%d", &N);
    for(int i = 0;i < N;i ++){
        scanf("%s", tstr);
        sort(tstr, tstr + strlen(tstr));
        if(!TM[string(tstr)]) TM[string(tstr)] = 0;
        printf("%d\n", TM[string(tstr)]);
        TM[string(tstr)] ++;
    }

    return 0;
}
#include<cstdio>
#include<cstring>
#include<algorithm>
using namespace std;
typedef long long ll;
const ll maxn=100005;
const ll mod=9973;
ll sum[maxn],inv[maxn],re[maxn];
char s[maxn];
int main()
{
    inv[1]=1;
    for(int i=2;i<maxn;++i)
    {
        inv[i]=inv[mod%i]*(mod-mod/i)%mod;
    }
    int n;
    //freopen("shuju.txt","r",stdin);
    while(~scanf("%d",&n))
    {
        scanf("%s",s+1);
        sum[0]=re[0]=1;
        for(int i=1;s[i]!=0;++i)
        {
            sum[i]=(sum[i-1]*(s[i]-28))%mod;
            re[i]=inv[sum[i]];
        }
        for(int i=0;i<n;++i)
        {
            ll a,b;
            scanf("%lld%lld",&a,&b);
            ll tp=re[a-1];
            printf("%I64d\n",(sum[b]*tp)%mod);
        }
    }
    return 0;
}
