#include <iostream>  
#include <algorithm>  
#include <cstring>  
#include <stdio.h>
using namespace std;  
int  bb[250002];  
int main()  
{  
    int N,V[55],M[55],i,j;  //N为物品种类数，V[]为价值，M[]为数目   
    while(~scanf("%d",&N))  
    {  
        if (N < 0)break;  
        int sum = 0;  
        for(i = 0; i < N; i++)  
        {  
            cin>>V[i]>>M[i];  
            sum += V[i]*M[i];  
        }  
          
        int sum1 = sum / 2;  
        memset(bb,0,sizeof(bb));   //置0   
        for(i = 0; i < N; i++)   //01背包问题   
        {  
            for(j = 0; j < M[i]; j++)     //限定数目   
                for(int k = sum1; k >= V[i]; k--)      
                {  
                    bb[k] = max(bb[k], bb[k-V[i]]+V[i]);  
                }  
        }  
        if(bb[sum1]>sum-bb[sum1])  
            cout<<sum-bb[sum1]<<" "<<bb[sum1]<<endl;
        else
            cout<<bb[sum1]<<" "<<sum-bb[sum1]<<endl;  
    }  
}   
