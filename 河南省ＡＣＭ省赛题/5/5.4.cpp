#include<stdio.h>
#define min(a,b) a>b?b:a
#define INF 0xfffffff
int a[30],up,down;
int bijiao(int begin, int end)
{
    int ans = INF;
    if(up){ans = min(ans,((end + 100 - begin ) % 100));}
    if(down){ans = min(ans,((begin + 100 - end) % 100));}
    return ans;
}
int fly_to(int x, int y)
{
    if(x == y)
        return 0;
    if(y / 10 == 0)
    {
        if(a[y]) return 1;
        return INF;
    }
    else{
        if(a[10] && a[y/10] && a[y%10])
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
    return min(b, c);
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t--) {
        int ans = INF, begin,end;
        scanf("%d %d %d %d",&a[1],&a[2],&a[3],&up);
        scanf("%d %d %d %d",&a[4],&a[5],&a[6],&down);
        scanf("%d %d %d",&a[7],&a[8],&a[9]);
        scanf("%d %d",&a[10],&a[0]);
        scanf("%d %d",&begin,&end);

        ans = bijiao(begin,end);

        for(int i = 0 ; i <= 99 ; i++)
        {
            ans = min(ans , fly_to(begin,i) + walk_to(i, end));
        }
        printf("%d\n", ans == INF ? -1:ans);
    }
}
