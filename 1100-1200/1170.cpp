#include<stdio.h>
#include<iostream>
using namespace std;
int main()
{
    int T,a,b;
    char ch;
    scanf("%d",&T);
    while(T--)
    {
        cin>>ch>>a>>b;
        if(ch=='+') printf("%d\n",a+b);
        else if(ch=='-')
               printf("%d\n",a-b);
        else if(ch=='*')
               printf("%d\n",a*b);
        else 
        {
            if(a%b==0)printf("%d\n",a/b);//这里注意，看清题目意思 
            else 
               printf("%.2f\n",(float)a/b);
        }    
    }    
    return 0;
}
