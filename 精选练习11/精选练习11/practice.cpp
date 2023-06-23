// 快乐数
//class Solution {
//public:
//    int _isHappy(int x)
//    {
//        int res = 0;
//        while (x)
//        {
//            res += (x % 10) * (x % 10);
//            x /= 10;
//        }
//        return res;
//    }
//
//    bool isHappy(int n) {
//        int slow = n, fast = n;
//        do
//        {
//            slow = _isHappy(slow);
//            fast = _isHappy(fast);
//            fast = _isHappy(fast);
//        } while (slow != fast);
//        return slow == 1;
//    }
//};


// 单词搜索 II
//struct TrieNode
//{
//    string word = "";
//    unordered_map<char, TrieNode*> child;
//};
//
//void insert(TrieNode* root, string s)
//{
//    for (int i = 0; i < s.size(); i++)
//    {
//        int u = s[i];
//        if (!root->child.count(u))
//        {
//            root->child[u] = new TrieNode;
//        }
//        root = root->child[u];
//    }
//    root->word = s;
//}
//
//class Solution {
//public:
//    unordered_set<string> hash;
//    vector<string> res;
//    int n, m;
//    int dx[4] = { 0, -1, 0, 1 };
//    int dy[4] = { -1, 0, 1, 0 };
//
//    void dfs(TrieNode* root, vector<vector<char>>& board, int i, int j)
//    {
//        char tmp = board[i][j];
//        if (!root->child.count(tmp)) return;
//        root = root->child[tmp];
//        if (root->word.size() > 0)
//        {
//            hash.insert(root->word);
//        }
//        board[i][j] = '.';
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && board[x][y] != '.')
//            {
//                dfs(root, board, x, y);
//            }
//        }
//        board[i][j] = tmp;
//    }
//
//    vector<string> findWords(vector<vector<char>>& board, vector<string>& words) {
//        TrieNode* root = new TrieNode;
//        for (auto& e : words)
//        {
//            insert(root, e);
//        }
//        n = board.size(), m = board[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                dfs(root, board, i, j);
//            }
//        }
//        for (auto& e : hash) res.push_back(e);
//        return res;
//    }
//};


// 丢失的数字
//class Solution {
//public:
//    int missingNumber(vector<int>& nums) {
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (nums[i] != i && nums[i] < n)
//            {
//                swap(nums[i], nums[nums[i]]);
//            }
//        }
//        int idx = 0;
//        while (idx < n)
//        {
//            if (nums[idx] != idx) break;
//            idx++;
//        }
//        return idx;
//    }
//};


// 数组中字符串的最大值
//class Solution {
//public:
//    int ans = 0;
//
//    int GetVal(const string& s)
//    {
//        int res = 0;
//        for (auto& e : s)
//        {
//            if (e >= '0' && e <= '9')
//            {
//                res = res * 10 + e - '0';
//            }
//            else
//            {
//                return s.size();
//            }
//        }
//        return res;
//    }
//
//    int maximumValue(vector<string>& strs) {
//        for (auto& e : strs)
//        {
//            ans = max(GetVal(e), ans);
//        }
//        return ans;
//    }
//};