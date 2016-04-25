题目中有两种购买方式，p元1件，或者是q元m件，如果p*m <= q，那么每次都买一件肯定是最小的价格，结果为p*n

如果p*m >q 也就是说如果能买m件，那么花q的钱是优的，所以可以买n/m套，这个价格是便宜的，剩下的n-n/m*m件分两种情况，一种是买n-n/m*m件，一种是买一套，比较一下，选一个小的值。

不能用dp，TLE，，，，

#include <stdio.h>  
#include <string.h>  
#include <algorithm>  
using namespace std ;  
#define INF 0x3f3f3f3f  
int main() 
{  
    int t , i , j , ans ,  n , m , p , q ;  
    scanf("%d", &t) ;  
    while( t-- ) 
    {  
        scanf("%d %d %d %d", &n, &m, &p, &q) ;  
        if( p*m <= q ) printf("%d\n", n*p) ;  
        else 
        {  
            i = n/m ;  
            ans = i*q ;  
            i = n-m*i ;  
            if( i*p > q )  
                ans += q ;  
            else ans += i*p ;  
            printf("%d\n", ans) ;  
        }  
    }  
    return 0 ;  
}  


