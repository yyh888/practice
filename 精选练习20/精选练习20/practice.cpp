// 至少有 K 个重复字符的最长子串
//class Solution {
//public:
//    int dfs(string& s, int l, int r, int k)
//    {
//        if (r - l + 1 < k) return 0;
//        vector<int> v(26, 0);
//        for (int i = l; i <= r; i++)
//        {
//            v[s[i] - 'a']++;
//        }
//        char sp = '0';
//        for (int i = 0; i < 26; i++)
//        {
//            if (v[i] > 0 && v[i] < k)
//            {
//                sp = i + 'a';
//                break;
//            }
//        }
//        if (sp == '0') return r - l + 1;
//        int len = 0, i = l;
//        // 递归所有不含sp的区间
//        while (i <= r)
//        {
//            // 跳过sp
//            while (i <= r && s[i] == sp)
//            {
//                i++;
//            }
//            if (i > r) break;
//            int start = i;
//            while (i <= r && s[i] != sp)
//            {
//                i++;
//            }
//            int tmp = dfs(s, start, i - 1, k);
//            len = max(len, tmp);
//        }
//        return len;
//    }
//
//    int longestSubstring(string s, int k) {
//        int n = s.size();
//        return dfs(s, 0, n - 1, k);
//    }
//};


// Fizz Buzz
//class Solution {
//public:
//    vector<string> fizzBuzz(int n) {
//        vector<string> v(n);
//        for (int i = 0; i < n; i++)
//        {
//            if ((i + 1) % 5 == 0 && (i + 1) % 3 == 0)
//            {
//                v[i] = "FizzBuzz";
//            }
//            else if ((i + 1) % 5 == 0)
//            {
//                v[i] = "Buzz";
//            }
//            else if ((i + 1) % 3 == 0)
//            {
//                v[i] = "Fizz";
//            }
//            else
//            {
//                v[i] = to_string(i + 1);
//            }
//        }
//        return v;
//    }
//};


// 四数相加 II
//class Solution {
//public:
//    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
//        unordered_map<int, int> hash12;
//        for (auto& a : nums1)
//        {
//            for (auto& b : nums2)
//            {
//                hash12[a + b]++;
//            }
//        }
//        int ans = 0;
//        for (auto& c : nums3)
//        {
//            for (auto& d : nums4)
//            {
//                if (hash12.count(-c - d))
//                {
//                    ans += hash12[-c - d];
//                }
//            }
//        }
//        return ans;
//    }
//};