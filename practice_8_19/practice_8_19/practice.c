int search(int* nums, int numsLen, int target) {
    int left = 0, right = numsLen - 1;
    while (left <= right)
    {
        int mid = (left + right) >> 1;
        if (nums[mid] < target)
        {
            left = mid + 1;
        }
        else if (nums[mid] > target)
        {
            right = mid - 1;
        }
        else
        {
            return mid;
        }
    }
    return -1;
}



