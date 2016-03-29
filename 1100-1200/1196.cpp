#include<iostream>  
using namespace std;  
  
int main()  
{  
    int num,sum,i,j,temp;  
    while(cin>>num && num!=0)  
    {  
       sum=1;temp=0;  
       for(i=1;temp==0;i++)  
       {  
           temp=num%2;  
           //arr[i]=num%2;  
           num=num/2;  
       }  
       //cout<<"i="<<i<<endl;  
       //for(;;i--)  
           //if(arr[i]==1)  
               //break;  
       for(j=1;j<i-1;j++)  
           sum=sum*2;  
       cout<<sum<<endl;  
    }  
    return 0;  
}  
