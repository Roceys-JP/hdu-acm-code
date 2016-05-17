#include "stdio.h"
#include "string.h"
#include "stack"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[50];
    gets(a);
    stack<char> s1;
    int l = strlen(a),temp=0;
    for(int i = 0; i < l; i++ ){
        if('0' <= a[i] && a[i] <= '9'){
            temp = temp*10 +a[i];
            i++;
            if(a[i+1] > '9' || a[i+1] < '0'){
                s1.push(temp);
                temp = 0;
            }
        }
        else
        s1.push(a[i]);

    }
    while (!s1.empty()) {
        printf("%d ", s1.top());
        s1.pop();
    }
    return 0;
}
