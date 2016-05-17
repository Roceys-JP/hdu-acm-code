 
#include <iostream>
#include <set>
#include <string>
#include <stdio.h>
#include <algorithm>
#include <string.h>
using namespace std;
int main()
{
    int n,m;
    while(~scanf("%d",&n))
    {
        set<string>s;
        set<string>e;
        set<string>::iterator it;
        string ss,a[450];
        for(int i=0;i<n;i++)
        cin>>a[i];
        scanf("%d",&m);
        for(int i=0;i<m;i++)
        {
            cin>>ss;
            s.insert(ss);
        }
        for(int i=0;i<n;i++)
        {
            int j=0,len=a[i].length(),flag=1;
            while(a[i][j]!='=')
            {
                string xx="";
                while(a[i][j]!='+'&&a[i][j]!='=')
                xx+=a[i][j],j++;
                xx+="";
                if(find(s.begin(),s.end(),xx)==s.end())
                {flag=0;break;}
                if(a[i][j]=='=') break;
                j++;
            }
            if(flag==1)
            {
                j++;
                while(j<len)
                {
                    string xx="";
                    while(a[i][j]!='+'&&j<len)
                    xx+=a[i][j],j++;
                    j++; //+
                    xx+="";
                    if(find(s.begin(),s.end(),xx)==s.end())
                    e.insert(xx);
                    s.insert(xx);
                }
            }
        }
        cout<<e.size()<<endl;
        for(it=e.begin();it!=e.end();it++)
            cout<<*it<<endl;
    }
    return 0;
}        
