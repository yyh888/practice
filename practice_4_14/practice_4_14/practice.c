#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//int main()
//{
//    char buf[100] = { 0 };
//    gets(buf);
//    int num1 = 0;
//    int num2 = 0;
//    char* p = buf;
//    while (*p != '0')
//    {
//        if ('A' == *p)
//        {
//            num1++;
//        }
//        else
//        {
//            num2++;
//        }
//        p++;
//    }
//    if (num1 > num2)
//    {
//        printf("A");
//    }
//    else if (num1 < num2)
//    {
//        printf("B");
//    }
//    else
//    {
//        printf("E");
//    }
//    return 0;
//}


//int main()
//{
//    int ch = 0;
//    char arr[] = "AEIOUaeiou";
//    int sz = sizeof(arr) / sizeof(arr[0]);
//    while ((ch = getchar()) != EOF)
//    {
//        int i = 0;
//        int ret = 0;
//        for (i = 0; i < sz; i++)
//        {
//            if (arr[i] == ch)
//            {
//                ret = 1;
//                break;
//            }
//        }
//
//        if (1 == ret)
//        {
//            printf("Vowel\n");
//        }
//        else
//        {
//            printf("Consonant\n");
//        }
//        getchar();
//    }
//    return 0;
//}


//判断是不是字母
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if ((ch <= 'z' && ch >= 'a') || (ch <= 'Z' && ch >= 'A'))
//        {
//            printf("%c is an alphabet.\n", ch);
//        }
//        else
//        {
//            printf("%c is not an alphabet.\n", ch);
//        }
//        getchar();
//    }
//}


//字母大小写转换
//int main()
//{
//    int ch = 0;
//    while ((ch = getchar()) != EOF)
//    {
//        if (ch <= 'z' && ch >= 'a')
//        {
//            printf("%c\n", ch - 32);
//        }
//        else
//        {
//            printf("%c\n", ch + 32);
//        }
//        getchar();
//    }
//    return 0;
//}


//三角形判断
//int main()
//{
//    int a = 0;
//    int b = 0;
//    int c = 0;
//    while ((scanf("%d %d %d", &a, &b, &c)) != EOF)
//    {
//        if (a + b > c && a + c > b && b + c > a)
//        {
//            if (a == b && b == c)
//            {
//                printf("Equilateral triangle!\n");
//            }
//            else if (a != b && a != c && b != c)
//            {
//                printf("Ordinary triangle!\n");
//            }
//            else
//            {
//                printf("Isosceles triangle!\n");
//            }
//        }
//        else
//        {
//            printf("Not a triangle!\n");
//        }
//    }
// return 0;
//}





//获取月份天数
//int main()
//{
//    int year = 0;
//    int month = 0;
//    int days[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
//    while (~scanf("%d %d", &year, &month))
//    {
//        int day = days[month - 1];
//        if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
//        {
//            if (2 == month)
//            {
//                day++;
//            }
//        }
//        printf("%d\n", day);
//    }
//    return 0;
//}