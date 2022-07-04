#include<stdio.h>
#include<assert.h>
//int my_strlen(char* p)
//{
//	if (*p == '\0')
//	{
//		return 0;
//	}
//	return 1 + my_strlen(p + 1);
//}
//
//
//int main()
//{
//	const char* str = "abcdefg";
//	int sz = my_strlen(str);
//	printf("%d\n", sz);
//	return 0;
//}


//void my_strcpy(char* a, const char* b)
//{
//	assert(a && b);
//	while (*a++ = *b++)
//	{
//		;
//	}
//}
//
//
//int main()
//{
//	char a[10] = { "bcdef" };
//	char b[10] = { "aaaaa" };
//	my_strcpy(a, b);
//	printf("%s", a);
//	return 0;
//}


void my_strcat(char* a, const char* b)
{
	assert(a && b);
	//ур\0
	while (*a)
	{
		a++;
	}
	while (*a++ = *b++)
	{
		;
	}
}


int main()
{
	char a[10] = "abc";
	char* b = "def";
	my_strcat(a, b);
	printf("%s\n", a);
	return 0;
}