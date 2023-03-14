// 把数字翻译成字符串
//class Solution {
//public:
//    int translateNum(int num) {
//        string ret = to_string(num);
//        vector<int> dp(ret.size() + 1);
//        dp[0] = 1;
//        dp[1] = 1;
//        for (int i = 2; i <= ret.size(); i++)
//        {
//            if (ret[i - 2] == '0' || ret[i - 2] > '2' || (ret[i - 2] == '2' && ret[i - 1] > '5'))
//            {
//                dp[i] = dp[i - 1];
//            }
//            else
//            {
//                dp[i] = dp[i - 1] + dp[i - 2];
//            }
//        }
//        return dp[ret.size()];
//    }
//};

// 礼物的最大价值
//class Solution {
//public:
//    int maxValue(vector<vector<int>>& grid) {
//        for (int i = 1; i < grid.size(); i++)
//        {
//            grid[i][0] += grid[i - 1][0];
//        }
//        for (int j = 1; j < grid[0].size(); j++)
//        {
//            grid[0][j] += grid[0][j - 1];
//        }
//        for (int i = 1; i < grid.size(); i++)
//        {
//            for (int j = 1; j < grid[0].size(); j++)
//            {
//                int Max = max(grid[i - 1][j], grid[i][j - 1]);
//                grid[i][j] += Max;
//            }
//        }
//        return grid[grid.size() - 1][grid[0].size() - 1];
//    }
//};

// 最长不含重复字符的子字符串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_set<char> hash;
//        int Max = 0;
//        int end = 0;
//        for (int i = 0; i < s.size(); i++)
//        {
//            int res = 0;
//            for (int j = i; j < s.size(); j++)
//            {
//                if (hash.count(s[j]))
//                {
//                    res = max(res, (int)hash.size());
//                    hash.clear();
//                    end = j;
//                    break;
//                }
//                else
//                    hash.insert(s[j]);
//            }
//            res = max(res, (int)hash.size());
//            hash.clear();
//            Max = max(Max, res);
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_set<char> hash;
//        int res = 0;
//        for (int l = 0, r = 0; r < s.size(); r++)
//        {
//            if (!hash.count(s[r]))
//            {
//                hash.insert(s[r]);
//            }
//            else
//            {
//                while (s[l] != s[r])
//                {
//                    hash.erase(s[l]);
//                    l++;
//                }
//                l++;
//            }
//            res = max(res, r - l + 1);
//        }
//        return res;
//    }
//};


