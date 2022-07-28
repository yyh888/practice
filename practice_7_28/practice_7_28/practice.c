#include <stdio.h>


void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int end1 = m - 1, end2 = n - 1;
    int i = nums1Size - 1;
    while (end1 >= 0 && end2 >= 0)
    {
        nums1[i--] = nums1[end1] > nums2[end2] ? nums1[end1--] : nums2[end2--];
    }
    while (end1 >= 0)
    {
        nums1[i--] = nums1[end1--];
    }
    while (end2 >= 0)
    {
        nums1[i--] = nums2[end2--];
    }
}

int main()
{
    int arr1[] = { 0, 0, 0 };
    int arr2[] = { 2, 5, 6 };
    merge(arr1, 3, 0, arr2, 3, 3);
    return 0;
}