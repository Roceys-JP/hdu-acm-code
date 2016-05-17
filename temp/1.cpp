#include "stdio.h"
int main(int argc, char const *argv[]) {
    int N,a[55];
    for(int i = 0 ; i < 51 ; i++) a[i] = -1;
    scanf("%d", &N);
    for (int i = 0; i < N; i++) {
        int temp;
        scanf("%d", &temp);
        a[temp]++;
    }
    for(int i = 0; i< 51 ; i++){
        if(a[i] != -1){
            printf("%d:%d\n", i,a[i]+1);
        }
    }
    return 0;
}
