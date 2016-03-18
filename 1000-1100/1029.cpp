#include<stdio.h>
#include<string.h>
int map[500001];
int main()
{
int n,i,a,max;
while(scanf("%d",&n)!=EOF)
{
memset(map,0,sizeof(map));
for(i=0;i<n;i++)
{
scanf("%d",&a);
map[a]++;
if(map[a]>=(n+1)/2)
max=a;
}
printf("%d\n",max);
}
return 0;
}
