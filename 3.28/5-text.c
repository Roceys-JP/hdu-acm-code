#include<stdio.h>
int main()
{
int n,i,t,w,j[102],k;
while(scanf("%d",&n)!=EOF)
{
if(n==0)break;
for(i=0;i<n;i++)
scanf("%d",&j[i]);
w=j[0];

for(i=0;i<n;i++)
{
if(j[i]<=w)
k=i;
w=j[k];
}
if(w!=j[0])
{t=j[k];j[k]=j[0];j[0]=t;}
for(i=0;i<n;i++)
if(i==0)
printf("%d",j[i]);
else
printf(" %d",j[i]);
printf("\n");
}
return 0;
}
