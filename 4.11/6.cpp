#include <stdio.h>
int is(double a,double b,double c,double d) 
{ 
return (a>0&&b>0&&c>0&&d>0&&a+b+c>d&&a+b+d>c&&a+c+d>b&&b+c+d>a); 
} 
int main() 
{ 
    double a,b,c,d,s;
    int n; 
    scanf("%d",&n);
    while(n--)
    {
    scanf("%lf%lf%lf%lf",&a,&b,&c,&d);
    if (is(a,b,c,d))
        printf("Yes\n"); 
    else 
         printf("No\n"); 
    }
}
