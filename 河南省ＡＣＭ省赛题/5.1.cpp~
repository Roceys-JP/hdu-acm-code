#include "stdio.h"
#include<algorithm>
using namespace std;
struct num
{
   int left,right;
};

bool cmp(num a,num b)
{
   return a.right<b.right;
}
int main()
{
    int N,A,B,i,j,temp1,temp2;
    scanf("%d",&N );
    while (N--) {
        scanf("%d%d",&A,&B );
        num m[100] = {0};
        j = 0;
        for (size_t i = A; i <= B; i++) {
            temp1 = i;
            temp2 = 0;
            m[j].left = i;
            while (temp1) {
                /* code */
                temp2 *= 10;
                temp2 += temp1 % 10;
                temp1 /= 10;
            }
            m[j++].right = temp2;
        }
        sort(m,m+j,cmp);
        for (size_t i = 0; i < j; i++) {
            printf("%d ", m[i].left);
        }
        printf("\n");
    }
}
