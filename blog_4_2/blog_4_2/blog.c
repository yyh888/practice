#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<assert.h>
#include<stdlib.h>
//int Fib(int n)
//{
//	if (n <= 2)
//		return 1;
//	else
//		//n > 2ʱ��������Fib����
//		return Fib(n - 1) + Fib(n - 2);
//}
//
//
//int main()
//{
//	int n = 0;
//	//���n��쳲�������
//	scanf("%d", &n);
//	int ret = Fib(n);
//	printf("%d", ret);
//	return 0;
//


//int strlen(const char* str)
//{
//	//�жϲ�Ϊ��ָ��
//	assert(str);
//	if (*str == '\0')
//		return 0;
//	else
//		return 1 + strlen(str + 1);
//}
//
//int main()
//{
//	//�����ַ���
//	const char* p = "abcdef";
//	int len = strlen(p);
//	printf("%d", len);
//	return 0;
//}


//void print(int n)
//{
//	if (n >= 10)
//	{
//		//ȡ����λ
//		print(n / 10);
//	}
//	//��ӡʣ�µĸ�λ
//	printf("%d ", n % 10);
//}
//
//int main()
//{
//	int num = 1234;
//	print(num);
//	return 0;
//}

//�ƶ����躯��
void move(char x, char y)
{
	int static count = 0;
	count++;
	printf("��%d��, %c -> %c\n", count, x, y);
}

void hannoi(int n, char a, char b, char c)
{
	if (n == 1)
		move(a, c);
	else
	{
		//��A����Բ�̵�ͨ��C�ƶ���B
		hannoi(n - 1, a, c, b);
		//����µ��Ƶ�C
		move(a, c);
		//��B�����Բ��ͨ��A�ƶ���C
		hannoi(n - 1, b, a, c);
	}
}

int main()
{
	int n = 0;
	scanf("%d", &n);
	//a��b��c������������ 
	hannoi(n, 'a', 'b', 'c');
	return 0;
}