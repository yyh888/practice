#include <iostream>
#include <vector>

using namespace std;

//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        int top = 0, end = n - 1, left = 0, right = m - 1;
//        vector<int> res;
//        while (top <= end || left <= right)
//        {
//            for (int j = left; j <= right; j++)
//            {
//                res.push_back(matrix[top][j]);
//            }
//            if (++top > end) break;
//            for (int i = top; i <= end; i++)
//            {
//                res.push_back(matrix[i][right]);
//            }
//            if (--right < left) break;
//            for (int j = right; j >= left; j--)
//            {
//                res.push_back(matrix[end][j]);
//            }
//            if (--end < top) break;
//            for (int i = end; i >= top; i--)
//            {
//                res.push_back(matrix[i][left]);
//            }
//            if (++left > right) break;
//        }
//        return res;
//    }
//};

//vector<int> nums{ 1, 2, 4, 2, 5, 1, 8 };
//
//void QuickSort(int begin, int end)
//{
//	if (begin >= end) return;
//	int key = nums[begin];
//	int l = begin, r = end;
//	while (l < r)
//	{
//		while (l < r && nums[r] >= key) r--;
//		while (l < r && nums[l] <= key) l++;
//		if (l < r) swap(nums[l], nums[r]);
//	}
//	swap(nums[l], nums[begin]);
//	QuickSort(begin, l - 1);
//	QuickSort(l + 1, end);
//}
//
//int main()
//{
//	QuickSort(0, nums.size() - 1);
//	for (auto& e : nums) cout << e << " ";
//	return 0;
//}


