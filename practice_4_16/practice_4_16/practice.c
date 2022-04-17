#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
//int main()
//{
//	int arr[11] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11 };
//	int k = 12;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] == k)
//		{
//			printf("找到了，下标是：%d", mid);
//			return 0;
//		}
//		else if (arr[mid] < k)
//		{
//			left = mid + 1;
//		}
//		else if (arr[mid > k])
//		{
//			right = mid - 1;
//		}
//	}
//	printf("没找到\n");
//	return 0;
//}

void game()
{
	int k = rand() % 100;
	int num = 0;
		printf("请输入一个0~99的数:\n");
		int n = 5;
		while (n--)
		{
			printf("答案：%d\n", k);
			scanf("%d", &num);
			if (num < k)
			{
				if (n > 0)
				{
					printf("小了,请重新输入，还有%d次机会\n", n);
				}
				else
					break;
			}
			else if (num > k)
			{
				if (n > 0)
				{
					printf("大了,请重新输入，还有%d次机会\n", n);
				}
				else
					break;
			}
			else
			{
				printf("找到了\n");
				break;
			}
		}
		if (n == 0)
			printf("失败了\n");
}


int main()
{
	srand((unsigned)time(NULL));
	while (1)
	{
		game();
	}
	return 0;
}


//int main()
//{
//	int n = 10;
//	int i = 0;
//	int sum = 0;
//	int ret = 1;
//	for (n = 1; n <= 3; n++)
//	{
//	/*	int ret = 1;
//		for (i = 1; i <= n; i++)
//		{
//			ret *= i;
//		}
//		sum = sum + ret;*/
//		ret *= n;
//		sum += ret;
//	}
//	printf("%d", sum);
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int i = 0;
//        int j = 0;
//        for (i = 0; i < n; i++)
//        {
//            for (j = 0; j < n; j++)
//            {  
//              if (i == 0 || i == n - 1 || j == 0 || j == n - 1)
//                {
//                    printf("* ");
//                }
//                else
//                {
//                    printf("  ");
//                }
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}


//int main()
//{
//	int i = 0;
//	int s = 0;
//	int num = 0;
//	for (i = 0; i < 5; i++)
//	{
//		scanf("%d", &s);
//		num += s;
//	}
//	printf("%d\n", num);
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[51] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        scanf("%d", &arr[i]);
//    }
//
//    int a = 0;
//    scanf("%d", &a);
//    for (i = n - 1; i >= 0; i--)
//    {
//        if (arr[i] > a)
//        {
//            arr[i + 1] = arr[i];
//        }
//        else
//        {
//            arr[i + 1] = a;
//            break;
//        }
//    }
//
//    if (i < 0)
//    {
//        arr[0] = a;
//    }
//
//    for (i = 0; i < n + 1; i++)
//    {
//        printf("%d ", arr[i]);
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    while (scanf("%d", &n) != EOF)
//    {
//        int arr[101] = { 0 };
//        int i = 0;
//        for (i = 2; i <= n; i++)
//        {
//            arr[i] = i;
//        }
//
//        //判断素数
//        int j = 0;
//        for (j = 2; j <= n; j++)
//        {
//            int k = 0;
//            for (k = j + 1; k <= n; k++)
//            {
//                if (arr[k] % j == 0)
//                {
//                    arr[k] = 0;
//                }
//            }
//        }
//
//        int count = 0;
//        for (i = 2; i <= n; i++)
//        {
//            if (arr[i] != 0)
//            {
//                printf("%d ", arr[i]);
//            }
//            else
//            {
//                count++;
//            }
//        }
//        printf("\n%d\n", count);
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int odd = 0;
//    int eve = 0;
//    int i = 0;
//    for (i = 1; i <= n; i++)
//    {
//        if (i % 2 == 0)
//        {
//            eve++;
//        }
//    }
//    printf("%d %d", n - eve, eve);
//    return 0;
//}

//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    if (n % 2 == 0)
//    {
//        printf("%d %d", n / 2, n / 2);
//    }
//    else
//    {
//        printf("%d %d", n / 2 + 1, n / 2);
//    }
//    return 0;
//}


