#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>

//int main()
//{
//	int arr1[5] = { 1,2,3,4,5 };
//	int arr2[5] = { 6,7,8,9,10 };
//	int i = 0;
//	for (i = 0; i < 5; i++)
//	{
//		int tmp = 0;
//		tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < 5; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//	return 0;
//}



//void init(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		p[i] = 0;
//	}
//}
//
//void print(int* p, int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", p[i]);
//	}
//}
//
//void reverse(int* p, int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = 0;
//		tmp = p[left];
//		p[left] = p[right];
//		p[right] = tmp;
//		left++;
//		right--;
//	}
//}
//
//int main()
//{
//	int arr[] = {1, 2, 3, 4, 5, 6, 7, 8};
//	int sz = sizeof(arr)/sizeof(arr[0]);
//	print(arr, sz);
//	reverse(arr, sz);
//	printf("\n");
//	print(arr, sz);
//	printf("\n");
//	init(arr, sz);
//	print(arr, sz);
//	return 0;
//}



//int removeDuplicates(int* nums, int numsSize) {
//    if (numsSize == 0)
//    {
//        return 0;
//    }
//    int i = 1;
//    int j = 1;
//    while (j < numsSize)
//    {
//        if (nums[j] != nums[j - 1])
//        {
//            nums[i] = nums[j];
//            i++;
//        }
//        j++;
//    }
//
//    return i;
//}


int* bubble(int* ptr, int sz)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < sz; i++)
	{
		for (j = i + 1; j < sz; j++)
		{
			int tmp = 0;
			if (ptr[i] > ptr[j])
			{
				tmp = ptr[i];
				ptr[i] = ptr[j];
				ptr[j] = tmp;
			}
		}
	}
	return ptr;
}

int main()
{
	int arr[10] = { 5, 8, 9, 7, 6, 2, 1, 3, 4 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int* p = bubble(arr, sz);
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", p[i]);
	}
	return 0;
}