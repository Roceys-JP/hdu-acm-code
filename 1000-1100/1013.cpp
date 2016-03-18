#include<stdio.h>
int main()
{
    char s[1001];
    while(scanf("%s",s),s[0]!='0')
    {
        int sum =0,i;
        for (i=0;s[i];i++)
        {
            sum +=s[i]-'0';
            if(sum>9)
                sum = sum%10+sum/10;
        }
        printf("%d\n",sum);
    }
}
