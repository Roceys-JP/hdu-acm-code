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
        for(int i = 0 ; i <= 9 ; i++)
        {
            if(a[i] && a[10] && i)  //a[10] == --
                for(int j = 0 ; j <= 9; j++)
                    if( a[j] )
                    {
                        int t = bijiao(i*10 + j , end) +3;
                        if (t < ans) ans = t;
                    }
            int t = bijiao(i,end) + 1;
            if (t < ans) ans = t;
        }
        printf("%d\n", ans == INF ? -1:ans);
    }
}
