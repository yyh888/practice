#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

//д���뽫�������������Ӵ�С�����
//���磺
//���룺2 3 1
//�����3 2 1


//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d %d %d", &a, &b, &c);
//	int arr[3] = { a, b, c };
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 2 - i; j++)
//		{
//			int tmp = 0;
//			if (arr[i] > arr[i + 1])
//			{
//				tmp = arr[i];
//				arr[i] = arr[i + 1];
//				arr[i + 1] = tmp;
//			}
//		}
//	}
//	printf("%d %d %d", arr[2], arr[1], arr[0]);
//	return 0;
//}

//дһ�������ӡ1 - 100֮������3�ı���������
//int main()
//{
//	int i = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if ((i % 3) == 0)
//		{
//			printf("%d ", i);
//		}
//	}
//	return 0;
//}



//���������������������������Լ��
//���磺
//���룺20 40
//�����20

//int main()
//{
//	int a = 0;
//	int b = 0;
//	scanf("%d %d", &a, &b);
//	if ((a / b == 0) || (b / a) == 0)
//	{
//		int c = a < b ? a : b;
//		printf("%d", c);
//	}
//	else
//	{
//		
//	}
//	return 0;
//}




//��ӡ1000�굽2000��֮�������
//int main()
//{
//	int year = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if (((year % 4) == 0 && (year % 100) != 0) ||
//			(((year % 400) == 0) && (year % 100) == 0))
//			printf("%d ", year);
//	}
//	return 0;
//}



//дһ�����룺��ӡ100~200֮�������

int main()
{
	//�Գ���
	int i = 0;
	for (i = 100; i <= 200; i++)
	{
		int ret = i;
		while (--ret)
		{
			if ((i / ret) == 0)
			{
				break;
			}
		}
		if (ret != 1)
		{
			printf("%d ", i);
		}
	}
	return 0;
}