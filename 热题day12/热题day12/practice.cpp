// 二叉树中的最大路径和
//class Solution {
//public:
//    int Max = INT_MIN;
//
//    int dfs(TreeNode* root)
//    {
//        if (root == nullptr)
//        {
//            return 0;
//        }
//        int left = max(dfs(root->left), 0);
//        int right = max(dfs(root->right), 0);
//        int ret = root->val + left + right;
//        Max = max(Max, ret);
//        return root->val + max(left, right);
//    }
//
//    int maxPathSum(TreeNode* root) {
//        dfs(root);
//        return Max;
//    }
//};


// 最长连续序列
//class Solution {
//public:
//    int longestConsecutive(vector<int>& nums) {
//        set<int> num_set;
//        for (int& val : nums)
//        {
//            num_set.insert(val);
//        }
//        int res = 0;
//        for (auto& num : nums)
//        {
//            if (!num_set.count(num - 1))
//            {
//                int restmp = 1;
//                int numtmp = num;
//                while (num_set.count(numtmp + 1))
//                {
//                    restmp++;
//                    numtmp++;
//                }
//                res = max(res, restmp);
//            }
//        }
//        return res;
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
//            if (dp[i])
//            {
//                for (string& str : wordDict)
//                {
//                    if (s.substr(i, str.size()) == str)
//                    {
//                        dp[i + str.size()] = true;
//                    }
//                }
//            }
//        }
//        return dp[n];
//    }
//};


//class Solution {
//public:
//    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
//        int n = nums.size(), m = divisors.size();
//        int res = divisors[0];// 记录最小的数
//        int Max = 0;
//        for (int i = 0; i < m; i++)
//        {
//            int ret = 0;
//            for (int j = 0; j < n; j++)
//            {
//                if (nums[j] % divisors[i] == 0)
//                {
//                    ret++;
//                }
//            }
//            if (ret > Max)
//            {
//                Max = ret;
//                res = divisors[i];
//            }
//            else if (ret == Max)
//            {
//                res = min(res, divisors[i]);
//            }
//        }
//        return res;
//    }
//};


// LRU 缓存
//struct DListNode
//{
//    DListNode(int key = 0, int val = 0)
//        : _key(key)
//        , _val(val)
//        , _prev(nullptr)
//        , _next(nullptr)
//    {}
//
//    DListNode* _next;
//    DListNode* _prev;
//    int _key, _val;
//};
//
//
//class LRUCache {
//private:
//    unordered_map<int, DListNode*> hash;
//    int _cap;
//    int _size;
//    DListNode* _head;// 头节点
//
//public:
//    LRUCache(int capacity) {
//        // 初始化链表
//        _head = new DListNode;
//        _head->_prev = _head;
//        _head->_next = _head;
//        _cap = capacity;
//        _size = 0;
//    }
//
//    int get(int key) {
//        if (hash.count(key))
//        {
//            // 放到头
//            DListNode* node = hash[key];
//            removeNode(node);
//            add_head(node);
//            return node->_val;
//        }
//        else
//        {
//            return -1;
//        }
//    }
//
//    void put(int key, int value) {
//        if (hash.count(key))// 存在
//        {
//            DListNode* node = hash[key];
//            node->_val = value;
//            removeNode(node);
//            add_head(node);
//            return;
//        }
//        if (_size == _cap)// 满了删除尾部
//        {
//            DListNode* node = _head->_prev;
//            remove_tail();
//            hash.erase(node->_key);
//            delete node;
//            _size--;
//        }
//        // 头插
//        DListNode* node = new DListNode(key, value);
//        add_head(node);
//        hash[key] = node;
//        _size++;
//    }
//
//    void add_head(DListNode* node)
//    {
//        DListNode* next = _head->_next;
//        _head->_next = node;
//        node->_prev = _head;
//        node->_next = next;
//        next->_prev = node;
//    }
//
//    void remove_tail()
//    {
//        DListNode* tail = _head->_prev, * prev = tail->_prev;
//        _head->_prev = prev;
//        prev->_next = _head;
//    }
//
//    void removeNode(DListNode* node) {
//        node->_prev->_next = node->_next;
//        node->_next->_prev = node->_prev;
//    }
//};

/**
 * Your LRUCache object will be instantiated and called as such:
 * LRUCache* obj = new LRUCache(capacity);
 * int param_1 = obj->get(key);
 * obj->put(key,value);
 */


