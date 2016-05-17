#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n,m;
    while (~scanf("%d %d", &n,&m)){
        int a[1005][2];
        for (int i = 0; i < n; i++) {
            scanf("%d%d", &a[i][0],&a[i][1]);
        }
        for (int i = 0; i < m; i++) {
            int x,y,sum1=0,sum2=0,sum3=0,sum4=0;
            scanf("%d%d", &x,&y);
            for (int j = 0; j < n; j++) {
                if(a[j][0] > x && a[j][1] > y)
                    sum1 ++;
                else if(a[j][0] < x && a[j][1] < y )
                    sum1 ++;
                else if(a[j][0] < x && a[j][1] > y )
                    sum2 ++;
                else if(a[j][0] > x && a[j][1] < y )
                    sum2 ++;
            }
            printf("%d\n", sum1-sum2);
        }
    }
    return 0;
}
