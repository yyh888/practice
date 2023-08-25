#include <iostream>
using namespace std;
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) / 2 + 1;
//            if (nums[mid] <= nums[r])// ÓÒÓĞĞò
//            {
//                if (nums[mid] <= target && target <= nums[r])
//                {
//                    l = mid;
//                }
//                else r = mid - 1;
//            }
//            else// ×óÓĞĞò
//            {
//                if (nums[mid] > target && nums[l] <= target)
//                {
//                    r = mid - 1;
//                }
//                else l = mid;
//            }
//        }
//        return nums[l] == target ? l : -1;
//    }
//};


//class Solution {
//public:
//    vector<int> tmp;
//    int cnt = 0;
//
//    void MergeSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end) return;
//        int mid = (begin + end) / 2;
//        MergeSort(nums, begin, mid);
//        MergeSort(nums, mid + 1, end);
//        int begin1 = begin, begin2 = mid + 1;
//        int end1 = mid, end2 = end;
//        int idx = begin;
//        while (begin1 <= end1 && begin2 <= end2)
//        {
//            if (nums[begin1] <= nums[begin2])
//            {
//                tmp[idx++] = nums[begin1++];
//            }
//            else
//            {
//                tmp[idx++] = nums[begin2++];
//                cnt += (end1 - begin1 + 1);
//            }
//        }
//        while (begin1 <= end1)
//        {
//            tmp[idx++] = nums[begin1++];
//        }
//        while (begin2 <= end2)
//        {
//            tmp[idx++] = nums[begin2++];
//        }
//        for (int i = begin; i <= end; i++)
//        {
//            nums[i] = tmp[i];
//        }
//    }
//
//    int reversePairs(vector<int>& nums) {
//        int n = nums.size();
//        tmp.resize(n);
//        MergeSort(nums, 0, n - 1);
//        return cnt;
//    }
//};



//#define ADD 1+2
//
//const int N = 1 + 2;
//
//int main()
//{
//	cout << 2 * ADD;
//	cout << 2 * N;
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{
//		a = 1;
//		cout << a << endl;
//	}
//	int a;
//};
//
//int main()
//{
//	A* p = (A*)malloc(sizeof A);
//	//new(p)A;
//	return 0;
//}


