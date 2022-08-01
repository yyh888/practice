int main()
{
    int n = 0;
    scanf("%d", &n);
    int a[2000000] = { 0 };
    int num = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &num);
        a[i] = num;
    }
    int key = 0;
    for (int i = 0; i < n; i++)
    {
        key ^= a[i];
    }
    printf("%d", key);
    return 0;
}



int findPeakElement(int* nums, int numsLen) {
    // write code here
    int left = 0, right = numsLen - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (nums[mid] > nums[mid + 1])
        {
            right = mid;
        }
        else
        {
            left = mid + 1;
        }
    }
    return right;
}