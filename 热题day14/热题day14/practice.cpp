// 实现 Trie(前缀树)
//class Trie {
//public:
//    int son[200010][26];
//    int cnt[200010];
//    int idx;
//
//    Trie() {
//        memset(son, 0, sizeof son);
//        memset(cnt, 0, sizeof cnt);
//        idx = 0;
//    }
//
//    void insert(string word) {
//        int p = 0;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!son[p][u]) son[p][u] = ++idx;
//            p = son[p][u];
//        }
//        cnt[p] = 1;
//    }
//
//    bool search(string word) {
//        int p = 0;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!son[p][u])
//            {
//                return false;
//            }
//            p = son[p][u];
//        }
//        return cnt[p] > 0;
//    }
//
//    bool startsWith(string prefix) {
//        int p = 0;
//        for (int i = 0; i < prefix.size(); i++)
//        {
//            int u = prefix[i] - 'a';
//            if (!son[p][u])
//            {
//                return false;
//            }
//            p = son[p][u];
//        }
//        return true;
//    }
//};

//class Trie {
//public:
//    vector<Trie*> son;
//    bool flag;
//
//    Trie* searchend(string s)
//    {
//        Trie* node = this;
//        for (int i = 0; i < s.size(); i++)
//        {
//            int u = s[i] - 'a';
//            if (!node->son[u])
//            {
//                return nullptr;
//            }
//            node = node->son[u];
//        }
//        return node;
//    }
//
//    Trie()
//        : son(26)
//        , flag(false)
//    {}
//
//    void insert(string word) {
//        Trie* node = this;
//        for (int i = 0; i < word.size(); i++)
//        {
//            int u = word[i] - 'a';
//            if (!node->son[u])
//            {
//                node->son[u] = new Trie;
//            }
//            node = node->son[u];
//        }
//        node->flag = true;
//    }
//
//    bool search(string word) {
//        Trie* node = searchend(word);
//        if (node && node->flag)
//        {
//            return true;
//        }
//        return false;
//    }
//
//    bool startsWith(string prefix) {
//        Trie* node = searchend(prefix);
//        if (node)
//        {
//            return true;
//        }
//        return false;
//    }
//};

// 数组中的第K个最大元素
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        priority_queue<int, vector<int>, less<int>> pq;
//        for (int i = 0; i < nums.size(); i++)
//        {
//            pq.push(nums[i]);
//        }
//        while (--k)
//        {
//            pq.pop();
//        }
//        return pq.top();
//    }
//};

//class Solution {
//public:
//    int QuickPart(vector<int>& nums, int begin, int end, int target)
//    {
//        // 随机
//        int i = rand() % (end - begin + 1) + begin;
//        swap(nums[i], nums[begin]);
//        // 快排
//        int l = begin, r = end;
//        while (l < r)
//        {
//            while (l < r && nums[r] >= nums[begin]) r--;
//            while (l < r && nums[l] <= nums[begin]) l++;
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        swap(nums[l], nums[begin]);
//        if (l == target)
//        {
//            return nums[l];
//        }
//        else
//        {
//            if (l < target)
//            {
//                return QuickPart(nums, l + 1, end, target);
//            }
//            else
//            {
//                return QuickPart(nums, begin, l - 1, target);
//            }
//        }
//    }
//
//    int findKthLargest(vector<int>& nums, int k) {
//        srand(time(0));
//        int res = QuickPart(nums, 0, nums.size() - 1, nums.size() - k);
//        return res;
//    }
//};


//class myHeap// 大根堆
//{
//public:
//    myHeap(vector<int>& _nums)
//        : nums(_nums)
//        , n(_nums.size())
//    {
//        for (int i = (nums.size() - 1 - 1) / 2; i >= 0; i--)
//        {
//            adjustdown(i);
//        }
//    }
//
//    void adjustdown(int x)
//    {
//        while (x <= (n - 1) / 2)
//        {
//            int child = 2 * x + 1;
//            if (child >= n) break;
//            if (child + 1 <= n - 1 && nums[child] < nums[child + 1])
//            {
//                child++;
//            }
//            if (nums[x] < nums[child])
//            {
//                swap(nums[x], nums[child]);
//            }
//            else
//            {
//                break;
//            }
//            x = child;
//        }
//    }
//
//    int top()
//    {
//        return nums[0];
//    }
//
//    void pop()
//    {
//        swap(nums[0], nums[n - 1]);
//        n--;
//        adjustdown(0);
//    }
//private:
//    vector<int>& nums;
//    int n;
//};
//
//
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        myHeap hp(nums);
//        while (--k)
//        {
//            hp.pop();
//        }
//        return hp.top();
//    }
//};

// 最大正方形
//class Solution {
//public:
//    int maximalSquare(vector<vector<char>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (matrix[i][0] == '1')
//            {
//                dp[i][0] = 1;
//                res = 1;
//            }
//        }
//        for (int j = 0; j < m; j++)
//        {
//            if (matrix[0][j] == '1')
//            {
//                dp[0][j] = 1;
//                res = 1;
//            }
//        }
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 1; j < m; j++)
//            {
//                if (matrix[i][j] == '1' && matrix[i - 1][j - 1] == '1')
//                {
//                    int len = sqrt(dp[i - 1][j - 1]);
//                    int del = 1;
//                    int tmp = 1;
//                    for (; del <= len; del++)
//                    {
//                        if (matrix[i - del][j] == '1' && matrix[i][j - del] == '1')
//                        {
//                            tmp = (del + 1) * (del + 1);
//                        }
//                        else
//                        {
//                            break;
//                        }
//                    }
//                    if (del == len + 1)
//                    {
//                        dp[i][j] = (sqrt(dp[i - 1][j - 1]) + 1) * (sqrt(dp[i - 1][j - 1]) + 1);
//                    }
//                    else
//                    {
//                        dp[i][j] = tmp;
//                    }
//                }
//                else
//                {
//                    dp[i][j] = matrix[i][j] - '0';
//                }
//                res = max(res, dp[i][j]);
//            }
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int maximalSquare(vector<vector<char>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        vector<vector<int>> dp(n, vector<int>(m));
//        int res = 0;
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < m; j++)
//            {
//                if (i == 0 || j == 0)
//                {
//                    dp[i][j] = matrix[i][j] - '0';
//                    res = max(dp[i][j], res);
//                    continue;
//                }
//                if (matrix[i][j] == '1')
//                {
//                    int Min = min(dp[i - 1][j - 1], min(dp[i - 1][j], dp[i][j - 1]));
//                    dp[i][j] = (sqrt(Min) + 1) * (sqrt(Min) + 1);
//                }
//                res = max(res, dp[i][j]);
//            }
//        }
//        return res;
//    }
//};



// 回文链表
//class Solution {
//public:
//    bool isPalindrome(ListNode* head) {
//        ListNode* slow = head, * fast = head, * pre = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            pre = slow;
//            slow = slow->next;
//        }
//        pre->next = nullptr;
//
//        pre = slow;
//        slow = pre->next;
//        ListNode* next = nullptr;
//        if (slow)
//        {
//            next = slow->next;
//        }
//        pre->next = nullptr;
//        while (slow)
//        {
//            slow->next = pre;
//            pre = slow;
//            slow = next;
//            if (slow) next = slow->next;
//        }
//        slow = pre;
//        while (slow && head)
//        {
//            if (slow->val != head->val)
//            {
//                return false;
//            }
//            slow = slow->next;
//            head = head->next;
//        }
//        return true;
//    }
//};


