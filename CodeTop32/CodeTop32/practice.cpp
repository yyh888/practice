// �����е�����k���ڵ�
//class Solution {
//public:
//    ListNode* getKthFromEnd(ListNode* head, int k) {
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* slow = head, * fast = head;
//        ListNode* pre = pHead;
//        while (k--)
//        {
//            fast = fast->next;
//        }
//        while (fast)
//        {
//            pre = slow;
//            fast = fast->next;
//            slow = slow->next;
//        }
//        return pre->next;
//    }
//};


// ǰ K ����ƵԪ��
//class Solution {
//public:
//    typedef pair<int, int> PII;
//
//    static bool cmp(const PII& p1, const PII& p2)
//    {
//        return p1.second < p2.second;
//    }
//
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (auto& e : nums)
//        {
//            hash[e]++;
//        }
//        priority_queue<PII, vector<PII>, decltype(&cmp)> pq(&cmp);
//        for (auto& e : hash)
//        {
//            pq.push({ e.first, e.second });
//        }
//        vector<int> res;
//        while (k--)
//        {
//            res.push_back(pq.top().first);
//            pq.pop();
//        }
//        return res;
//    }
//};


// �������к�Ϊĳһֵ��·��
//class Solution {
//public:
//    vector<int> tmp;
//    vector<vector<int>> res;
//
//    void dfs(TreeNode* root, int target, int cur)
//    {
//        if (root == nullptr) return;
//        cur += root->val;
//        tmp.push_back(root->val);
//        if (root->left == nullptr && root->right == nullptr)
//        {
//            if (cur == target)
//            {
//                res.push_back(tmp);
//            }
//        }
//        dfs(root->left, target, cur);
//        dfs(root->right, target, cur);
//        tmp.pop_back();
//        cur -= root->val;
//    }
//
//    vector<vector<int>> pathSum(TreeNode* root, int target) {
//        dfs(root, target, 0);
//        return res;
//    }
//};