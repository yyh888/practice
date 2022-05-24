#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr[100][100] = { 0 };
//	int i = 0;
//	int j = 0;
//	// 1
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (j == 0 || i == j)
//			{
//				arr[i][j] = 1;
//			}
//		}
//	}
//	
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i > 0 && j > 0)
//			{
//				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
//			}
//		}
//	}
//
//	for (i = 0; i < n; i++)
//	{
//		for (j = 0; j < n; j++)
//		{
//			if (i >= j)
//			{
//				printf("%d ", arr[i][j]);
//			}
//		}
//		printf("\n");
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0, e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if (((b == 2) + (a == 3) == 1) &&
//							((b == 2) + (e == 4) == 1) &&
//							((c == 1) + (d == 2) == 1) &&
//							((c == 5) + (d == 3) == 1) &&
//							((e == 4) + (a == 1) == 1))
//						{
//							if(a*b*c*d*e == 120)
//							printf("a = %d, b = %d, c = %d, d = %d, e = %d", a, b, c, d, e);
//						}
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}


//int main()
//{
//	int a = 0, b = 0, c = 0, d = 0;
//	for (a = 0; a < 2; a++)
//	{
//		for (b = 0; b < 2; b++)
//		{
//			for (c = 0; c < 2; c++)
//			{
//				for (d = 0; d < 2; d++)
//				{
//					if (((a == 0) + (c == 1) + (d == 1) + (d == 0)) == 3
//						&& a + b + c + d == 1)
//						if (a != 0)
//						{
//							printf("a");
//						}
//						else if(b != 0)
//						{
//							printf("b");
//						}
//						else if (c != 0)
//						{
//							printf("c");
//						}
//						else
//						{
//							printf("d");
//						}
//				}
//			}
//		}
//	}
//	return 0;
//}



//int main()
//{
//	char a = -1;
//	signed char b = -1;
//	unsigned char c = -1;
//	printf("a = %d, b = %d, c = %d", a, b, c);
//	return 0;
//}


//int main()
//{
//	char a = -128;
//	char b = 128;
//	printf("%u\n", a);
//	printf("%u\n", b);
//	return 0;
//}



int main()
{
	int i = -20;
	unsigned int j = 10;
	printf("%d\n", i + j);
	return 0;
}