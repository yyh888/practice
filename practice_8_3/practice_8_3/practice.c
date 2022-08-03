#include<stdio.h>
#include<assert.h>
#include<stdbool.h>


//bool binary_search(int arr[], int k, int target)
//{
//    int left = 0, right = k - 1;
//    while (left <= right)
//    {
//        int mid = (right + left) / 2;
//        if (arr[mid] == target)
//        {
//            return true;
//        }
//        else if (arr[mid] > target)
//        {
//            right = mid - 1;
//        }
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return false;
//}
//
//bool Find(int target, int** array, int arrayRowLen, int* arrayColLen) {
//    // write code here
//    while (arrayRowLen--)
//    {
//        if (binary_search(*array, *arrayColLen, target))
//        {
//            return true;
//        }
//        array++;
//    }
//    return false;
//}


//int findPeakElement(int* nums, int numsLen) {
//    // write code here
//    int left = 0, right = numsLen - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        //右边是往下，不一定有坡峰
//        if (nums[mid] > nums[mid + 1])
//        {
//            right = mid;
//        }
//        //右边是往上，一定能找到波峰
//        else
//        {
//            left = mid + 1;
//        }
//    }
//    return left;
//}


//while (row <= arrayRowLen - 1 && row >= 0 && col <= *arrayColLen - 1 && col >= 0)
//{
//    if (array[row][col] == target)
//    {
//        return true;
//    }
//    else
//    {
//        if (array[row][col] < target)
//        {
//            col++;
//        }
//        else
//        {
//            row--;
//        }
//    }
//}
//return false;
//}



//int minNumberInRotateArray(int* arr, int sz) {
//    // write code here
//    if (sz == 0)
//    {
//        return 0;
//    }
//    int left = 0, right = sz - 1;
//    while (left < right)
//    {
//        int mid = (left + right) / 2;
//        if (arr[mid] > arr[right])
//        {
//            left = mid + 1;
//        }
//        else if (arr[mid] < arr[right])
//        {
//            right = mid;
//        }
//        else
//        {
//            right--;
//        }
//    }
//    return arr[left];
//}