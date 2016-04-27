#include <iostream>
#include "string.h"
using namespace std;
int d[1005];
int lis(int a[], int n)
{
    int len = 1, i, j;
    for(i = 0 ; i < n ; i++)
    {//查询每一位置
        d[i] = 1;
        for(j = 0 ; j < i; j++)
            //在当前位置之前的每一个位置
            if(a[j] <= a[i] && d[j]+1 > d[i])
           //把前面各个子序列中最后一个数不大于a【i】
            d[i] = d[j] + 1;
        //反复覆盖一个位置，
        if(d[i] > len) len = d[i];
        //每次留下最大的长度
    }//继续循环
    return len;
}
int main()
{
    int a[1005],m,t,i;

    while (cin>>m) {
        memset(a,0,sizeof(a));
        memset(d,0,sizeof(d));
    for(i = 0 ; i <m ; i++)
        cin>>a[i];
    cout <<lis(a,m)<<endl;
    }

    return 0;
}
