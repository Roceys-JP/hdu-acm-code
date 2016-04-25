#include<stack>
#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
        int n;

        while(~scanf("%d",&n))
        while(n--)
        {
            char b[10005];
            stack<char> a;
            scanf("%s",b);
            int l=strlen(b), p=0;
            if(b[0]==')'||b[0]==']'||b[0]=='}')
                printf("No\n");
            else
            {
                for(int i=0;i<l;i++)
                {
                    if(b[i]=='('||b[i]=='['||b[i]=='{') a.push(b[i]);
                    else if(!a.empty()&&(a.top()+1==b[i]||a.top()+2==b[i]))
                        {
                    //cout<<" "<<a.top()+1<<" "<<a.top()+2<<endl;a.pop();
                        }
                    else p=1;
                }
                if(a.empty()&&p==0) printf("Yes\n");
                else printf("No\n");
            }
        }
}


