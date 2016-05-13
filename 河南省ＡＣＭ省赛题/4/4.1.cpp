#include <stdio.h>
#include <string.h>
int main()
{   int t;
   scanf("%d",&t);
   while(t--)
   {   char s[100],w[100];
       int n,sum,i,j,l;
       scanf("%s",s);
       l = strlen(s);
       if(s[0] >= '1' && s[0] <= '9')
       {
           j = 0;
           sscanf(s,"%d",&sum);
           while(sum)
           {
               i = sum %26;
               if(i==0)w[j]='Z';
               else w[j]=i-1+'A';
               j++;
               sum=(sum-1)/26;
           }
           for(i = j-1;i>=0;i--)
               printf("%c",w[i]);
           printf("\n");
       }
       else
       {
           sum = 0;
           for(i = 0 ; i < l ; i++)
               sum = sum *26 + s[i] - 'A' + 1;
           printf("%d\n",sum);
       }
   }
}
