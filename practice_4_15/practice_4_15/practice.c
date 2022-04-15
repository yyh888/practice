#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//计算器
//int main()
//{
//    char ch[4] = { '+', '-', '*', '/' };
//    double a = 0.0;
//    double b = 0.0;
//    char c = 0;
//    while (~scanf("%lf%c%lf", &a, &c, &b))
//    {
//        int i = 0;
//        int tmp = 0;
//        for (i = 0; i < 4; i++)
//        {
//            if (c == ch[i])
//                tmp = 1;
//        }
//
//        if (!tmp)
//        {
//            printf("Invalid operation!\n");
//        }
//        else
//        {
//            if (c == '/' && b == 0)
//            {
//                printf("Wrong!Division by zero!\n");
//            }
//            else
//            {
//                double sum = 0;
//                if (c == '+')
//                {
//                    sum = a + b;
//                }
//                else if (c == '-')
//                {
//                    sum = a - b;
//                }
//                else if (c == '*')
//                {
//                    sum = a * b;
//                }
//                else
//                {
//                    sum = a / b;
//                }
//                printf("%.4lf%c%.4lf=%.4lf", a, c, b, sum);
//            }
//        }
//    }
//    return 0;
//}


//int main()
//{
//	double a = 0.0;
//	double b = 0.0;
//	char op = 0;
//	while (scanf("%lf%c%lf", &a, &op, &b) != EOF)
//	{
//		switch(op)
//		{
//		case '+':
//			printf("%.4lf+%.4lf=%.4lf", a, b, a + b);
//			break;
//		case '-':
//			printf("%.4lf-%.4lf=%.4lf", a, b, a - b);
//			break;
//		case '*':
//			printf("%.4lf*%.4lf=%.4lf", a, b, a * b);
//			break;
//		case '/':
//			if (0.0 == b)
//			{
//				printf("Wrong!Division by zero!\n");
//			}
//			else
//			{
//				printf("%.4lf/%.4lf=%.4lf", a, b, a / b);
//			}
//			break;
//		default:
//			printf("Invalid operation\n");
//				break;
//		}
//	}
//	return 0;
//}


//正方形图案
//int main()
//{
//    char ch = '*';
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {
//                printf("%c ", ch);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//三角形
//int main()
//{
//    char ch = '*';
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("%c ", ch);
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//菱形
//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        //上半部分
//        for (i = 0; i < n + 1; i++)
//        {
//            //空格
//            for (j = 0; j < n - i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            for (j = 0; j < i + 1; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (i = 0; i < n; i++)
//        {
//            //空格
//            for (j = 0; j < 1 + i; j++)
//            {
//                printf(" ");
//            }
//            //*
//            for (j = 0; j < n - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        上半部分
//        for (i = 0; i < n + 1; i++)
//        {
//            for (j = 0; j < n + 1 - i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//        下半部分
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < 2 + i; j++)
//            {
//                printf("* ");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	double add = 0.0;
//	double dul = 0.0;
//	for (i = 1; i < 100; i += 2)
//	{
//		add += 1.0 / i;
//	}
//	
//	for (i = 2; i <= 100; i+= 2)
//	{
//		dul += 1.0 / i;
//	}
//
//	double sum = add - dul;
//	printf("%lf", sum);
//	return 0;
//}


//int main()
//{
//	int arr[10] = { 5, 8, 16, 50, 30, 18, 13, 78, 51, 22 };
//	int max = 0;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		if (max < arr[i])
//		{
//			max = arr[i];
//		}
//	}
//	printf("%d", max);
//	return 0;
//}


//int main()
//{
//	int i = 0;
//	int j = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		for (j = 1; j < 1 + i; j++)
//		{
//			printf("%d*%d=%2d  ", j, i, i * j);
//		}
//		printf("\n");
//	}
//	return 0;
//}


int main()
{
	int arr[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
	int k = 12;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;
	while (left < right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] == k)
		{
			printf("找到了，下标是：%d", mid);
			return 0;
		}
		else if (arr[mid] < k)
		{
			left = mid;
		}
		else if (arr[mid > k])
		{
			right = mid;
		}
	}
	printf("没找到\n");
	return 0;
}