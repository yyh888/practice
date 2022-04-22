#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//    int n = 0;
//    scanf("%d", &n);
//    int arr[1001] = { 0 };
//    int i = 0;
//    for (i = 0; i < n; i++)
//    {
//        int tmp = 0;
//        scanf("%d", &tmp);
//        arr[tmp] = tmp;
//    }
//    for (i = 0; i < 1001; i++)
//    {
//        if (arr[i] != 0)
//        {
//            printf("%d ", arr[i]);
//        }
//    }
//    return 0;
//}


//int Fac1(int n)
//{
//	if (n <= 2)
//	{
//		return n;
//	}
//	else
//	{
//		return n * Fac1(n - 1);
//	}
//}
//
//int Fac2(int n)
//{
//	int sum = 1;
//	while (n)
//	{
//		sum *= n;
//		n--;
//	}
//	return sum;
//}
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int ret1 = Fac1(n);
//	int ret2 = Fac2(n);
//	printf("%d %d", ret1, ret2);
//	return 0;
//}

//char* Rever(char* arr[])
//{
//
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	char* p = Rever(arr);
//	return 0;
//}


//int DigitSum(int n)
//{
//	if (n > 10)
//	{
//		return n % 10 + DigitSum(n / 10);
//	}
//	return n;
//}
//
//int main()
//{
//	int n = 1729;
//	int ret = DigitSum(n);
//	printf("%d", ret);
//	return 0;
//}


//int my_pow(int n, int k)
//{
//	if (k > 0)
//	{
//		return n * my_pow(n, k - 1);
//	}
//	return 1;
//}
//
//int main()
//{
//	int n = 0;
//	int k = 0;
//	scanf("%d %d", &n, &k);
//	int ret = my_pow(n, k);
//	printf("%d", ret);
//	return 0;
//}


int Fib(int n)
{
	if (n <= 2)
	{
		return 1;
	}
	else
	{
		return Fib(n - 1) + Fib(n - 2);
	}
}

int unFib(int n)
{
	int a = 1;
	int b = 1;
	int c = 1;
	while(n > 2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	int ret = Fib(n);
	int tmp = unFib(n);
	printf("%d %d", ret, tmp);
	return 0;
}