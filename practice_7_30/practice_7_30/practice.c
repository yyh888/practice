#include<stdio.h>

int Sum_Solution(int n)
{
	if (n == 1)
	{
		return 1;
	}
	return n + Sum_Solution(n - 1);
}


int NumberOf1(int n) {
	int count = 0;
	int i = 0;
	for (i = 0; i < 32; i++)
	{
		if ((n >> i) & 1 == 1)
			count++;
	}
	return count;
}

int Sum_Solution(int n) {
	// write code here
	n && (n += Sum_Solution(n - 1));
	return n;
}


int main()
{
	int n = 6;
	int sum = Sum_Solution(n);
	printf("%d", sum);
	return 0;
}