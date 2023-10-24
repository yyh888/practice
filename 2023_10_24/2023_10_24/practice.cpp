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