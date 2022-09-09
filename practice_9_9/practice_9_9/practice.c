#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void _Merge(int* a, int* tmp, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int mid = (left + right) >> 1;
	_Merge(a, tmp, left, mid - 1);
	_Merge(a, tmp, mid, right);
	int begin1 = left, end1 = mid - 1;
	int begin2 = mid, end2 = right;
	int i = left;
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
	int j = left;
	for (j = left; j <= right; j++)
	{
		a[j] = tmp[j];
	}
}


void MergeSort(int* a, int n)
{
	int* tmp = (int*)malloc(sizeof(int) * n);
	_Merge(a, tmp, 0, n - 1);
	free(tmp);
}


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
			//控制边界
			if (end1 >= n)
			{
				break;
			}
			if (end2 >= n)
			{
				end2 = n - 1;
			}
			_MergeSort(a, tmp, begin1, end1, begin2, end2);
		}
		gap *= 2;
	}
	free(tmp);
}


void CountSort(int* a, int n)
{
	//找最大和最小的数
	int max = a[0], min = max;
	for (int i = 0; i < n; i++)
	{
		if (a[i] > max)
		{
			max = a[i];
		}
		if (a[i] < min)
		{
			min = a[i];
		}
	}
	int gap = max - min + 1;
	int* tmp = (int*)calloc(gap, sizeof(int));
	//放数
	for (int i = 0; i < n; i++)
	{
		tmp[a[i] - min]++;
	}
	//排序
	int i = 0;
	for (int j = 0; j < gap; j++)
	{
		while (tmp[j]--)
		{
			a[i++] = j + min;
		}
	}
}


int main()
{
	int a[] = { 5, 3, 2, 1 };
	int n = sizeof(a) / sizeof(a[0]);
	MergeSort(a, n);
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}