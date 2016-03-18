#include<stdio.h>
int main()
{
int n,i;
double sum,t;
printf("n e\n");
printf("- -----------\n");
printf("0 1\n1 2\n2 2.5\n");
sum=2.5;
for(n=3;n<10;n++)
{
   t=1.0;
   for(i=2;i<=n;i++)
   t*=1.0/i;
   sum+=t;
   printf("%d %.9f\n",n,sum);
}
}
