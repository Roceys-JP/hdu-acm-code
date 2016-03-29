#include <stdio.h>  
int main()  
{  
    int n,a,b,x,y;  
    scanf("%d",&n);  
    while (n--)  
    {  
        scanf("%d %d",&a,&b);  
        if(a<b)  
            printf("impossible\n");  
        else if((a+b)%2!=0)//这两个数的和与差同奇偶  
            printf("impossible\n");  
        else  
        {  
            x=(a+b)/2;  
            y=(a-b)/2;  
            if(x<y)  
            {  
                int t=x;  
                x=y;  
                y=t;  
            }  
            printf("%d %d\n",x,y);  
        }  
    }  
    return 0;  
}  
