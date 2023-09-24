#include <iostream>

using namespace std;

//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int n = s.size();
//        unordered_map<char, int> hash;
//        int Max = 0;
//        for (int i = 0, j = 0; j < n; j++)
//        {
//            hash[s[j]]++;
//            while (hash[s[j]] > 1)
//            {
//                hash[s[i]]--;
//                i++;
//            }
//            Max = max(Max, j - i + 1);
//        }
//        return Max;
//    }
//};



//class Solution {
//public:
//    double QuickMul(double x, long long n)
//    {
//        if (n == 0) return 1.0;
//        double add = QuickMul(x, n / 2);
//        if (n % 2 == 0)
//        {
//            return add * add;
//        }
//        else return x * add * add;
//    }
//
//    double myPow(double x, int n) {
//        long long N = n;
//        return n > 0 ? QuickMul(x, N) : 1.0 / QuickMul(x, N);
//    }
//};


//class Solution {
//public:
//    vector<string> res;
//    string tmp;
//
//    void dfs(int l, int r, int n)
//    {
//        if (l > n || r > n) return;
//        if (l < r) return;
//        if (l == n && r == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        tmp += "(";
//        dfs(l + 1, r, n);
//        tmp.pop_back();
//        tmp += ")";
//        dfs(l, r + 1, n);
//        tmp.pop_back();
//    }
//
//    vector<string> generateParenthesis(int n) {
//        dfs(0, 0, n);
//        return res;
//    }
//};

//class Single
//{
//public:
//	static Single& GetSingle()
//	{
//		static Single _sig;
//		return _sig;
//	}
//private:
//	Single(){}
//	Single(const Single&) = delete;
//	Single& operator=(const Single&) = delete;
//};
//
//int main()
//{
//	return 0;
//}


//class Solution {
//public:
//    int firstMissingPositive(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i + 1)
//            {
//                if (nums[i] <= 0 || nums[i] > n || nums[i] == nums[nums[i] - 1]) break;
//                int idx = nums[i] - 1;
//                swap(nums[i], nums[idx]);
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] != i + 1) return i + 1;
//        }
//        return n + 1;
//    }
//};



