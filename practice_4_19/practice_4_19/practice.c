#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
//int main()
//{
//    int i = 0;
//    double arr[5][6] = { 0 };
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &arr[i][j]);
//        }
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            arr[i][5] += arr[i][j];
//        }
//    }
//
//    for (i = 0; i < 5; i++)
//    {
//        int j = 0;
//        for (j = 0; i < 6; j++)
//        {
//            printf("%.1lf ", arr[i][j]);
//        }
//    }
//    return 0;
//}


//int main()
//{
//    int i = 0;
//    //五个学生
//    for (i = 0; i < 5; i++)
//    {
//        double n = 0.0;
//        double sum = 0.0;
//        int j = 0;
//        for (j = 0; j < 5; j++)
//        {
//            scanf("%lf", &n);
//            sum += n;
//            printf("%.1lf ", n);
//        }
//        printf("%.1lf ", sum);
//        printf("\n");
//    }
//    return 0;
//}



//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int arr[n + 1][m + 1];
//    int i = 1;
//    int j = 1;
//    for (i = 1; i < n + 1; i++)
//    {
//        for (j = 1; j < m + 1; j++)
//        {
//            scanf("%d", &arr[i][j]);
//        }
//    }
//    int k = 0;
//    int l = 0;
//    scanf("%d %d", &k, &l);
//    printf("%d", arr[k][l]);
//    return 0;
//}

//int is_prime(int n)
//{
//	int i = 0;
//	for (i = 2; i <= sqrt(n); i++)
//	{
//		if (n % i == 0)
//		{
//			return 0;
//		}
//	}
//	return 1;
//}
//
//
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int ret = is_prime(i);
//		if (1 == ret)
//		{
//			printf("%d ", i);
//			count++;
//		}
//	}
//	printf("\n%d", count);
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if (((n % 4 == 0) && (n % 100 != 0)) || n % 400 == 0)
//	{
//		return 1;
//	}
//	return 0;
//}
//
//int main()
//{
//	int year = 0;
//	while (~scanf("%d", &year))
//	{
//		if (is_leap_year(year))
//		{
//			printf("是闰年\n\n");
//		}
//		else
//		{
//			printf("不是闰年\n\n");
//		}
//
//	}
//	return 0;
//}


//int main()
//{
//    int n = 0;
//    int m = 0;
//    scanf("%d %d", &n, &m);
//    int max = 0;
//    int x = 0;
//    int y = 0;
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < n; i++)
//    {
//        for (j = 0; j < m; j++)
//        {
//            int tmp = 0;
//            scanf("%d", &tmp);
//            if (tmp > max)
//            {
//                x = i;
//                y = j;
//                max = tmp;
//            }
//        }
//    }
//    printf("%d %d", x + 1, y + 1);
//    return 0;
//}



int main()
{
	char t = 0;
	int b = 0;
	int c = 0;
	scanf("%c %d %d", &t, &b, &c);
	return 0;
}