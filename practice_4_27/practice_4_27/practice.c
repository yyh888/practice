#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<math.h>


//void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
//    int p1 = m - 1;
//    int p2 = n - 1;
//    int i = m + n - 1;
//    int cur = 0;
//    while (p1 >= 0 || p2 >= 0)
//    {
//        if (p1 == -1)
//        {
//            cur = nums2[p2--];
//        }
//        else if (p2 == -1)
//        {
//            cur = nums1[p1--];
//        }
//        else if (nums1[p1] > nums2[p2])
//        {
//            cur = nums1[p1--];
//        }
//        else
//        {
//            cur = nums2[p2--];
//        }
//        nums1[i--] = cur;
//    }
//}


//轮转数组一
//void rotate(int* nums, int numsSize, int k) {
//    int arr[numsSize];
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        arr[(i + k) % numsSize] = nums[i];
//    }
//    for (i = 0; i < numsSize; i++)
//    {
//        nums[i] = arr[i];
//    }
//}


//轮转数组二
//void rever(int arr[], int x, int y)
//{
//    while (x < y)
//    {
//        int tmp = arr[x];
//        arr[x] = arr[y];
//        arr[y] = tmp;
//        x++;
//        y--;
//    }
//}
//
//
//void rotate(int* nums, int numsSize, int k) {
//    if (k > numsSize)
//    {
//        k %= numsSize;
//    }
//    rever(nums, 0, numsSize - 1);
//    rever(nums, 0, k - 1);
//    rever(nums, k, numsSize - 1);
//}



int* addToArrayForm(int* num, int numSize, int k, int* returnSize) {
    int i = 0;
    int* p = (int*)malloc(5 * sizeof(int));
    int sum = 0;
    int sq = 0;
    for (i = numSize - 1; i >= 0; i--)
    {
        sum += num[i] * pow(10, sq++);
    }
    sum += k;
    int dig = 0;
    int ret = sum;
    while (ret)
    {
        ret /= 10;
        dig++;
    }
    int Size = dig;
    while (sum)
    {
        p[--dig] = sum % 10;
        sum /= 10;
    }
    *returnSize = Size;
    return p;
}

int main()
{
    int arr[] = { 1, 2, 0, 0 };
    int Size = 0;
    int* p = addToArrayForm(arr, 4, 34, &Size);
    for (int i = 0; i < Size; i++)
    {
        printf(p[i]);
    }
    return 0;
}