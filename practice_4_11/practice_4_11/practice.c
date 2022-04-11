#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>


//变种水仙花
//int search(int x)
//{
//    int i = 1;
//    int tmp = 0;
//    int p = 0;
//    for (; i < 5; i++)
//    {
//        p = pow(10, i);
//        tmp += (x % p) * (x / p);
//    }
//    if (tmp == x)
//    {
//        return x;
//    }
//    return 0;
//}
//
//
//int main()
//{
//    int i = 10000;
//    for (; i <= 99999; i++)
//    {
//        int ret = search(i);
//        if (ret != 0)
//            printf("%d ", ret);
//    }
//}

//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 10000; i <= 99999; i++)
//	{
//		//判断谁否为Lily数
//		for (j = 10; j <= 10000; j *= 10)
//		{
//			sum += (i % j) * (i / j);
//		}
	/*	if (sum == i)
			printf("%d ", i);
	}
	return 0;
}*/


//int main()
//{
//    int a = 0;
//    int b = 0;
//    int sum = 0;
//    scanf("%d %d", &a, &b);
//    sum = a + b;
//    if (sum < 100)
//    {
//        printf("%d", sum);
//    }
//    else
//    {
//        int tmp = sum % 100;
//        printf("%d", tmp);
//    }
//    return 0;
//}


//int main()
//{
//	double a = 0;
//	scanf("%lf", &a);
//	int c = (int)a;
//	printf("%d", c % 10);
//	return 0;
//}


