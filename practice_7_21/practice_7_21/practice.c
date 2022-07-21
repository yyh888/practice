//#include<stdio.h>
//int fib(int n)
//{
//	if (n == 0)
//	{
//		return 0;
//	}
//	else if (n < 3)
//	{
//		return 1;
//	}
//	else
//	{
//		return fib(n - 1) + fib(n - 2);
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int i = 0;
//	while (fib(i) < n)
//	{
//		i++;
//	}
//	if (i == 0)
//	{
//		printf("%d", i);
//		return 0;
//	}
//	int add = fib(i) - n;
//	int del = n - fib(i - 1);
//	int min = add < del ? add : del;
//	printf("%d", min);
//	return 0;
//}

class Solution {
//public:
//	void replaceSpace(char* str, int length) {
//		//ÕÒ¿Õ¸ñÊý
//		int count = 0;
//		for (int i = 0; i < length; i++)
//		{
//			if (*(str + i) == ' ')
//				count++;
//		}
//		char tmp[length + count * 2 + 1];
//		int j = 0;
//		for (int i = 0; i < length; i++, j++)
//		{
//			if (*(str + i) == ' ')
//			{
//				tmp[j] = '%';
//				j++;
//				tmp[j] = '2';
//				j++;
//				tmp[j] = '0';
//			}
//			else
//