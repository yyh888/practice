#include<stdio.h>
#include<string.h>
#include<stdbool.h>

//void reverse(char str[], int head, int tail)
//{
//	while (head < tail)
//	{
//		char tmp = str[head];
//		str[head] = str[tail];
//		str[tail] = tmp;
//		head++;
//		tail--;
//	}
//}
//
//
//int main()
//{
//	char str[] = "ABCDEFG";
//	int k = 2;
//	int sz = strlen(str);
//	reverse(str, sz - k, sz - 1);
//	reverse(str, 0, sz - k - 1);
//	reverse(str, 0, sz - 1);
//	printf(str);
//	return 0;
//}



bool search(int(*a)[5], int k)
{
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			if (a[i][j] == k)
			{
				return true;
			}
		}
	}
	return false;
}


int main()
{
	int arr[][5] = { {1, 2, 3, 4, 5},
					{6, 7, 8, 9, 10},
					{11, 12, 13, 14, 15} };
	if (search(arr, 5))
	{
		printf("yes");
	}
	else
	{
		printf("fail");
	}
	return 0;
}