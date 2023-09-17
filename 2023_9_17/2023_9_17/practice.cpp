#include <iostream>
#include <string>
#include <vector>
#include <cassert>



using namespace std;

//class Solution {
//public:
//    string convert(string s, int numRows) {
//        vector<string> res(numRows);
//        int idx = 0, n = s.size();
//        while (idx < n)
//        {
//            int col = 0;
//            while (idx < n && col < numRows)
//            {
//                res[col++] += s[idx];
//                idx++;
//            }
//            col--;
//            while (idx < n && col > 1)
//            {
//                res[--col] += s[idx];
//                idx++;
//            }
//        }
//        string ans;
//        for (auto& str : res) ans += str;
//        return ans;
//    }
//};


//int main()
//{
//	float a = 10.222222225, b = 10.222222229;
//	cout << (abs(a - b)) << endl;
//	return 0;
//}


//namespace yyh
//{
//	void* memcpy(const void* dest, const void* src, size_t count)
//	{
//		assert(dest && src);
//		char* p1 = (char*)dest;
//		char* p2 = (char*)src;
//		while (count--)
//		{
//			*p1++ = *p2++;
//		}
//		*p1 = '\0';
//		return (void*)dest;
//	}
//
//	void* my_memmove(void* dest, const void* sour, size_t num)
//	{
//		assert(dest && sour);
//		char* p1 = (char*)dest;
//		char* p2 = (char*)sour;
//		if (p1 <= p2)
//		{
//			while (num)
//			{
//				num--;
//				*p1++ = *p2++;
//			}
//		}
//		else
//		{
//			while (num)
//			{
//				num--;
//				*(p1 + num) = *(p2 + num);
//			}
//		}
//	}
//}
//
//int main()
//{
//	char a[100];
//	const char* b = "abcdef";
//	yyh::memcpy(a, b, 3);
//	cout << a << endl;
//	return 0;
//}

//class Solution {
//public:
//    string longestCommonPrefix(vector<string>& strs) {
//        sort(strs.begin(), strs.end());
//        string start = strs.front(), end = strs.back();
//        int n = min(start.size(), end.size());
//        string res;
//        for (int i = 0; i < n; i++)
//        {
//            if (start[i] != end[i]) break;
//            res = start.substr(0, i + 1);
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (!head || !head->next) return head;
//        ListNode* tmp = reverseList(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//};



//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1);
//        int Max = INT_MIN;
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i] = max(dp[i - 1] + nums[i - 1], nums[i - 1]);
//            Max = max(Max, dp[i]);
//        }
//        return Max;
//    }
//};


