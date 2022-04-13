#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>

//给定两个数，求这两个数的最大公约数
//例如：
//输入：20 40
//输出：20

//int main()
//{
//    //辗转相除
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	int tmp = 0;
//	if (a < b)
//	{
//		tmp = a;
//		a = b;
//		b = tmp;
//	}
//	int c = 0;
//	while (a % b)
//	{
//		c = a % b;
//		a = b;
//		b = c;
//	}
//	printf("%d", b);
//	return 0;
//}




//写一个代码：打印100~200之间的素数

//int main()
//{
//	//试除法
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int tmp = i - 1;
//		while (tmp > 1)
//		{
//			if (i % tmp == 0)
//			{
//				tmp = -1;
//			}
//			tmp--;
//		}
//		if (tmp == 1)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}




//轮转数组
//void rotate(int* nums, int numsSize, int k) {
//    while (k--)
//    {
//        int tmp = 0;
//        tmp = nums[numsSize - 1];
//        int i = 0;
//        for (i = 0; i < numsSize - 1; i++)
//        {
//            nums[numsSize - 1 - i] = nums[numsSize - 2 - i];
//        }
//        nums[0] = tmp;
//    }
//}

//三科平均值
//int main()
//{
//    double a = 0;
//    double b = 0;
//    double c = 0;
//    scanf("%lf %lf %lf", &a, &b, &c);
//    double sum = a + b + c;
//    double aver = sum / 3.0;
//    printf("%.2lf %.2lf", sum, aver);
//    return 0;
//}

//喝酸奶
//int main()
//{
//    int n = 0;
//    int h = 0;
//    int m = 0;
//    while (scanf("%d %d %d" ,&n, &h, &m) != EOF)
//    {
//        if (m % h)
//        {
//            printf("%d", n - m / h - 1);
//        }
//        else
//        {
//            printf("%d", n - m / h);
//        }
//    }
//    return 0;
//}

//网购
//int main()
//{
//    double val = 0.0;
//    int month = 0;
//    int day = 0;
//    int ticket = 0;
//    scanf("%lf %d %d %d", &val, &month, &day, &ticket);
//    if (11 == month)
//    {
//        if (1 == ticket)
//        {
//            if ((val * 0.7 - 50) > 0)
//            {
//                printf("%.2lf", val * 0.7 - 50);
//            }
//            else
//            {
//                printf("%.2lf", 0.00);
//            }
//        }
//        else
//        {
//            printf("%.2lf", val * 0.7);
//        }
//    }
//    else
//    {
//        if (1 == ticket)
//        {
//            if ((val * 0.8 - 50) > 0)
//            {
//                printf("%.2lf", val * 0.8 - 50);
//            }
//            else
//            {
//                printf("%.2lf", 0.00);
//            }
//        }
//        else
//        {
//            printf("%.2lf", val * 0.8);
//        }
//    }
//    return 0;
//}


//前五名
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    int j = 0;
//    for (j = 0; j < n; j++)
//    {
//        for (i = 0; i < n - 1 - j; i++)
//        {
//            if (arr[i] < arr[i + 1])
//            {
//                int tmp = 0;
//                tmp = arr[i];
//                arr[i] = arr[i + 1];
//                arr[i + 1] = tmp;
//            }
//        }
//    }
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}

//qsort方法
//void qsort(void* base, 
	//size_t num, 
	//size_t width, 
	//int(__cdecl* compare)(const void* elem1, const void* elem2));

//int cmp_int(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[50];
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//    qsort(arr, n, n * sizeof(int), cmp_int);
//    for (i = 0; i < 5; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}


