//class Solution {
//public:
//    vector<string> strs;
//
//    static bool cmp(string s1, string s2)
//    {
//        return s1 + s2 > s2 + s1;
//    }
//
//    string largestNumber(vector<int>& nums) {
//        for (auto& num : nums)
//        {
//            strs.push_back(to_string(num));
//        }
//        sort(strs.begin(), strs.end(), cmp);
//        string res;
//        int i = 0, n = strs.size();
//        while (i < n - 1 && strs[i] == "0") i++;
//        while (i < n)
//        {
//            res += strs[i];
//            i++;
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int wiggleMaxLength(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> f(n, 1), g(n, 1);
//        int res = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[i - 1])
//                {
//                    g[i] = max(g[i], f[j] + 1);
//                }
//                else if (nums[i] < nums[i - 1])
//                {
//                    f[i] = max(f[i], g[j] + 1);
//                }
//            }
//            res = max(res, max(f[i], g[i]));
//        }
//        return res;
//    }
//};


