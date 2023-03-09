// �����������ĺ���������У��������к�Ϊĳһֵ��·������������ĸ���
//class Solution {
//public:
//    bool _isTree(vector<int>& v, int l, int r)
//    {
//        if (l >= r) return true;
//        // ��������
//        int mid = r;
//        while (mid >= l)
//        {
//            if (v[mid] < v[r])
//            {
//                break;
//            }
//            mid--;
//        }
//        // ���������
//        for (int i = 0; i <= mid; i++)
//        {
//            if (v[i] > v[r])
//            {
//                return false;
//            }
//        }
//        return _isTree(v, l, mid) && _isTree(v, mid + 1, r - 1);
//    }
//
//    bool verifyPostorder(vector<int>& postorder) {
//        return _isTree(postorder, 0, postorder.size() - 1);
//    }
//};

// �������к�Ϊĳһֵ��·��
//class Solution {
//public:
//    void dfs(vector<int>& v, vector<vector<int>>& vv, TreeNode* root, int& k, int target)
//    {
//        if (root == nullptr) return;
//        k += root->val;
//        v.push_back(root->val);
//        if (k == target && !root->left && !root->right)
//        {
//            vv.push_back(v);
//        }
//        dfs(v, vv, root->left, k, target);
//        dfs(v, vv, root->right, k, target);
//        v.pop_back();
//        k -= root->val;
//    }
//
//    vector<vector<int>> pathSum(TreeNode* root, int target) {
//        vector<vector<int>> vv;
//        vector<int> v;
//        int k = 0;
//        dfs(v, vv, root, k, target);
//        return vv;
//    }
//};

// ��������ĸ���
//class Solution {
//public:
//    Node* copyRandomList(Node* head) {
//        if (head == nullptr)
//        {
//            return nullptr;
//        }
//        unordered_map<Node*, Node*> hash;
//        Node* cur = head;
//        while (cur)
//        {
//            hash[cur] = new Node(cur->val);
//            cur = cur->next;
//        }
//        // ��������
//        cur = head;
//        while (cur)
//        {
//            hash[cur]->next = hash[cur->next];
//            hash[cur]->random = hash[cur->random];
//            cur = cur->next;
//        }
//        return hash[head];
//    }
//};


