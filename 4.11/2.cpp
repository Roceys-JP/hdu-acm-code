/*
题目描述
 输入一个正整数，输出该数的数根。数根可以通过把一个数的各个位上的数字加起来得到。如果得到的数是一位数，那么这个数就是数根。如果结果是两位数或者包括更多位的数字，那么再把这些数字加起来。如此进行下去，直到得到是一位数为止。比如，对于24来说，把2和4相加得到6，由于6是一位数，因此6是24的数根。再比如39，把3和9加起来得到12，由于12不是一位数，因此还得把1和2加起来，最后得到3，这是一个一位数，因此3是39的数根。 
 要求使用函数，定义函数digitSum(int n)求n的各位数字和，其余功能在main()函数中实现。 
 int digitSum(int n) 
 { 
 //函数返回n的各位数字之和 
 } 

 输入
 输入一个int范围内的正整数n

 输出
  输出n的数根

  样例输入
  39
  样例输出
  3
*/
#include<stdio.h>
int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        while(n>9)
        {   
            int sum = 0;
            while(n)
            {   
                sum += n%10;
                n /= 10;
            }
            n = sum;
        }
        printf("%d\n",n);
    }
}
