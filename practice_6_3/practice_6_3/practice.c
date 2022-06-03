#include<stdio.h>
#include<stdbool.h>
#include<string.h>
#include<stdlib.h>

//void reversal(char* a, int k)
//{
//	char tmp = a[0];
//	for (int i = 0; i < k - 1; i++)
//	{
//		a[i] = a[i + 1];
//	}
//	a[k - 1] = tmp;
//}
//
//
//
//
//int main()
//{
//	char str[] = "ABCDEF";
//	char src[] = "EFABCD";
//	int sz = strlen(str);
//	int flag = 0;
//	for (int i = 0; i < sz; i++)
//	{
//		reversal(src, sz);
//		if (strcmp(src, str) == 0)
//		{
//			flag = 1;
//		}
//	}
//	if (flag)
//	{
//		printf("true\n");
//	}
//	else
//	{
//		printf("fail\n");
//	}
//	return 0;
//}

//struct Stu
//{
//	char name[20];
//	int age;
//};
//
//int my_cmp(const void* e1, const void* e2)
//{
//	return *(char*)e1 - *(char*)e2;
//}
//
//int my_cmp2(const void* e1, const void* e2)
//{
//	return ((struct Stu*)e1)->age - ((struct Stu*)e2)->age;
//}
//
//
//
//
//int main()
//{
//	char a[] = { 'a', 'b', 'd', 'c'};
//	int sz = sizeof(a) / sizeof(a[0]);
//    struct Stu s[3] = { {"张三", 10}, {"王五", 20}, {"李四", 15} };	
//	int Ssz = sizeof(s) / sizeof(s[0]);
//    qsort(a, sz, sizeof(char), my_cmp);
//	qsort(s, Ssz, sizeof(struct Stu), my_cmp2);
//	for (int i = 0; i < sz; i++)
//	{
//		printf("%c ", a[i]);
//	}
//	return 0;
//}


int cmp(const void* e1, const void* e2)
{
	return *(int*)e1 - *(int*)e2;
}


void Swap(char* a, char* b, int width)
{
	for (int i = 0; i < width; i++)
	{
		char tmp = *a;
		*a = *b;
		*b = tmp;
		a++;
		b++;
	}
}



void my_bubble(void* base, int size, int width, int(*cmp)(const void* e1, const void* e2))
{
	int i = 0;
	for (i = 0; i < size - 1; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (cmp((char*)base + j * width, (char*)base + (j + 1) * width) > 0)
			{
				Swap((char*)base + j * width, (char*)base + (j + 1) * width, width);
				flag = 0;
			}
			if (flag)
			{
				break;
			}
		}
	}
}



int main()
{
	int a[] = { 7, 6, 5, 4, 3, 8, 9 };
	int sz = sizeof(a) / sizeof(a[0]);
	my_bubble(a, sz, sizeof(int), cmp);
	return 0;
}