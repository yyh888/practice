#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
int cmp(int x, int y)
{
	if (x < y)
	{
		return y;
	}
	else
	{
		return x;
	}
}

int main()
{
	int a = 0;
	int b = 0;
	//����������
	scanf("%d %d", &a, &b);
	//���ν�cmp��������big����
	int big = cmp(a, b);
	printf("big = %d", big);
	return 0;
}