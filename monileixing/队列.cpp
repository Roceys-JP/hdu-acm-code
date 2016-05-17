#include "stdio.h"
#include "queue"
#include "iostream"
using namespace std;
int main(int argc, char const *argv[]) {
    int num,i;
    scanf("%d", &num);
    queue<int> A,B;
    for (int i = 0; i < num; i++) {
        int temp;
        scanf("%d", &temp);
        if(temp % 2){ //奇数
            A.push(temp);
        }
        else{
            B.push(temp);
            //printf("%d\n", B.front());
        }
    }
    int flag = 0;
    if(!A.empty()){
        printf("%d", A.front());
        A.pop();
        i = 1;
    }
    else{
        printf("%d", B.front());
        B.pop();
    }
    while (!B.empty() || !A.empty()) {//至少一个非空
        i ++;
        if(i % 2){
            if(!A.empty()){
                printf(" %d", A.front());
                A.pop();
            }
        }
        else{
            if(!A.empty()){
                printf(" %d", A.front());
                A.pop();
            }
            if(!B.empty()){
                printf(" %d", B.front());
                B.pop();
            }
        }
    }
    printf("\n");
    return 0;
}
