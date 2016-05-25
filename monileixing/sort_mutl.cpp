#include<iostream>
#include<cstdlib>
#include "stdio.h"
#include "string.h"
#include<algorithm>
using namespace std;
struct test{
    int a;
    int b;
    char name[10];
};
bool cmp_num(const test &x,const test &y) {
    return x.a<y.a;
}
bool cmp_name(const test &x,const test &y) {
    //printf("%s %s %d\n", x.name , y.name ,strcmp(x.name , y.name));
    if(strcmp(x.name , y.name) > 0 )    return 0;
    else return 1;
}
bool cmp_xuehao(const test &x,const test &y) {

    if(strcmp(x.name, y.name) == 0 || x.b == y.b) return x.a<y.a;
    else return x.b<y.b;

}
int main()
{
    int n,c;
    test x[100006];
    scanf("%d%d", &n,&c);
    for (int i = 0; i < n; i++) {
        scanf("%6d %s %d", &x[i].a, x[i].name, &x[i].b);
    }
    if(c==1)sort(x,x+n,cmp_num);
    else if(c == 2)sort(x,x+n,cmp_name);
    else if(c == 3)sort(x,x+n,cmp_xuehao);

    for (int i = 0; i < n; i++) {
        printf("%06d %s %d\n", x[i].a, x[i].name, x[i].b);
    }
    return 0;
}
