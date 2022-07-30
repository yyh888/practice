int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int cur = 0;
    int max = 0;
    for (; cur < numsSize; cur++)
    {
        int count = 0;
        while (cur < numsSize && nums[cur] == 1)
        {
            cur++;
            count++;
        }
        if (count > max)
        {
            max = count;
        }
    }
    return max;
}



int main()
{
    int n = 0;
    scanf("%d", &n);
    int count = 0;
    for (int i = 1; i <= n; i++)
    {
        int tmp = i - 1;
        int sum = 0;
        while (tmp >= 1)
        {
            if (i % tmp == 0)
            {
                sum += tmp;
            }
            tmp--;
        }
        if (sum == i)
        {
            count++;
        }
    }
    printf("%d", count);
    return 0;
}