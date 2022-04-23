#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>


//char* reverse_string(char arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		char tmp = 0;
//		tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	return arr;
//}
//
//
//int my_strlen(char* str)
//{
//	if (*str != '\0')
//	{
//		return 1 + my_strlen(str + 1);
//	}
//	return 0;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int sz = my_strlen(arr);
//	char* p = reverse_string(arr, sz);
//	printf(p);
//	return 0;
//}


int main()
{
    int x = 4;
    int count = 1;
    while ((x & 1) != 1)
    {
        x >>= 1;
        count++;
    }
    printf("%d", count);
	return 0;
}