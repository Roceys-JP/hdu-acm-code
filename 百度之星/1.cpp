#include "stdio.h"
#include "string.h"
#include "algorithm"
using namespace std;
const long long mod=9973;
long long sum[100005],arr[100005],re[100005];
char str[100005];
int main(int argc, char const *argv[]) {
    arr[1]=1;
    for (int i = 2; i < 100005; i++) {
        arr[i] = arr[mod%i] * (mod - mod/i)% mod;
    }
    int N;
    while (scanf("%d", &N) != EOF) {
        scanf("%s", str+1);
        sum[0] = 1;
        re[0] = 1;
        for(int i = 1; str[i] != 0 ;i++){
            sum[i]=(sum[i-1]*(str[i]-28))%mod;
            re[i]=arr[sum[i]];
        }
        for (int i = 0; i < N; i++) {
            long long  x,y;
            scanf("%I64d %I64d", &x,&y);
            long long  temp = re[x-1];
            printf("%I64d\n", (sum[y]*temp)%mod);
        }
    }
    return 0;
}
