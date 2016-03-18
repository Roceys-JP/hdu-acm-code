#include<cstdio>
int main(){
    int N;
    scanf("%d",&N);
    for(int k=0;k<N;k++){
        if(k!=0) printf("\n");//控制格式
        int kase=0,n,m;
        while(scanf("%d%d",&n,&m)&&m+n){
            int sum=0;
            for(int i=1;i<n-1;i++)
            for(int j=i+1;j<n;j++)
            if((double)(i*i+j*j+m)/(i*j)==(i*i+j*j+m)/(i*j))//直接判断是不是整数
                sum++;
            printf("Case %d: %d\n",++kase,sum);
        }
    }
    return 0;
}
