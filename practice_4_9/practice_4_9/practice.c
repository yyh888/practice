#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



//逆序输出
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	while (n)
//	{
//		printf("%d", n % 10);
//		n /= 10;
//	}
//	return 0;
//}



//int main()
//{
//    printf("%c%c%c%c%c%c%c%c%c%c%c%c",
//        73, 32, 99, 97, 110, 32, 100, 111, 32, 105, 116, 33);
//        return 0;
//}


//int main()
//{
//    printf("\n%d", printf("Hello world!"));
//    return 0;
//}


//int main()
//{
//
//	return 0;
//}


////A ->a , B-> b
//int main()
//{
//    char a = 0;
//    while ((a = getchar()) != EOF)
//    {
//        putchar(a + 32);
//        getchar();
//        printf("\n");
//    }
//    return 0;
//}



//int main()
//{
//    char a = 0;
//    scanf("%c", &a);
//    int i = 0;
//    int j = 0;
//    for (i = 0; i < 5; i++)
//    {
//        //第一行
//        //空格
//        for (j = 0; j < 4 - i; j++)
//        {
//            printf(" ");
//        }
//        //打印字符
//        for (j = 0; j < 2 * i + 1; j++)
//        {
//            if ((j % 2) == 0)
//            {
//                printf("%c", a);
//            }
//            else
//            {
//                printf(" ");
//            }
//        }
//        printf("\n");
//    }
//    return 0;
//}


//int main()
//{
//    int num = 1;
//    int n = 0;
//    scanf("%d", &n);
//    num = n << num;
//    printf("%d", num);
//}

int main()
{
    int n = 0;
    while ((scanf("%d", &n)) != EOF)
    {
        printf("%d\n", 1 << n);
    }
    return 0;
}