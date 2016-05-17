#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
    int t;
    int a[2006];
    while (~scanf("%d", &t)) {
        while (t--) {
            int n,m;
            memset(a,0,sizeof(a));
            double sum = 0.0,max = -0x3fffffff;
            scanf("%d%d", &n,&m);
            for (int i = 0; i < n; i++) {
                scanf("%d", &a[i]);
            }
            for (int i = 0; i <= n-m; i++) {
                for(int k = m ; k <= n && k <= n-i ; k++)
                {
                    sum = 0;
                    for (int j = 0; j < k; j++) {
                        sum += a[j+i];
                    }
                    if (sum / k > max) {
                        max = sum / k;
                    }
                }
            }
            printf("%d\n", (int)(max*1000));
        }
    }
    return 0;
}
