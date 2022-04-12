#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//写代码将三个整数数按从大到小输出。
//例如：
//输入：2 3 1
//输出：3 2 1


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int arr[3] = { a, b, c };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	printf("%d %d %d", arr[2], arr[1], arr[0]);
//	return 0;
//}

//写一个代码打印1 - 100之间所有3的倍数的数字
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if ((a / b == 0) || (b / a) == 0)
//	{
//		int c = a < b ? a : b;
//		printf("%d", c);
//	}
//	else
//	{
//		
//	}
//	return 0;
//}




//打印1000年到2000年之间的闰年
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4) == 0 && (year % 100) != 0) ||
//			(((year % 400) == 0) && (year % 100) == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}



//写一个代码：打印100~200之间的素数

int main()
{
	//试除法
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int ret = i;
		while (--ret)
		{
			if ((i / ret) == 0)
			{
				break;
			}
		}
		if (ret != 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}