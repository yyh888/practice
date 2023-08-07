#include <iostream>
#include <vector>
using namespace std;

// 输出两个排好序的数组的共同元素
//vector<int> res;
//
//void Search(const vector<int>& v1, const vector<int>& v2)
//{
//	int n = v1.size(), m = v2.size();
//	int i = 0, j = 0;
//	while (i < n && j < m)
//	{
//		if (v1[i] < v2[j])
//		{
//			i++;
//		}
//		else if (v1[i] > v2[j])
//		{
//			j++;
//		}
//		else
//		{
//			res.push_back(v1[i]);
//			i++;
//			j++;
//			while (i < n && v1[i] == v1[i - 1]) i++;
//			while (j < m && v2[j] == v2[j - 1]) j++;
//		}
//	}
//}
//
//int main()
//{
//	vector<int> v1{ 1, 3, 5, 5, 7, 9 };
//	vector<int> v2{ 2, 5, 5, 7 ,9, 9};
//	Search(v1, v2);
//	for (auto& e : res)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}



// 指针判断大小端
//int main()
//{
//	int p = 0x12345678;
//	int p2 = *(char*)(&p);
//	if (p2 == 0x78) cout << "小端";
//	else cout << "大端";
//	return 0;
//}

// 联合体判断大小端
//int main()
//{
//	union uu
//	{
//		char a;
//		int b;
//	};
//	uu u;
//	u.b = 0x12345678;
//	if (u.a == 0x78) cout << "小端";
//	return 0;
//}

// 0～n - 1中缺失的数字
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int l = 0, r = nums.size() - 1;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2 + 1;
//            if (nums[mid] == mid)
//            {
//                l = mid;
//            }
//            else r = mid - 1;
//        }
//        if (r == 0 && nums[0] != 0) return nums[0] - 1;
//        return r + 1;
//    }
//};


// 缺失的第一个正数
//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i + 1)
//            {
//                if (nums[i] <= 0 || nums[i] > n || nums[i] == nums[nums[i] - 1])
//                {
//                    break;
//                }
//                int idx = nums[i] - 1;
//                swap(nums[i], nums[idx]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != i + 1)
//            {
//                return i + 1;
//            }
//        }
//        return n + 1;
//    }
//};


