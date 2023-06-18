// 统计封闭岛屿的数目
//class Solution {
//public:
//    typedef pair<int, int> PII;
//    int ans = 0;
//    static constexpr int dx[] = { 0, -1, 0, 1 };
//    static constexpr int dy[] = { -1, 0, 1, 0 };
//
//    int closedIsland(vector<vector<int>>& grid) {
//        int n = grid.size(), m = grid[0].size();
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (grid[i][j] == 0)
//                {
//                    queue<PII> qq;
//                    bool close = true;
//                    grid[i][j] = 1;
//                    qq.push({ i, j });
//                    while (qq.size())
//                    {
//                        auto [x, y] = qq.front();
//                        qq.pop();
//                        if (x == 0 || x == n - 1 || y == 0 || y == m - 1)
//                        {
//                            close = false;
//                        }
//                        for (int k = 0; k < 4; k++)
//                        {
//                            int cx = x + dx[k], cy = y + dy[k];
//                            if (cx >= 0 && cx < n && cy >= 0 && cy < m && grid[cx][cy] == 0)
//                            {
//                                qq.push({ cx, cy });
//                                grid[cx][cy] = 1;
//                            }
//                        }
//                    }
//                    if (close) ans++;
//                }
//            }
//        }
//        return ans;
//    }
//};


//class Solution {
//public:
//    typedef pair<int, int> PII;
//    int ans = 0;
//    static constexpr int dx[] = { 0, -1, 0, 1 };
//    static constexpr int dy[] = { -1, 0, 1, 0 };
//
//    bool close;
//    int n, m;
//
//    void dfs(vector<vector<int>>& grid, int i, int j)
//    {
//        grid[i][j] = 1;
//        if (i == 0 || i == n - 1 || j == 0 || j == m - 1) close = false;
//        for (int k = 0; k < 4; k++)
//        {
//            int x = i + dx[k], y = j + dy[k];
//            if (x >= 0 && x < n && y >= 0 && y < m && grid[x][y] == 0)
//            {
//                dfs(grid, x, y);
//            }
//        }
//    }
//
//    int closedIsland(vector<vector<int>>& grid) {
//        n = grid.size(), m = grid[0].size();
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (grid[i][j] == 0)
//                {
//                    close = true;
//                    dfs(grid, i, j);
//                    if (close) ans++;
//                }
//            }
//        }
//        return ans;
//    }
//};


// 将有序数组转换为二叉搜索树
//class Solution {
//public:
//    TreeNode* dfs(vector<int>& nums, int l, int r)
//    {
//        if (l >= r)
//        {
//            return nullptr;
//        }
//        int mid = l + (r - l) / 2;
//        TreeNode* root = new TreeNode(nums[mid]);
//        root->left = dfs(nums, l, mid);
//        root->right = dfs(nums, mid + 1, r);
//        return root;
//    }
//
//    TreeNode* sortedArrayToBST(vector<int>& nums) {
//        int n = nums.size();
//        return dfs(nums, 0, n - 1);
//    }
//};


// 有序链表转换二叉搜索树
//class Solution {
//public:
//    ListNode* GetMid(ListNode* head, ListNode* tail)
//    {
//        ListNode* slow = head, * fast = head;
//        while (fast != tail && fast->next != tail)
//        {
//            slow = slow->next;
//            fast = fast->next->next;
//        }
//        return slow;
//    }
//
//    TreeNode* _sortedListToBST(ListNode* l1, ListNode* l2)
//    {
//        if (l1 == l2) return nullptr;
//        ListNode* mid = GetMid(l1, l2);
//        TreeNode* root = new TreeNode(mid->val);
//        root->left = _sortedListToBST(l1, mid);
//        root->right = _sortedListToBST(mid->next, l2);
//        return root;
//    }
//
//    TreeNode* sortedListToBST(ListNode* head) {
//        return _sortedListToBST(head, nullptr);
//    }
//};