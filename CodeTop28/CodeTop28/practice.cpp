// 岛屿的最大面积
//class Solution {
//public:
//    int Max = 0;
//    int n, m;
//
//    int dx[4] = { 0, -1, 0, 1 };
//    int dy[4] = { -1, 0, 1, 0 };
//
//    int dfs(vector<vector<int>>& grid, int i, int j)
//    {
//        if (grid[i][j] == 0) return 0;
//        int ret = 1;
//        grid[i][j] = 0;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 1)
//            {
//                ret += dfs(grid, x, y);
//            }
//        }
//        return ret;
//    }
//
//    int maxAreaOfIsland(vector<vector<int>>& grid) {
//        n = grid.size(), m = grid[0].size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (grid[i][j] == 1)
//                {
//                    Max = max(Max, dfs(grid, i, j));
//                }
//            }
//        }
//        return Max;
//    }
//};


// 链表中倒数第k个节点
//class Solution {
//public:
//    ListNode* getKthFromEnd(ListNode* head, int k) {
//        ListNode* slow = head, * fast = head;
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* pre = pHead;
//        while (k--)
//        {
//            fast = fast->next;
//        }
//        while (fast)
//        {
//            fast = fast->next;
//            pre = head;
//            head = head->next;
//        }
//        return pre->next;
//    }
//};


// 单词拆分
//class Solution {
//public:
//    bool wordBreak(string s, vector<string>& wordDict) {
//        int n = s.size();
//        vector<bool> dp(n + 1, false);
//        dp[0] = true;
//        for (int i = 0; i < n; i++)
//        {
//            for (auto& str : wordDict)
//            {
//                if (dp[i] && s.substr(i, str.size()) == str)
//                {
//                    dp[i + str.size()] = true;
//                }
//            }
//        }
//        return dp[n];
//    }
//};


