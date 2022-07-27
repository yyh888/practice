int removeElement(int* nums, int numsSize, int val) {
    for (int i = 0; i < numsSize; i++)
    {
        if (nums[i] == val)
        {
            int j = i;
            while (j < numsSize - 1)
            {
                nums[j] = nums[j + 1];
                j++;
            }
            i--;
            numsSize--;
        }
    }
    return numsSize;
}



int removeDuplicates(int* nums, int numsSize) {
    if (numsSize == 0)
    {
        return 0;
    }
    int i = 1;
    int j = 1;
    while (j < numsSize)
    {
        if (nums[j] != nums[j - 1])
        {
            nums[i] = nums[j];
            i++;
        }
        j++;
    }
    return i;
}