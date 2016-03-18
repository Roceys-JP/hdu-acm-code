 #include<cstdio>
 #include<cstring>
 int visit[100005];
 int main() {
     int step,mod,front;
     while(scanf("%d%d",&step,&mod)!=EOF) {
         memset(visit,0,sizeof(visit));
         visit[0]=1;
         front=0;
         int i;
         for(i=1;i<mod;++i) {
             front=(front+step)%mod;
             if(visit[front])
             break;
             visit[front]=1;
         }
         if(i==mod)
         printf("%10d%10d    Good Choice\n\n",step,mod);
         else
         printf("%10d%10d    Bad Choice\n\n",step,mod);
     }
     return 0;
 }
