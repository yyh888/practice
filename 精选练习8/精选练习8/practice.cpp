// 字符串相乘
//class Solution {
//public:
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0") {
//            return "0";
//        }
//        int n = num1.size(), m = num2.size();
//        vector<int> nums(n + m);
//        for (int i = n - 1; i >= 0; i--)
//        {
//            int x = num1[i] - '0';
//            for (int j = m - 1; j >= 0; j--)
//            {
//                int y = num2[j] - '0';
//                nums[i + j + 1] += x * y;
//            }
//        }
//        for (int i = n + m - 1; i > 0; i--)
//        {
//            nums[i - 1] += nums[i] / 10;
//            nums[i] %= 10;
//        }
//        string res;
//        int i = nums[0] == 0 ? 1 : 0;
//        for (; i < n + m; i++)
//        {
//            res += nums[i] + '0';
//        }
//        return res;
//    }
//};

// 不用加减乘除做加法
//class Solution {
//public:
//    int add(int a, int b) {
//        while (b)
//        {
//            int c = (unsigned int)(a & b) << 1;
//            a = a ^ b;
//            // 进位
//            b = c;
//        }
//        return a;
//    }
//};


// 被围绕的区域
//class Solution {
//public:
//    const int dx[4] = { 0, -1, 0, 1 };
//    const int dy[4] = { -1, 0, 1, 0 };
//    int n, m;
//
//    void dfs(vector<vector<char>>& board, int i, int j, char c, char t)
//    {
//        board[i][j] = c;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] == t)
//            {
//                dfs(board, x, y, c, t);
//            }
//        }
//    }
//
//    void solve(vector<vector<char>>& board) {
//        n = board.size(), m = board[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            if (board[i][0] == 'O') dfs(board, i, 0, 'T', 'O');
//            if (board[i][m - 1] == 'O') dfs(board, i, m - 1, 'T', 'O');
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (board[0][j] == 'O') dfs(board, 0, j, 'T', 'O');
//            if (board[n - 1][j] == 'O') dfs(board, n - 1, j, 'T', 'O');
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (board[i][j] == 'O') dfs(board, i, j, 'X', 'O');
//            }
//        }
//        for (int i = 0; i < n; i++)
//        {
//            if (board[i][0] == 'T') dfs(board, i, 0, 'O', 'T');
//            if (board[i][m - 1] == 'T') dfs(board, i, m - 1, 'O', 'T');
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (board[0][j] == 'T') dfs(board, 0, j, 'O', 'T');
//            if (board[n - 1][j] == 'T') dfs(board, n - 1, j, 'O', 'T');
//        }
//    }
//};


// 分割回文串
//class Solution {
//public:
//    vector<vector<string>> res;
//    vector<vector<bool>> dp;
//    int n;
//
//    void dfs(string& s, int i, vector<string> tmp)
//    {
//        if (i > n) return;
//        if (i == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        for (int j = i; j < n; j++)
//        {
//            if (dp[i][j])
//            {
//                tmp.push_back(s.substr(i, j - i + 1));
//                dfs(s, j + 1, tmp);
//                tmp.pop_back();
//            }
//        }
//    }
//
//    vector<vector<string>> partition(string s) {
//        n = s.size();
//        dp.resize(n, vector<bool>(n));
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i <= 1 || dp[i + 1][j - 1])) dp[i][j] = true;
//            }
//        }
//        vector<string> tmp;
//        dfs(s, 0, tmp);
//        return res;
//    }
//};


// 单词拆分 II
//class Solution {
//public:
//    unordered_map<string, int> hash;
//    vector<string> res;
//    vector<string> tmp;
//    int n;
//
//    void dfs(string& s, int i)
//    {
//        if (i == n)
//        {
//            string ret;
//            for (auto& e : tmp)
//            {
//                ret += e + " ";
//            }
//            ret.pop_back();
//            res.push_back(ret);
//            return;
//        }
//        for (int j = i; j < n; j++)
//        {
//            if (hash.count(s.substr(i, j - i + 1)))
//            {
//                tmp.push_back(s.substr(i, j - i + 1));
//                dfs(s, j + 1);
//                tmp.pop_back();
//            }
//        }
//    }
//
//    vector<string> wordBreak(string s, vector<string>& wordDict) {
//        n = s.size();
//        for (auto& e : wordDict)
//        {
//            hash[e]++;
//        }
//        dfs(s, 0);
//        return res;
//    }
//};


