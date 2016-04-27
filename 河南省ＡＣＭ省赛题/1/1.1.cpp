#include "stdio.h"
#include <math.h>
int main(int argc, char const *argv[]) {
    int n,m;
    while (scanf("%d%d",&n,&m )!=EOF) {
        int i,j,k;
        double a[10][10],b1,b2;
        for(i = 0 ; i < n; i++)
        {
            scanf("%lf%lf%lf",&a[i][0],&a[i][1],&a[i][2] );
        }
        for(i = 0 ; i < m; i++)
        {
            scanf("%lf%lf",&b1,&b2);
            for(j = 0 ; j < n ; j++)
            {
                double temp=sqrt((b1-a[j][0])*(b1-a[j][0])+(b2-a[j][1])*(b2-a[j][1]));
                if(temp<=a[j][2])
                {
                    printf("YES\n");
                    break;
                }
            }
            if(j==n)
                printf("NO\n");
        }
    }
    return 0;
}
