// 合并排序链表
//class Solution {
//public:
//    ListNode* Merge(ListNode* l1, ListNode* l2)
//    {
//        ListNode* pHead = new ListNode;
//        ListNode* cur = pHead;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                cur->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                cur->next = l2;
//                l2 = l2->next;
//            }
//            cur = cur->next;
//        }
//        cur->next = l1 ? l1 : l2;
//        return pHead->next;
//    }
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        int n = lists.size();
//        if (n == 0) return nullptr;
//        for (int i = 1; i < n; i++)
//        {
//            lists[i] = Merge(lists[i - 1], lists[i]);
//        }
//        return lists[n - 1];
//    }
//};


//class Solution {
//public:
//    ListNode* Merge(ListNode* l1, ListNode* l2)
//    {
//        ListNode* pHead = new ListNode;
//        ListNode* cur = pHead;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                cur->next = l1;
//                l1 = l1->next;
//            }
//            else
//            {
//                cur->next = l2;
//                l2 = l2->next;
//            }
//            cur = cur->next;
//        }
//        cur->next = l1 ? l1 : l2;
//        return pHead->next;
//    }
//
//    ListNode* MergeSort(vector<ListNode*>& lists, int l, int r)
//    {
//        if (l == r) return lists[l];
//        if (l > r) return nullptr;
//        int mid = (l + r) >> 1;
//        return Merge(MergeSort(lists, l, mid), MergeSort(lists, mid + 1, r));
//    }
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        return MergeSort(lists, 0, lists.size() - 1);
//    }
//};


// 所有子集
//class Solution {
//public:
//    vector<vector<int>> res;
//
//    void dfs(vector<int>& nums, int i, vector<int> v)
//    {
//        if (i == nums.size())
//        {
//            res.push_back(v);
//            return;
//        }
//        // 不加
//        dfs(nums, i + 1, v);
//        // 加
//        v.push_back(nums[i]);
//        dfs(nums, i + 1, v);
//        v.pop_back();
//    }
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        vector<int> v;
//        dfs(nums, 0, v);
//        return res;
//    }
//};


// 含有 k 个元素的组合
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//    void dfs(int n, int i, int k)
//    {
//        if (i > n) return;
//        if (v.size() > k) return;
//        // 不加
//        dfs(n, i + 1, k);
//        // 加
//        v.push_back(i);
//        if (v.size() == k)
//        {
//            res.push_back(v);
//        }
//        dfs(n, i + 1, k);
//        v.pop_back();
//    }
//
//    vector<vector<int>> combine(int n, int k) {
//        dfs(n, 1, k);
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//    void dfs(int n, int begin, int k)
//    {
//        if (v.size() == k)
//        {
//            res.push_back(v);
//            return;
//        }
//        for (int i = begin; i <= n; i++)
//        {
//            v.push_back(i);
//            dfs(n, i + 1, k);
//            v.pop_back();
//        }
//    }
//
//    vector<vector<int>> combine(int n, int k) {
//        dfs(n, 1, k);
//        return res;
//    }
//};


// 允许重复选择元素的组合
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//
//    void dfs(vector<int>& a, int begin, int target)
//    {
//        if (target < 0) return;
//        if (begin >= a.size()) return;
//        if (target == 0)
//        {
//            res.push_back(v);
//            return;
//        }
//        for (int i = begin; i < a.size(); i++)
//        {
//            // 不跳
//            v.push_back(a[i]);
//            dfs(a, i, target - a[i]);
//            v.pop_back();
//        }
//    }
//
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        dfs(candidates, 0, target);
//        return res;
//    }
//};


//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> v;
//
//    void dfs(vector<int>& a, int idx, int target)
//    {
//        if (target < 0) return;
//        if (idx >= a.size()) return;
//        if (target == 0)
//        {
//            res.push_back(v);
//            return;
//        }
//        // 跳过
//        dfs(a, idx + 1, target);
//        // 不跳
//        v.push_back(a[idx]);
//        dfs(a, idx, target - a[idx]);
//        v.pop_back();
//    }
//
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        dfs(candidates, 0, target);
//        return res;
//    }
//};


