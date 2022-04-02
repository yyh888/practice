#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		//n > 2时继续调用Fib函数
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//
//int main()
//{
//	int n = 0;
//	//求第n个斐波那契数
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//


//int strlen(const char* str)
//{
//	//判断不为空指针
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);
//}
//
//int main()
//{
//	//常量字符串
//	const char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//	return 0;
//}


//void print(int n)
//{
//	if (n >= 10)
//	{
//		//取出高位
//		print(n / 10);
//	}
//	//打印剩下的个位
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//移动步骤函数
void move(char x, char y)
{
	int static count = 0;
	count++;
	printf("第%d步, %c -> %c\n", count, x, y);
}

void hannoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		//把A上面圆盘的通过C移动到B
		hannoi(n - 1, a, c, b);
		//最底下的移到C
		move(a, c);
		//把B上面的圆盘通过A移动到C
		hannoi(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	//a，b，c代表三根柱子 
	hannoi(n, 'a', 'b', 'c');
	return 0;
}