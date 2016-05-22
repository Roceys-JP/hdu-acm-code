#include "stdio.h"
#include "string.h"
#include "stack"
using namespace std;
int main(int argc, char const *argv[]) {
    char a[1000];
    scanf("%s", a);
    int l = strlen(a);
    stack<char> st;
    for (int i = 0; i < l; i++) {
        if(a[i]>='0' && a[i] <= '9'){
            printf("%c", a[i]);
        }
        if(a[i] == '(') st.push('(');
        if(a[i] == ')'){
            while (st.top()!='(') {
                printf("%c", st.top());
                st.pop();
            }
            st.pop();
        }
        if((a[i] == '*' || a[i] == '/') && (st.top() == '+' || st.top() == '-')){
            st.push(a[i]);
        }
        if((a[i] == '+' || a[i] == '-') && (st.top() == '*' || st.top() == '/')){
            while (!st.empty()) {
                printf("%c", st.top());
                st.pop();
            }
        }
    }
    while (!st.empty()){
        printf("%c", st.top());
        st.pop();
    }
    return 0;
}
