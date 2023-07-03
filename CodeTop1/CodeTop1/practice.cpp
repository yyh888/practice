// 无重复字符的最长子串
//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        unordered_map<int, int> hash;
//        int res = 0;
//        int i = 0, j = 0;
//        int n = s.size();
//        while (j < n)
//        {
//            hash[s[j]]++;
//            while (i < j && hash[s[j]] > 1)
//            {
//                hash[s[i]]--;
//                i++;
//            }
//            res = max(res, j - i + 1);
//            j++;
//        }
//        return res;
//    }
//};


// 重建二叉树
//class Solution {
//public:
//    vector<int> pre;
//    vector<int> in;
//    int n;
//
//    TreeNode* dfs(int& idx, int begin, int end)
//    {
//        if (idx >= n || begin > end) return nullptr;
//        // 找根
//        int i = begin;
//        for (; i <= end; i++)
//        {
//            if (in[i] == pre[idx]) break;
//        }
//        TreeNode* root = new TreeNode(pre[idx++]);
//        root->left = dfs(idx, begin, i - 1);
//        root->right = dfs(idx, i + 1, end);
//        return root;
//    }
//
//    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
//        n = preorder.size();
//        pre = preorder;
//        in = inorder;
//        int i = 0;
//        return dfs(i, 0, n - 1);
//    }
//};


// LRU 缓存
//class LRUCache {
//public:
//    struct node
//    {
//        node(int key = 0, int val = 0)
//            : _key(key)
//            , _val(val)
//        {}
//        int _key;
//        int _val;
//        struct node* next = nullptr;
//        struct node* prev = nullptr;
//    };
//
//    unordered_map<int, node*> hash;
//    node* head;
//    int cap;
//    int size = 0;
//
//    LRUCache(int capacity) {
//        head = new node;
//        head->next = head;
//        head->prev = head;
//        // 不常用的放尾部
//        cap = capacity;
//    }
//
//    // 把节点移动到头部
//    void move(node* p)
//    {
//        p->next = head->next;
//        head->next = p;
//        p->prev = head;
//        p->next->prev = p;
//    }
//
//    // 删除节点
//    void del(node* n)
//    {
//        n->prev->next = n->next;
//        n->next->prev = n->prev;
//    }
//
//    int get(int key) {
//        if (!hash.count(key))
//        {
//            return -1;
//        }
//        else
//        {
//            node* n = hash[key];
//            del(n);
//            move(n);
//            return hash[key]->_val;
//        }
//    }
//
//    void put(int key, int value) {
//        if (hash.count(key))
//        {
//            node* n = hash[key];
//            del(n);
//            n->_val = value;
//            move(n);
//        }
//        else
//        {
//            if (size == cap)
//            {
//                hash.erase(head->prev->_key);
//                del(head->prev);
//                node* n = new node(key, value);
//                move(n);
//                hash[key] = n;
//            }
//            else
//            {
//                node* n = new node(key, value);
//                move(n);
//                hash[key] = n;
//                size++;
//            }
//        }
//    }
//};


//class LRUCache {
//public:
//    struct node
//    {
//        node(int key = 0, int val = 0)
//            : _key(key)
//            , _val(val)
//        {}
//        int _key;
//        int _val;
//        struct node* next = nullptr;
//        struct node* prev = nullptr;
//    };
//
//    unordered_map<int, node*> hash;
//    node* head;
//    int cap;
//    int size = 0;
//
//    LRUCache(int capacity) {
//        head = new node;
//        head->next = head;
//        head->prev = head;
//        // 不常用的放尾部
//        cap = capacity;
//    }
//
//    // 把节点移动到头部
//    void move(node* p)
//    {
//        p->next = head->next;
//        head->next = p;
//        p->prev = head;
//        p->next->prev = p;
//    }
//
//    // 删除节点
//    void del(node* n)
//    {
//        n->prev->next = n->next;
//        n->next->prev = n->prev;
//    }
//
//    int get(int key) {
//        if (!hash.count(key))
//        {
//            return -1;
//        }
//        else
//        {
//            node* n = hash[key];
//            del(n);
//            move(n);
//            return hash[key]->_val;
//        }
//    }
//
//    void put(int key, int value) {
//        if (hash.count(key))
//        {
//            node* n = hash[key];
//            del(n);
//            n->_val = value;
//            move(n);
//        }
//        else
//        {
//            if (size == cap)
//            {
//                node* n = head->prev;
//                hash.erase(n->_key);
//                n->_key = key;
//                n->_val = value;
//                del(n);
//                move(n);
//                hash[key] = n;
//            }
//            else
//            {
//                node* n = new node(key, value);
//                move(n);
//                hash[key] = n;
//                size++;
//            }
//        }
//    }
//};


// K 个一组翻转链表
//class Solution {
//public:
//    ListNode* reverse(ListNode* head, ListNode* tail)
//    {
//        if (head == tail || head->next == tail)
//        {
//            return head;
//        }
//        ListNode* tmp = reverse(head->next, tail);
//        head->next->next = head;
//        head->next = tail;
//        return tmp;
//    }
//
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        ListNode* pHead = new ListNode;
//        ListNode* cur = head, * tail = head;
//        ListNode* pre = pHead;
//        while (tail)
//        {
//            int cnt = k;
//            while (tail && --cnt)
//            {
//                tail = tail->next;
//            }
//            if (tail)
//            {
//                pre->next = reverse(cur, tail->next);
//                pre = cur;
//                cur = tail = pre->next;
//            }
//        }
//        return pHead->next;
//    }
//};