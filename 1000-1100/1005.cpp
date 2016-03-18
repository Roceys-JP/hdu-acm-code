#include<stdio.h>  
#include<string.h>  
int main()  
{  
    int a,b,n,i;  
    while(scanf("%d%d%d",&a,&b,&n),a||b||n)  
    {  
        int f[1009];  
        f[1]=1;  
        f[2]=1;  
        for(i=3;i<=1008;i++)  
        {  
            f[i]=(a*f[i-1]+b*f[i-2])%7;  
        }  
        printf("%d\n",f[(n-1)%1008+1]);  
    }  
    return 0;  
}  
