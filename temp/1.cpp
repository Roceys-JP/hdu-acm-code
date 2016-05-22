#include "stdio.h"
#include "string.h"
int main(int argc, char const *argv[]) {
    char a[10];
    scanf("%s", a);
    int l = strlen(a);
    while (a[l] != '\n') {
        printf("%s\n", a);
        scanf("%s", a);
    }
    return 0;
}
