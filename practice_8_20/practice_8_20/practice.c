int minNumberInRotateArray(int* arr, int sz) {
    // write code here
    if (sz == 0)
    {
        return 0;
    }
    int left = 0, right = sz - 1;
    while (left < right)
    {
        int mid = (left + right) / 2;
        if (arr[mid] > arr[right])
        {
            left = mid + 1;
        }
        else if (arr[mid] < arr[right])
        {
            right = mid;
        }
        else
        {
            right--;
        }
    }
    return arr[left];
}
