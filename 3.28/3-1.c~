
#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j;
	int temp_e, temp_s;
	int time, count ;
	int Ti_s[110], Ti_e[110] ;
    while (scanf("%d", &n) != EOF && n != 0)
    {
		// 输入节目表，并分别将开始和结束时间存入对应数组
		for (i = 0; i<n; i++)
		{
			scanf("%d%d", &Ti_s[i], &Ti_e[i]) ;
		}

		// 将时间表按照结束时间的先后顺序排序
		for (i=0; i<n; i++)
			for (j=i+1; j<n; j++)
			{
				if (Ti_e[i] > Ti_e[j])
				{
					temp_e = Ti_e[j] ;
					Ti_e[j] = Ti_e[i] ;
					Ti_e[i] =temp_e ;
					
					temp_s = Ti_s[j];
					Ti_s[j] = Ti_s[i] ;
					Ti_s[i] = temp_s ;
					
				}
			}
			
			// 贪心算法主要实现部分，一步一步的向后选择
			// 下一个的开始时间必须要小于等于上个节目的结束时间
			time = 0;
			count = 0;
			for (i=0; i<n; i++)
			{
				if (Ti_s[i] >= time)
				{
					count++ ;         // 计数器
					time = Ti_e[i] ;
				}
			}
			printf("%d\n", count) ;  // 输出即可
    }
	
	return 0 ;
}


