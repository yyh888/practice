#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>



int main()
{
	int bottle = 20;
	int sum = bottle;
	int empty = bottle;
	while (empty > 1)
	{
		int next = 0;
		if (empty % 2 == 1)
		{
			next++;
		}
		bottle = empty / 2;
		sum += bottle;
		empty = bottle + next;
	}
	printf("%d", sum);
	return 0;
}