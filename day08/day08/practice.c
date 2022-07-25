#include<stdio.h>

#include<stdio.h>

int cmp(const char* e1, const char* e2)
{
    return (*e1 - *e2);
}


int main()
{
    char arr[501];
    gets(arr);
    int sz = strlen(arr);
    qsort(arr, sz, 1, cmp);
    int count = 0;
    int prev = 0, cur = 0;
    while (cur < sz)
    {
        count++;
        while (cur < sz && arr[prev] == arr[cur])
        {
            cur++;
        }
        prev = cur;
    }
    printf("%d", count);
    return 0;
}




int cmp(const int* e1, const int* e2)
{
    return (*e1 - *e2);
}

int majorityElement(int* nums, int numsSize) {
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums[numsSize / 2];
}