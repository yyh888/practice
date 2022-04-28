#define  _CRT_SECURE_NO_WARNINGS
#include<Stdio.h>

///**
// * Note: The returned array must be malloced, assume caller calls free().
// */
//int* singleNumbers(int* nums, int numsSize, int* returnSize) {
//    int* p = (int*)malloc(2 * sizeof(int));
//    if (p == NULL)
//    {
//        perror("malloc");
//        return NULL;
//    }
//    int x = 0;
//    int i = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        x ^= nums[i];
//    }
//    int count = 0;
//    while ((x & 1) != 1)
//    {
//        x >>= 1;
//        count++;
//    }
//    int a = 0;
//    int b = 0;
//    for (i = 0; i < numsSize; i++)
//    {
//        if ((nums[i] >> count) & 1)
//        {
//            a ^= nums[i];
//        }
//        else
//        {
//            b ^= nums[i];
//        }
//    }
//    p[0] = a;
//    p[1] = b;
//    *returnSize = 2;
//    return p;
//}


//
//int singleNumber(int* nums, int numsSize) {
//    int i = 0;
//    int j = 0;
//    int num = 0;
//    long val = 1;
//    int arr[32] = { 0 };
//    for (j = 0; j < 32; j++)
//    {
//        int sum = 0;
//        for (i = 0; i < numsSize; i++)
//        {
//            sum += (nums[i] >> j) & 1;
//        }
//        if (sum % 3 != 0)
//        {
//            num += 0 | (val << j);
//        }
//    }
//    return num;
//}



