#include<stdio.h>
int main()
{
    int a,b;
    while(~scanf("%d%d",&a,&b))
    {
        int a1 =a,b1 =b,t ,i , max=0;
        if(a>b){t = a; a = b; b = t;}
        for (i = a ; i <= b ; i++)
        {   int j = 1;
            int i1= i;
            while(i1!=1)
            {
                if(i1%2==0)
                    i1/=2;
                else 
                    i1 = 3*i1 +1; 
                j++;
            }     
            if(j>max)
                max=j;
        } 
        printf("%d %d %d\n",a1,b1,max);
    }
}
