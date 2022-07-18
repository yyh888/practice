//int compare(const void* e1, const void* e2)
//{
//    return *(int*)e1 - *(int*)e2;
//}
//
//int* findErrorNums(int* nums, int numsSize, int* returnSize) {
//    qsort(nums, numsSize, 4, compare);
//    int* tmp = (int*)malloc(sizeof(int) * 4);
//    *returnSize = 2;
//    int prev = 0;
//    for (int i = 0; i < numsSize; i++)
//    {
//        int cur = nums[i];
//        if (cur == prev)
//        {
//            tmp[0] = cur;
//        }
//        if (cur - prev > 1)
//        {
//            tmp[1] = cur - 1;
//        }
//        prev = cur;
//    }
//    if (nums[numsSize - 1] != numsSize)
//    {
//        tmp[1] = numsSize;
//    }
//    return tmp;
//}




#include<stdio.h>

int main()
{
    int arr[101];
    int n = 0;
    scanf("%d", &n);
    while (n--)
    {
        getchar();
        scanf("%s", arr);
        int flagA = 0;
        int flaga = 0;
        int flag1 = 0;
        int flag = 0;
        int count = 0;
        char* p = arr;
        // 2
        if (*p <= 57 && *p >= 48)
        {
            printf("NO\n");
            continue;
        }
        while (*p)
        {
            if (*p >= 'A' && *p <= 'Z')
            {
                flagA = 1;
            }
            else if (*p >= 'a' && *p <= 'z')
            {
                flaga = 1;
            }
            else if (*p >= 48 && *p <= 57)
            {
                flag1 = 1;
            }
            else
            {
                //1
                flag = 1;
            }
            p++;
            count++;
        }
        //4
        if (count < 8 || flag1 + flagA + flaga < 2 || flag == 1)
        {
            printf("NO\n");
            continue;
        }
        printf("YES\n");
    }
    return 0;
}