// 环形链表
//class Solution {
//public:
//    bool hasCycle(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (slow && fast && fast->next)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//            if (slow == fast) return true;
//        }
//        return false;
//    }
//};


#include <iostream>
#include <vector>

using namespace std;

//void Sort(vector<int>& nums)
//{
//	int n = nums.size();
//	for (int i = 0; i < n - 1; i++)
//	{
//		bool flag = true;
//		for (int j = 0; j < n - 1 - i; j++)
//		{
//			if (nums[j] > nums[j + 1])
//			{
//				swap(nums[j], nums[j + 1]);
//				flag = false;
//			}
//		}
//		if (flag) break;
//	}
//}
//

//void Sort(vector<int>& nums)
//{
//	int n = nums.size();
//	for (int i = 1; i < n; i++)
//	{
//		int tmp = nums[i];
//		int end = i - 1;
//		while (end >= 0)
//		{
//			if (nums[end] > tmp)
//			{
//				nums[end + 1] = nums[end];
//				end--;
//			}
//			else
//			{
//				break;
//			}
//		}
//		nums[end + 1] = tmp;
//	}
//}

//void _MergeSort(vector<int>& nums, vector<int>& tmp, int begin1, int end1, int begin2, int end2)
//{
//	int idx = begin1;
//	int start = begin1;
//	while (begin1 <= end1 && begin2 <= end2)
//	{
//		if (nums[begin1] < nums[begin2])
//		{
//			tmp[idx++] = nums[begin1++];
//		}
//		else
//		{
//			tmp[idx++] = nums[begin2++];
//		}
//	}
//	while (begin1 <= end1)
//	{
//		tmp[idx++] = nums[begin1++];
//	}
//	while (begin2 <= end2)
//	{
//		tmp[idx++] = nums[begin2++];
//	}
//	for (int i = start; i <= end2; i++)
//	{
//		nums[i] = tmp[i];
//	}
//}
//
//void Sort(vector<int>& nums)
//{
//	int n = nums.size();
//	vector<int> tmp(nums.size());
//	int gap = 1;
//	while (gap < n)
//	{
//		for (int i = 0; i < n; i += 2 * gap)
//		{
//			int begin1 = i, begin2 = i + gap;
//			int end1 = i + gap - 1, end2 = i + 2 * gap - 1;
//			if (end1 >= n)
//			{
//				break;
//			}
//			if (end2 >= n)
//			{
//				end2 = n - 1;
//			}
//			_MergeSort(nums, tmp, begin1, end1, begin2, end2);
//		}
//		gap *= 2;
//	}
//}
//
//
//
//int main()
//{
//	vector<int> nums{ 8, 2, 5, 1, 6, 7 };
//	Sort(nums);
//	for (auto& e : nums)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}
//



// 数组大小减半
//class Solution {
//public:
//    int minSetSize(vector<int>& arr) {
//        unordered_map<int, int> hash;
//        for (auto& e : arr)
//        {
//            hash[e]++;
//        }
//        vector<int> res;
//        for (auto& e : hash)
//        {
//            res.push_back(e.second);
//        }
//        sort(res.begin(), res.end(), greater<int>());
//        int n = arr.size();
//        int cnt = 0;
//        int num = n / 2;
//        for (auto& e : res)
//        {
//            n -= e;
//            cnt++;
//            if (n <= num) break;
//        }
//        return cnt;
//    }
//};


// 反转字符串中的单词
//class Solution {
//public:
//    string reverseWords(string s) {
//        int k;
//        // 删两头
//        for (k = 0; k < s.size(); k++)
//        {
//            if (s[k] != ' ') break;
//        }
//        s.erase(s.begin(), s.begin() + k);
//        for (k = s.size() - 1; k >= 0; k--)
//        {
//            if (s[k] != ' ') break;
//        }
//        s.erase(s.begin() + k + 1, s.end());
//
//        // 删中间
//        int i = 0, j = 0;
//        while (j < s.size())
//        {
//            if (j > 0 && s[j] == ' ' && s[j - 1] == ' ') j++;
//            else s[i++] = s[j++];
//        }
//        s.resize(i);
//        string res;
//        int n = s.size();
//        i = n - 1, j = n - 1;
//        while (i >= 0)
//        {
//            while (i >= 0 && s[i] != ' ') i--;
//            res += s.substr(i + 1, j - i);
//            res += " ";
//            j = i - 1;
//            i = j;
//        }
//        res.pop_back();
//        return res;
//    }
//};


//template <class T>
//struct ListNode
//{
//	ListNode(const T& val = T())
//		: _prev(nullptr)
//		, _next(nullptr)
//		, _val(val)
//	{}
//
//	T _val;
//	ListNode<T>* _prev;
//	ListNode<T>* _next;
//};
//
//
//namespace yyh
//{
//
//}


// 连续子数组的最大和
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        int Max = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            nums[i] = max(nums[i], nums[i - 1] + nums[i]);
//            Max = max(nums[i], Max);
//        }
//        return Max;
//    }
//};


// 最长公共子序列
//class Solution {
//public:
//    int longestCommonSubsequence(string text1, string text2) {
//        text1 = " " + text1;
//        text2 = " " + text2;
//        int n = text1.size(), m = text2.size();
//        vector<vector<int>> dp(n, vector<int>(m + 1));
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (text1[i] == text2[j])
//                {
//                    dp[i][j] = dp[i - 1][j - 1] + 1;
//                }
//                else
//                {
//                    dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
//                }
//            }
//        }
//        return dp[n - 1][m - 1];
//    }
//};


