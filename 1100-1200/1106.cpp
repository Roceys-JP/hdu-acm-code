#include<stdio.h>
#include<string.h>
#include<algorithm> 
using namespace std;
int main()
{
    char a[1005];
    while(~scanf("%s",a))
    {   getchar();
        int arr[1000]={0};
        int i=0,j=0,k,t,l=strlen(a);
	for(i = 0; i < l; i++)if(a[i] == '5')i++;
        for(i ; i < l; i++)
        {
            if(a[i] != '5')
            {
                t = a[i]-'0';
                arr[j] = arr[j]*10 + t;
            }
            else 
            {
               j++; 
            }
        }
        sort(arr,arr+j);
        for (i = 0 ;i < j-1 ; i++)
            printf("%d ",arr[i]);
	printf("%d\n",arr[i]);
    }
}

#include<stdio.h>
#include<string.h>
#include<stdlib.h>
main()
{
    int a[10000],len;
    int start,end,n;
    char str[10024];
    int i,j,min,temp;
    while(gets(str)!=NULL)
    {
        len=strlen(str);
        n=0;
        for(start=0;start<len && str[start]=='5';start++);
        for(;start<len;start=end)
        {
            for(end=start+1;end<len && str[end]!='5';end++);
            str[end]='\0';
            for(end++;end<len && str[end]=='5';end++);
            a[n++]=atoi(str+start);
        }
        for(i=0;i<n-1;i++)
        {
            min=i;
            for(j=i;j<n;j++)
            {
                if(a[j]<a[min])
                    min=j;
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }
        for(i=0;i<n;i++)
            printf(i?" %d":"%d",a[i]);
        printf("\n");
    }
}
