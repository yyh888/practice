#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void _MergeSort(int* a, int* tmp, int begin1, int end1, int begin2, int end2)
{
	int i = begin1, j = begin1;
	while (begin1 <= end1 && begin2 <= end2)
	{
		if (a[begin1] < a[begin2])
		{
			tmp[i++] = a[begin1++];
		}
		else
		{
			tmp[i++] = a[begin2++];
		}
	}
	while (begin1 <= end1)
	{
		tmp[i++] = a[begin1++];
	}
	while (begin2 <= end2)
	{
		tmp[i++] = a[begin2++];
	}
	//拷贝回原数组
	memcpy(a + j, tmp + j, sizeof(int) * (end2 - j + 1));
	/*for (; j < begin2; j++)
	{
		a[j] = tmp[j];
	}*/
}

void MergeSortNonR(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	int gap = 1;
	while (gap < n)
	{
		for (int i = 0; i < n; i += 2 * gap)
		{
			int begin1 = i, end1 = i + gap - 1;
			int begin2 = i + gap, end2 = i + 2 * gap - 1;
			_MergeSort(a, tmp, begin1, end1, begin2, end2);
		}
		gap *= 2;
	}
}



int main()
{
	int a[] = { 5, 9, 7, 1, 5, 3, 9, 8 };
	int n = sizeof(a) / sizeof(a[0]);
	MergeSortNonR(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}