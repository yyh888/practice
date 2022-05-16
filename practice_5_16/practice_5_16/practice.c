#include <stdio.h>
#include<assert.h>
//int main()
//{
//    int i = 0;
//    int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//    for (i = 0; i <= 12; i++)
//    {
//        arr[i] = 0;
//        printf("hello bit\n");
//    }
//    return 0;
//}


//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str)
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//
//int main()
//{
//	char ch[] = "abcdefg";
//	printf("%d", my_strlen(ch));
//	return 0;
//}





//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest && src);
//	char* tmp = dest;
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return tmp;
//}
//
//int main()
//{
//	char ch[10] = { 0 };
//	char* str = "abcdef";
//	my_strcpy(ch, str);
//	printf("%s", ch);
//	return 0;
//}




void my_sort(int* p, int sz)
{
	int* tail = &(p[sz - 1]);
	while (p < tail)
	{
		if (*p % 2 == 0 && *tail % 2 != 0)
		{
			int tmp = *p;
			*p = *tail;
			*tail = tmp;
			p++;
			tail--;
		}
		if (*p % 2 != 0 && *tail % 2 == 0)
		{
			p++;
			tail--;
		}
		if (*p % 2 == 0 && *tail % 2 == 0)
		{
			tail--;
		}
		if (*p % 2 != 0 && *tail % 2 != 0)
		{
			p++;
		}
	}
}


int main()
{
	int arr[] = { 1, 7, 8, 9, 5, 4, 3, 6 , 11, 15, 16, 2, 4};
	int sz = sizeof(arr) / sizeof(arr[0]);
	my_sort(arr, sz);
	for (int i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}