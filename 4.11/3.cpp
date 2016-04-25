/*
题目描述
给定一个字符串，判断其中的括号是否配对。

输入
第一行输入一个数N（0<N<=100）,表示有N组测试数据。后面的N行输入多组输入数据，每组输入数据都是一个字符串S(S的长度小于10000，且S不是空串），测试数据组数少于5组。数据保证S中只含有"[","]","(",")",“{”,"}"六种字符。

输出
每组输入数据的输出占一行，如果该字符串中所含的括号是配对的，则输出Yes,如果不配对则输出No。
样例输入
3
[({])}
([])}
([[](){}])
样例输出
No
No
Yes
*/
#include<iostream>
#include<stdio.h>
#include<stack>
#include<string.h>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        stack<char> s1;
        char a[10001];
        int l,i,j;
        scanf("%s",a);
        l = strlen(a);
        for(i = 0 ; i < l ; i++)
        {
            if(a[i] == '[' || a[i] == '(' || a[i] == '{')
                s1.push(a[i]);
            else if(!s1.empty() && s1.top() == a[i]-1 || s1.top() == a[i]-2)
                s1.pop(); 
            else
                s1.push(a[i]);
            
        }
        if(s1.empty())
            printf("Yes\n");
        else
            printf("No\n");

    }
}

