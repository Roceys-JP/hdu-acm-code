#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stack>
using namespace std;
int main()
{
    int N,i;
    scanf("%d",&N);
    getchar();
    while(N--)
    {
        char s1[1000];
        int temp1=0,temp2;
        stack<int>s;
        gets(s1);
        int len=strlen(s1);
        for(i=0;i<len;i++)
            if(s1[i]=='=')
                break;
        if(s1[i+1]>='0'&&s1[i+1]<='9')
        {
                temp1=s1[i+1]-'0';
                i=i+1;
        }
        for(i=i+1;i<len;i++)
        {
            if(s1[i] == '+')
                break;
            else
            {
                if(s1[i]=='O'||s1[i]=='S'||s1[i]=='H')
                {
                    int a;
                    if(s1[i]=='O')
                        a=16;
                    if(s1[i]=='S')
                        a=32;
                    if(s1[i]=='H')
                        a=2;
                    s.push(a);
                }
                if(s1[i] == 'N')
                {
                        if(s1[i+1]=='a')
                        {
                            s.push(23);
                            i++;
                        }
                        else
                            s.push(14);
                }
                if(s1[i]=='C')
                {
                        if(s1[i+1]=='l')
                        {
                            s.push(35);
                            i++;
                        }
                        if(s1[i+1]=='a')
                        {
                            s.push(40);
                            i++;
                        }
                        else
                            s.push(12);
                }
                if(s1[i]=='Z')
                {
                        s.push(65);
                        i++;
                }
                if(s1[i]>='0'&&s1[i]<='9')
                {
                    temp2=s.top();
                    s.pop();
                    s.push(temp2*(s1[i]-'0'));
                }
                if(s1[i]=='(')
                    s.push(-1);
                if(s1[i]==')')
                {
                    int sum1=0;
                    while(s.top() != -1)
                    {
                        sum1+=s.top();
                        s.pop();
                    }
                    s.pop();
                    if(s1[i+1]>='0'&&s1[i+1]<='9')
                    {
                        s.push(sum1*(s1[i+1]-'0'));
                        i++;
                    }
                    else
                        s.push(sum1);
                }

            }
    }
    int sum=0;
    while(!s.empty())
    {
        sum=sum+s.top();
        s.pop();
    }
    if(temp1!=0)
        printf("%04d\n",temp1*sum);
    else
        printf("%04d\n",sum);
    }
    return 0;
}
