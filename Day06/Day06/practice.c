//int seqparate(int* arr, double k, int len)
//{
//    int left = 0, right = len - 1;
//    while (right >= left)
//    {
//        int mid = (left + right) >> 1;
//        if (arr[mid] > k)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return left;
//}
//
//int GetNumberOfK(int* data, int dataLen, int k) {
//    // write code here
//    double kmin = k - 0.5;
//    double kmax = k + 0.5;
//    if (k > data[dataLen - 1] || k < data[0] || dataLen == 0)
//    {
//        return 0;
//    }
//    int leftInder = seqparate(data, kmin, dataLen);
//    int rightInder = seqparate(data, kmax, dataLen);
//    return (rightInder - leftInder);
//}



//int dominantIndex(int* nums, int numsSize) {
//    if (numsSize == 0)
//    {
//        return -1;
//    }
//    if (numsSize == 1)
//    {
//        return 0;
//    }
//    int max = 0;
//    int i = 0;
//    int k;
//    for (i = 0; i < numsSize; i++)
//    {
//        if (max < nums[i])
//        {
//            max = nums[i];
//            k = i;
//        }
//    }
//    int j = 0;
//    int Smax = 0;
//    for (j = 0; j < numsSize; j++)
//    {
//        if (j == k)
//            continue;
//        if (Smax < nums[j])
//        {
//            Smax = nums[j];
//        }
//    }
//    if (2 * Smax <= max)
//    {
//        return k;
//    }
//    else
//    {
//        return -1;
//    }
//}

#include<stdio.h>
#include<stdlib.h>



int cmp(const int* e1, const int* e2)
{
    return (*e1 - *e2);
}

int* intersection(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize) {
    qsort(nums1, nums1Size, sizeof(int), cmp);
    qsort(nums2, nums2Size, sizeof(int), cmp);
    int prev1 = 0, cur1 = 0, prev2 = 0, cur2 = 0;
    while (cur1 < nums1Size && cur2 < nums2Size && nums1[cur1] != nums2[cur2])
    {
        nums1[cur1] > nums2[cur2] ? cur2++ : cur1++;
    }
    int* ret = (int*)malloc(sizeof(int) * 1000);
    int count = 0;
    while (cur1 < nums1Size && cur2 < nums2Size)
    {
        if (nums1[cur1] == nums2[cur2])
        {
            prev1 = cur1;
            prev2 = cur2;
            ret[count] = nums1[cur1];
            count++;
            cur1++;
            cur2++;
        }
        else if (nums1[cur1] < nums2[cur2])
        {
            prev1 = cur1;
            cur1++;
        }
        else
        {
            prev2 = cur2;
            cur2++;
        }
        while (cur1 < nums1Size && nums1[cur1] == nums1[prev1])
        {
            cur1++;
        }
        while (cur2 < nums2Size && nums2[cur2] == nums2[prev2])
        {
            cur2++;
        }
    }
    *returnSize = count;
    return ret;
}


int main()
{
    int arr1[] = { 4, 7, 9, 7, 6, 7 };
    int arr2[] = { 5, 0, 0, 6, 1, 6, 2, 2, 4 };
    int n = 0;
    int* ret = intersection(arr1, 6, arr2, 9, &n);
    printf("%d", n);
    return 0;
}