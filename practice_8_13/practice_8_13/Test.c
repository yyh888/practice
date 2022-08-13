#include "Sort.h"


int main()
{
	int a[] = { 3, 2, 1, 4, 5, 8, 7 };
	int n = sizeof(a) / sizeof(a[0]);
	//InsertSort(a, n);
	//ShellSort(a, n);
	//SelectSort(a, n);
	//HeapSort(a, n);
	//BubbleSort(a, n);
	QuickSort(a, 0, n - 1);
	PrintSort(a, n);
	return 0;
}