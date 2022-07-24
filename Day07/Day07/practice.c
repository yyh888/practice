//int cmp(const char* e1, const char* e2)
//{
//    return (*e1 - *e2);
//}
//
//int main()
//{
//    char str[1001] = { 0 };
//    gets(str);
//    int sz = strlen(str);
//    qsort(str, sz, 1, cmp);
//    puts(str);
//    return 0;
//}



int pivotIndex(int* nums, int numsSize) {
    for (int i = 0; i < numsSize; i++)
    {
        int lsum = 0;
        for (int j = 0; j < i; j++)
        {
            lsum += nums[j];
        }
        int rsum = 0;
        for (int j = i + 1; j < numsSize; j++)
        {
            rsum += nums[j];
        }
        if (lsum == rsum)
        {
            return i;
        }
    }
    return -1;
}