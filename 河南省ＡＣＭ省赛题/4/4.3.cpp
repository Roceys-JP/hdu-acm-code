#include "stdio.h"
#include "string.h"
#include "stack"
using namespace std;
#define add(a,b) a+b
#define min(a,b) a>b?b:a
#define max(a,b) a>b?a:b
int main(int argc, char const *argv[]) {
    int N;
    scanf("%d", &N);
    getchar();
    while (N--) {
        stack<int> s;
        char a[305];
        //scanf("%s", a);
        fgets(a,305,stdin);
        //getchar();
        int l = strlen(a);
        for (size_t i = 0; i < l ; i++) {
            if(a[i] >= 'a' && a[i] <= 'z') {
                if (a[i+2] == 'n')//min
                    s.push(-1);
                else if (a[i+2] == 'x')//max
                    s.push(-2);
                else if (a[i+2] == 'd')//add
                    s.push(-3);

                i += 2;
            }
            else if(a[i] >= '0' && a[i] <= '9') {
                int sum = 0;
                for(i;i<l;i++){
                    if(a[i] >= '0' && a[i] <= '9') {
                        sum = sum * 10 + a[i] - '0';
                    }
                    else
                        break;
                }
                s.push(sum);
            }
            else if(a[i] == '(')
                s.push(-4);
            if(a[i] == ')'){
                int b = s.top();
                s.pop();
                int a = s.top();
                s.pop();
                s.pop();
                if(s.top() == -1){
                    s.pop();
                    s.push(min(a,b));
                }
                else if(s.top() == -2){
                    s.pop();
                    s.push(max(a,b));
                }
                else if(s.top() == -3){
                    s.pop();
                    s.push(add(a,b));
                }
            }
        }
        printf("%d\n", s.top());
    }
    return 0;
}
