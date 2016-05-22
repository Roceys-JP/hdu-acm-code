#include "stdio.h"
#define min(a,b) a>b? b:a
#define max(a,b) a>b? a:b

long long int jiechen(int n)
{
    long long int sum = 1;
    for(long long int i = 1; i <= n ; i++){
        if(sum * i  > 1000000007) sum %= 1000000007;
        sum *= i;
    }
    return sum ;
}
int main(int argc, char const *argv[]) {
    int n,m;
    while (~scanf("%d%d", &n,&m )) {
        //printf("%lld\n", jiechen(3) );
        if(n == 1 ) printf("1\n");
        else if(m == 1 ) printf("1\n");
        else if(n == 2 ) printf("%d\n", m-1);
        else if(m == 2 ) printf("%d\n", n-1);
        else {
            long long int temp = n+m-4;
            long long int temp3 = n-2;
            long long int temp1 = jiechen(temp) / (jiechen(temp-temp3) * jiechen(temp3));
            printf("%I64d\n", temp1 % 1000000007);
        }
    }
}//c(m+n,min(m,n)-2)
