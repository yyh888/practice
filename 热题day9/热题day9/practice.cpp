// 不同路径
//class Solution {
//public:
//    void dfs(int i, int j, int m, int n, int& cnt, vector<vector<bool>>& vv)
//    {
//        if (i == m && j == n)
//        {
//            cnt++;
//            return;
//        }
//        int dx[] = { 0, 1 };
//        int dy[] = { 1, 0 };
//        for (int k = 0; k < 2; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x <= m && y <= n && !vv[x][y])
//            {
//                vv[x][y] = true;
//                dfs(x, y, m, n, cnt, vv);
//                vv[x][y] = false;
//            }
//        }
//    }
//
//    int uniquePaths(int m, int n) {
//        vector<vector<bool>> vv(m, vector<bool>(n));
//        int cnt = 0;
//        dfs(0, 0, m - 1, n - 1, cnt, vv);
//        return cnt;
//    }
//};

//class Solution {
//public:
//    int uniquePaths(int m, int n) {
//        vector<vector<int>> dp(m, vector<int>(n));
//        for (int i = 0; i < m; i++)
//        {
//            dp[i][0] = 1;
//        }
//        for (int j = 0; j < n; j++)
//        {
//            dp[0][j] = 1;
//        }
//        for (int i = 1; i < m; i++)
//        {
//            for (int j = 1; j < n; j++)
//            {
//                dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
//            }
//        }
//        return dp[m - 1][n - 1];
//    }
//};


// 最小路径和
//class Solution {
//public:
//    int minPathSum(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        for (int i = 1; i < n; i++)
//        {
//            grid[i][0] += grid[i - 1][0];
//        }
//        for (int j = 1; j < m; j++)
//        {
//            grid[0][j] += grid[0][j - 1];
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                grid[i][j] = grid[i][j] + min(grid[i - 1][j], grid[i][j - 1]);
//            }
//        }
//        return grid[n - 1][m - 1];
//    }
//};


// 编辑距离
//class Solution {
//public:
//    int minDistance(string word1, string word2) {
//        int n = word1.size(), m = word2.size();
//        vector<vector<int>> dp(n + 1, vector<int>(m + 1));
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i][0] = i;
//        }
//        for (int j = 1; j <= m; j++)
//        {
//            dp[0][j] = j;
//        }
//        for (int i = 1; i <= n; i++)
//        {
//            for (int j = 1; j <= m; j++)
//            {
//                if (word1[i - 1] == word2[j - 1])
//                {
//                    dp[i][j] = dp[i - 1][j - 1];
//                }
//                else
//                {
//                    int Min = min(dp[i - 1][j - 1], dp[i - 1][j]);
//                    Min = min(dp[i][j - 1], Min);
//                    dp[i][j] = Min + 1;
//                }
//            }
//        }
//        return dp[n][m];
//    }
//};


// 颜色分类
//class Solution {
//public:
//    void QuickSort(vector<int>& nums, int begin, int end)
//    {
//        if (begin >= end)
//        {
//            return;
//        }
//        int l = begin, r = end;
//        while (l < r)
//        {
//            while (l < r && nums[r] >= nums[begin])
//            {
//                r--;
//            }
//            while (l < r && nums[l] <= nums[begin])
//            {
//                l++;
//            }
//            if (l < r)
//            {
//                swap(nums[l], nums[r]);
//            }
//        }
//        swap(nums[begin], nums[r]);
//        QuickSort(nums, begin, l);
//        QuickSort(nums, l + 1, end);
//    }
//    void sortColors(vector<int>& nums) {
//        QuickSort(nums, 0, nums.size() - 1);
//    }
//};


//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int idx = 0;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                swap(nums[i], nums[idx]);
//                ++idx;
//            }
//        }
//        for (int i = idx; i < n; i++)
//        {
//            if (nums[i] == 1)
//            {
//                swap(nums[i], nums[idx]);
//                ++idx;
//            }
//        }
//    }
//};

//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int p0 = 0, p1 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 1)
//            {
//                swap(nums[i], nums[p1]);
//                ++p1;
//            }
//            else if (nums[i] == 0)
//            {
//                swap(nums[i], nums[p0]);
//                if (p0 < p1)
//                {
//                    swap(nums[i], nums[p1]);
//                }
//                ++p0;
//                ++p1;
//            }
//        }
//    }
//};

// 最小覆盖子串
//class Solution {
//public:
//
//    bool check(unordered_map<char, int>& s, unordered_map<char, int>& t)
//    {
//        for (auto& e : t)
//        {
//            if (s[e.first] < e.second)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//
//    string minWindow(string s, string t) {
//        unordered_map<char, int> hasht;
//        unordered_map<char, int> hashs;
//        for (char ch : t)
//        {
//            hasht[ch]++;
//        }
//        int l = 0, r = 0;
//        int len = INT_MAX, start = 0;
//        while (r < s.size())
//        {
//            while (r < s.size() && !check(hashs, hasht))
//            {
//                hashs[s[r]]++;
//                r++;
//            }
//            if (check(hashs, hasht))
//            {
//                while (l < r && check(hashs, hasht))
//                {
//                    if (r - l < len)
//                    {
//                        len = r - l;
//                        start = l;
//                    }
//                    hashs[s[l]]--;
//                    l++;
//                }
//            }
//        }
//        if (len == INT_MAX)
//        {
//            return "";
//        }
//        return s.substr(start, len);
//    }
//};


// 子集
//class Solution {
//public:
//    vector<vector<int>> vv;
//    vector<int> v;
//
//    void dfs(int cur, vector<int>& nums)
//    {
//        if (cur == nums.size())
//        {
//            vv.push_back(v);
//            return;
//        }
//        v.push_back(nums[cur]);
//        dfs(cur + 1, nums);
//        v.pop_back();
//        dfs(cur + 1, nums);
//    }
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(0, nums);
//        return vv;
//    }
//};


class Solution {
public:
    vector<vector<int>> vv;
    vector<int> v;

    void dfs(vector<int>& nums, int idx)
    {
        vv.push_back(v);
        if (idx >= nums.size()) return;
        for (int i = idx; i < nums.size(); i++)
        {
            v.push_back(nums[i]);
            dfs(nums, idx + 1);
            v.pop_back();
        }
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        dfs(nums, 0);
        return vv;
    }
};