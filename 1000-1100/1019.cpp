#include<iostream>
using namespace std;
int gcd(int a,int b) //欧几里德求最大公约数
{
if(b==0) return a;
return gcd(b,a%b);
}
int main()
{
int t,n,m,i,a,b;
cin>>t;
while(t--)
{
cin>>n>>m;
a=m;
for(i=1;i<n;i++)
{
cin>>m;
if(a<m)
{
b=a;a=m;m=b;
}
a=a/gcd(a,m)*m; //最小公倍数=两数之积/最大公约数
}
cout<<a<<endl;
}
return 0;
}
