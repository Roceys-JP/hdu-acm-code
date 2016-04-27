#include<iostream>
#include<string>
#include<string.h>
using namespace std;
#define R 1003
#define C 1003
short len[R][C];
int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        memset(len,0,sizeof(len));
        string a;
        cin>>a;
        string b=a;
        int l=a.length();
        for (int i=0;i<l;i++)
        {
            b[i]=a[l-i-1];
        }

        for (int i=0;i<a.length();i++)
            for (int j=0;j<b.length();j++)
            {
                if(a[i]==b[j])
                    len[i+1][j+1]=len[i][j]+1;
                else
                    len[i+1][j+1]= len[i][j+1]>len[i+1][j] ?len[i][j+1]:len[i+1][j] ;
            }
        cout<<l-len[a.length()][b.length()]<<endl;
    }
    return 0;
}
