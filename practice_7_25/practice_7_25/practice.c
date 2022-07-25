void reverse(int* arr, int left, int right)
{
    while (left < right)
    {
        int tmp = arr[left];
        arr[left] = arr[right];
        arr[right] = tmp;
        right--;
        left++;
    }
}

void rotate(int* nums, int numsSize, int k) {
    k %= numsSize;
    reverse(nums, 0, numsSize - 1);
    reverse(nums, 0, k - 1);
    reverse(nums, k, numsSize - 1);
}



int missingNumber(int* nums, int numsSize) {
    int sum = (numsSize + 1) * (numsSize) / 2;
    for (int i = 0; i < numsSize; i++)
    {
        sum -= nums[i];
    }
    return sum;
}