#include "stdio.h"
#include "string.h"
#include "stack"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[50];
    gets(a);
    stack<int> s_num;
    stack<char> s_str;
    int l = strlen(a),temp=0;
    for (int i = 0; i < l; i++) {
        if(a[i] == '+'||a[i] == '-'||a[i] == '*'||a[i] == '/')
            s_str.push(a[i]);
        if(a[i]>= '0' && a[i] <= '9') {
            temp = temp * 10 + a[i]-'0';
        }
        if(a[i] == ' ' || a[i+1] == '\0'){
            if(temp != 0){
                s_num.push(temp);
                temp = 0;
            }
        }
    }
    while ( !s_str.empty() && !s_num.empty() ) {
        int x,y;
        x = s_num.top();
        s_num.pop();
        y = s_num.top();
        s_num.pop();
        char cal = s_str.top();
        s_str.pop();
        if(cal == '+'){
            s_num.push(x+y);
        }
        if(cal == '-'){
            s_num.push(y-x);
        }
        if(cal == '*'){
            s_num.push(x*y);
        }
        if(cal == '/'){
            if(y==0)printf("ERROR\n" );
            else s_num.push(y/x);
        }
    }
    while (!s_str.empty()) {
        printf("%c ", s_str.top());
        s_str.pop();
    }
    while (!s_num.empty()) {
        printf("%d ", s_num.top());
        s_num.pop();
    }
    return 0;
}
