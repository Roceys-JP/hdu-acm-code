#include "stdio.h"
int a[50][50], n;
#define false 0
#define true 1
int func0(){
    for(int i = 0; i < n; i++)
        if(a[i][i])
            return false;
    return true;
}
int func1()
{
    for(int i = 0 ; i < n ;i++)
        for(int j = 0 ; j < n ; j++)
            if(i != j && a[i][j] <= 0)
                return false;
    return true;
}
int func2()
{
    for(int i = 0 ; i < n ; i++)
        for(int j = 0; j < n ;j++)
            if(a[i][j] != a[j][i])
                return false;
    return true;
}
int func3()
{
    for(int i=0; i < n ; i++)
        for(int j = 0 ; j < n ; j++)
            for(int k = 0 ; k < n ; k++)
                if(i != j && j != k & i !=k && a[i][j] + a[j][k] < a[i][k])
                    return false;
    return true;
}
int main()
{
    int t,ans;
    scanf("%d", &t);
    while (t--) {
        ans = 0 ;
        scanf("%d", &n);
        for(int i = 0 ; i < n ; i++)
            for(int j = 0 ; j < n ; j++)
                scanf("%d", &a[i][j] );
        while (1) {
            if( !func0()){
                ans = 1;
                break;
            }
            if( !func1()){
                ans = 2;
                break;
            }
            if( !func2()){
                ans = 3;
                break;
            }
            if( !func3()){
                ans = 4;
                break;
            }
        }
        printf("%d\n", ans);
    }
}
