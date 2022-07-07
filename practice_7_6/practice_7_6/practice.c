#include<stdio.h>
#include<string.h>
#include<assert.h>
//int main()
//{
//	const char* str = "abcdef";
//	str++;
//	char* const a = "ava";
//	a++;
//	return 0;
//}


//int my_strcmp(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	while (*str1 == *str2 && *str1 != 0)
//	{
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//
//int main()
//{
//	const char* str1 = "abddef";
//	const char* str2 = "abcdef";
//	int ret = my_strcmp(str1, str2);
//	if (ret < 0)
//	{
//		printf("<");
//	}
//	else if (ret > 0)
//	{
//		printf(">");
//	}
//	else
//	{
//		printf("=");
//	}
//	return 0;
//}



//char* my_strstr(const char* str1, const char* str2)
//{
//	assert(str1 && str2);
//	const char* p = str1;
//	const char* p1 = str1;
//	const char* p2 = str2;
//	while (*p)
//	{
//		p1 = p;
//		p2 = str2;
//		while (*p1 && *p1 == *p2)
//		{
//			p1++;
//			p2++;
//		}
//		if (*p2 == 0)
//		{
//			return p;
//		}
//		p++;
//	}
//	return NULL;
//}
//
//
//int main()
//{
//	const char* str1 = "bbbcdef";
//	const char* str2 = "bbbcdef";
//	char* p = my_strstr(str1, str2);
//	if (p)
//	{
//		printf("YES");
//	}
//	else
//	{
//		printf("NO");
//	}
//	return 0;
//}


void* my_memcpy(const void* dest, const void* src, size_t count)
{
	assert(dest && src);
	char* p1 = (char*)dest;
	char* p2 = (char*)src;
	while (count--)
	{
		*p1++ = *p2++;
	}
	return p1;
}
//
//
//int main()
//{
//	int a[] = { 1, 2, 3, 4, 5 };
//	int b[] = { 6, 7, 8 };
//	my_memcpy(a, b, 12);
//	return 0;
//}



void* my_memmove(const void* dest, const void* src, size_t count)
{
	assert(dest && src);
	char* p1 = (char*)dest + count - 1;
	char* p2 = (char*)src + count - 1;
	while (count--)
	{
		*p1-- = *p2--;
	}
	return dest;
}


int main()
{
	int a[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	my_memmove(a + 2, a, 20);
	return 0;
}