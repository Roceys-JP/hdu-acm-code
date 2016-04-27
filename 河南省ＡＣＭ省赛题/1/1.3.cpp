#include "stdio.h"
int main(int argc, char const *argv[]) {
    int n;
    while (scanf("%d",&n )!=EOF) {
        int L,i,j,k,a[1001],t=0;
        scanf("%d",&L );
        for (i = 0; i < n; i++) {
            scanf("%d",&a[i]);
        }
        for (i = 0; i < n; i++) {
            int temp = L-a[i];
            for (j = 0; j < n; j++) {
                if(temp==a[j])
                {
                    printf("%d\n\n%d\n",i+1,j+1);
                    t=1;
                    break;
                }
            }
            if(t==1)
                break;
        }
    }
    return 0;
}
