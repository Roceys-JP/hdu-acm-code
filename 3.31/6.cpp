#include<stdio.h>  
int main()  
{   
    double D=0,V=0;
    while(~scanf("%lf%lf",&V,&D))  
    {    
	int T=0; 
        for(int cnt=1;V>0;cnt++)  
        {  
            if(V-(cnt*D) <= 0)  
            {  
                while(V>0.0000001) // 浮点数，不能等于０ 
                {  
                    V-=D;  
                    T++;  
                }  
                break;  
            }  
            V-=cnt*D;  
            T+=cnt;  
            T++;  
        }  
        printf("%d\n",T);  
    }  
}  
