#include <iostream>
#include <queue>
#include "stdio.h"
#include "string.h"
#include "time.h"
#include<stdlib.h>
using namespace std;
struct Node{
    char a[11];
    int num;
    bool operator < ( const Node& b) const{//需要这么写不出现编译错误
        return num>b.num;//看清楚,如果要小优先则>号
    }
}node[100];

int main(){
    int t;
    scanf("%d",&t);
    priority_queue<Node> pq;
    while (t--) {
        char input[10];
        scanf("%s", input);
        if(input[0] == 'P'){
            Node temp;
            scanf("%s%d", temp.a, &temp.num);
            pq.push(temp);
        }
        if(input[0] == 'G'){
            if(pq.empty()){
                printf("EMPTY QUEUE!\n");
            }
            else{
                printf("%s\n",pq.top().a );
                pq.pop();
            }
        }
    }
    return 0;
}

