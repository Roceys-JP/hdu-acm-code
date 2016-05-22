#include<stdio.h>
#define min(a,b) a>b?b:a
#define INF 0xfffffff
int a[30],up,down;
int fast_way(int x,int y)
{
     if(x == y)              //如果起始位置和终止位置重合，则走零步
        return 0;
     if(y/10 == 0)       //若end是各位数，且这个键是好的，就走一步
     {
         if(a[y])  return 1;
         return INF;
     }
     else
     {
        if(a[10] && a[y/10] && a[y%10] )  //若这个数是两位数，且key是好的，十位数和个位数也是好的，就走三步
            return 3;
        return INF;
     }
}
int slow_way(int x,int y)   //x为当前位置，y为终止位置
{
    int c=INF,b=INF;
    if(up)
        c=(y+100-x)%100;

    if(down)
        b=(x+100-y)%100;
    return min(b,c);
}
int main()
{
    int N;
    scanf("%d",&N);
    while(N--)
    {
        int ans = INF,_begin,_end,i;
        scanf("%d %d %d %d",&a[1],&a[2],&a[3],&up);
        scanf("%d %d %d %d",&a[4],&a[5],&a[6],&down);
        scanf("%d %d %d %d",&a[7],&a[8],&a[9]);
        scanf("%d %d",&a[10],&a[0]);
        scanf("%d %d",&_begin,&_end);
        for(i = 0 ; i <= 99 ; i++)
        {
            ans = min(ans,fast_way(_begin,i) + slow_way(i,_end));
        }
        printf("%d\n",ans== INF?-1:ans);
    }
    return 0;
}
