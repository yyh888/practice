#include <stdio.h>

void AdjustDown(int* a, int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child] < a[child + 1])
		{
			child++;
		}

		if (a[child] > a[parent])
		{
			int tmp = a[child];
			a[child] = a[parent];
			a[parent] = tmp;
			parent = child;
			child = 2 * parent + 1;
		}
		else
		{
			break;
		}
	}
}


void HeapSort(int* a, int n)
{
	//ÅÅÉýÐò£¬½¨´ó¶Ñ
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	for (int i = n - 1; i > 0; i--)
	{
		int tmp = a[i];
		a[i] = a[0];
		a[0] = tmp;
		AdjustDown(a, i, 0);
	}
	/*int end = n - 1;
	while (end)
	{
		int tmp = a[end];
		a[end] = a[0];
		a[0] = tmp;
		AdjustDown(a, end, 0);
		end--;
	}*/
}


int main()
{
	int a[] = { 3, 5, 1, 2, 4 };
	HeapSort(a, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}