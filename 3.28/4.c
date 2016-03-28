#include<stdio.h>
double c(double a)
{
  double s=1,i;
  for(i=1;i<=a;i++)
  s*=i;
  return s;
}
double f(double n,double i)
{
  return c(n)/(c(n-i)*c(i));
}//排列组合公式
int main()
{
  double n,i,sum;
  while(~scanf("%lf",&n))
  {
    sum=0;
    for(i=2;i<=n;i++)
    	sum+=(i-1)*f(n,i);
    printf("%.0lf\n",sum);
  }
  return 0;
}
