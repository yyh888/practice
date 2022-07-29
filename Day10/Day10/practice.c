#include <stdio.h>
#include <stdlib.h>

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int* l = (int*)malloc(sizeof(int) * numsSize);
    int* r = (int*)malloc(sizeof(int) * numsSize);
    l[0] = 1;
    r[numsSize - 1] = 1;
    for (int i = 1; i < numsSize; i++)
    {
        l[i] = l[i - 1] * nums[i - 1];
    }
    for (int i = numsSize - 2; i >= 0; i--)
    {
        r[i] = r[i + 1] * nums[i + 1];
    }
    for (int i = 0; i < numsSize; i++)
    {
        r[i] *= l[i];
    }
    *returnSize = numsSize;
    return r;
}


int Add(int num1, int num2) {
    // write code here
    int add = num2;
    int sum = num1;
    while (add != 0)
    {
        int tmp = add ^ sum;
        //进位信息
        add = (sum & add) << 1;
        sum = tmp;
    }
    return sum;
}



int* findDisappearedNumbers(int* nums, int numsSize, int* returnSize) {
    int* arr = (int*)calloc(numsSize, sizeof(int));
    int* tmp = (int*)calloc(numsSize, sizeof(int));
    for (int i = 0; i < numsSize; i++)
    {
        int ret = nums[i];
        tmp[ret - 1] = ret;
    }
    int count = 0;
    for (int i = 0; i < numsSize; i++)
    {
        if (tmp[i] != i + 1)
        {
            arr[count++] = i + 1;
        }
    }
    *returnSize = count;
    return arr;
}