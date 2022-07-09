#include<stdio.h>



//#include<stdio.h>
//
//int main()
//{
//    long long n, m;
//    scanf("%lld %lld", &n, &m);
//    long long tmp = 0, x = n, y = m;
//    while (tmp = x % y)
//    {
//        x = y;
//        y = tmp;
//    }
//    //最小公倍数
//    long long z = (n * m) / y;
//    printf("%lld", y + z);
//    return 0;
//}


//#include<stdio.h>
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n; j++)
//            {
//                if (i == 0 || j == 0 || i == n - 1 || j == n - 1)
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



//#include<stdio.h>
//
//
//int main()
//{
//    int n = 0;
//    while (~scanf("%d", &n))
//    {
//        //上半部分
//        for (int i = 0; i < n + 1; i++)
//        {
//            //打印空格
//            for (int j = 0; j < 2 * n - 2 * i; j++)
//            {
//                printf(" ");
//            }
//            //打印*
//            for (int j = 0; j < i + 1; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//        //下半部分
//        for (int i = 0; i < n; i++)
//        {
//            //打印空格
//            for (int j = 0; j < 2 + 2 * i; j++)
//            {
//                printf(" ");
//            }
//            //打印*
//            for (int j = 0; j < n - i; j++)
//            {
//                printf("*");
//            }
//            printf("\n");
//        }
//    }
//    return 0;
//}



//#include<stdio.h>
//
//int main()
//{
//    int max = 0;
//    int min = 100;
//    int sum = 0;
//    int grade = 0;
//    int count = 0;
//    while (~scanf("%d", &grade))
//    {
//        count++;
//        sum += grade;
//        if (max < grade)
//        {
//            max = grade;
//        }
//        if (min > grade)
//        {
//            min = grade;
//        }
//        if (count == 7)
//        {
//            sum = sum - max - min;
//            float s = sum / 5.0;
//            printf("%.2f\n", s);
//            count = 0;
//            max = 0;
//            min = 100;
//            sum = 0;
//        }
//    }
//    return 0;
//}