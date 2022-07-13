#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
#include<string.h>
#include<math.h>
//int FindOne(int arr[], int sz)
//{
//	int ret = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		ret ^= arr[i];
//	}
//	return ret;
//}
//
//
//int main()
//{
//	int arr[] = { 1, 1, 2, 3, 3, 4, 4 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = FindOne(arr, sz);
//	printf("%d", ret);
//	return 0;
//}



//void my_strncpy(char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	while ((*str1++ = *str2++) && count--)
//	{
//		;
//	}
//}
//
//int main()
//{
//	char str1[10] = { "ssssss" };
//	char* str2 = "abcdef";
//	my_strncpy(str1, str2, 2);
//	printf(str1);
//	return 0;
//}

//void my_strncat(char* str1, const char* str2, int count)
//{
//	assert(str1 && str2);
//	while (*str1)
//	{
//		str1++;
//	}
//	while (count--)
//	{
//		*str1++ = *str2++;
//	}
//}
//
//int main()
//{
//	char str1[10] = { "ssssss" };
//	char* str2 = "abcdef";
//	my_strncat(str1, str2, 3);
//	printf(str1);
//	return 0;
//}



//int main()
//{
//	char* str = "aaaaa";
//	double d = atoi(str);
//	printf("%lf", d);
//	return 0;
//}

double my_atoi(char* str)
{
	int sz = strlen(str);
	double sum = 0.0;
	while (*str != '\0')
	{
		sum += ((int)(*str) - 48) * pow(10, sz - 1);
		sz--;
		str++;
	}
}

int main()
{
	char* str = "11111";
	double d = my_atoi(str);
	printf("%lf", d);
	return 0;
}