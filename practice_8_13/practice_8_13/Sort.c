#include "Sort.h"

void PrintSort(int* a, int n)
{
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
}


// ��������
void InsertSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int end = i;
		int tmp = a[end + 1];
		while (end >= 0)
		{
			if (tmp < a[end])
			{
				a[end + 1] = a[end];
				end--;
			}
			else
			{
				break;
			}
		}
		a[end + 1] = tmp;
	}
}

// ϣ������
void ShellSort(int* a, int n)
{
	int gap = n;
	while (gap != 1)
	{
		gap = gap / 3 + 1;
		for (int i = 0; i < n - gap; i++)
		{
			int end = i;
			int tmp = a[end + gap];
			while (end >= 0)
			{
				if (tmp < a[end])
				{
					a[end + gap] = a[end];
					end -= gap;
				}
				else
				{
					break;
				}
			}
			a[end + gap] = tmp;
		}
	}
}

void Swap(int* a, int* b)
{
	int tmp = *a;
	*a = *b;
	*b = tmp;
}


// ѡ������
void SelectSort(int* a, int n)
{
	int left = 0, right = n - 1;
	while (left < right)
	{
		int minIndex = left, maxIndex = left;
		for (int i = left; i <= right; i++)
		{
			if (a[minIndex] > a[i])
			{
				minIndex = i;
			}
			if (a[maxIndex] < a[i])
			{
				maxIndex = i;
			}
		}
		Swap(&a[left], &a[minIndex]);
		if (maxIndex == left)
		{
			maxIndex = minIndex;
		}
		Swap(&a[right], &a[maxIndex]);
		left++;
		right--;
	}
}


// ������
void AdjustDown(int* a, int n, int parent)
{
	int child = 2 * parent + 1;
	while (child < n)
	{
		if (child + 1 < n && a[child + 1] > a[child])
		{
			child++;
		}
		if (a[child] > a[parent])
		{
			Swap(&a[child], &a[parent]);
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
	//����
	for (int i = (n - 1 - 1) / 2; i >= 0; i--)
	{
		AdjustDown(a, n, i);
	}
	int end = n - 1;
	while (end >= 0)
	{
		Swap(&a[0], &a[end]);
		AdjustDown(a, end, 0);
		end--;
	}
}


// ð������
void BubbleSort(int* a, int n)
{
	for (int i = 0; i < n - 1; i++)
	{
		int flag = 1;
		for (int j = 0; j < n - i - 1; j++)
		{
			if (a[j] > a[j + 1])
			{
				Swap(&a[j], &a[j + 1]);
				flag = 0;
			}
		}
		if (flag)
		{
			break;
		}
	}
}

// ��������ݹ�ʵ��
// ��������hoare�汾
int PartSort1(int* a, int left, int right)
{
	int key = left;
	while (left < right)
	{
		//����С
		while (left < right && a[right] >= a[key])
		{
			right--;
		}
		//���Ҵ�
		while (left < right && a[left] <= a[key])
		{
			left++;
		}
		if(left < right)
		Swap(&a[left], &a[right]);
	}
	Swap(&a[key], &a[left]);
	return left;
}
// ���������ڿӷ�
int PartSort2(int* a, int left, int right)
{
	int tmp = a[left];
	while (left < right)
	{
		//����С
		while (left < right && a[right] >= tmp)
		{
			right--;
		}
		a[left] = a[right];
		while (left < right && a[left] <= tmp)
		{
			left++;
		}
		a[right] = a[left];
	}
	a[left] = tmp;
	return left;
}
// ��������ǰ��ָ�뷨
int PartSort3(int* a, int left, int right)
{

}


void QuickSort(int* a, int left, int right)
{
	if (left >= right)
	{
		return;
	}
	int key = PartSort2(a, left, right);
	QuickSort(a, left, key - 1);
	QuickSort(a, key + 1, right);
}

// �������� �ǵݹ�ʵ��
void QuickSortNonR(int* a, int left, int right);
