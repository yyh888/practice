// 滑动窗口的平均值
//class MovingAverage {
//public:
//    deque<int> dq;
//    int _size;
//    double sum;
//    /** Initialize your data structure here. */
//    MovingAverage(int size) {
//        _size = size;
//    }
//
//    double next(int val) {
//        if (dq.size() == _size)
//        {
//            sum -= dq.front();
//            dq.pop_front();
//        }
//        dq.push_back(val);
//        sum += val;
//        return sum / dq.size();
//    }
//};


// 最近请求次数
//class RecentCounter {
//public:
//    queue<int> cnt;
//
//    RecentCounter() {
//
//    }
//
//    int ping(int t) {
//        cnt.push(t);
//        while (!cnt.empty() && cnt.front() + 3000 < t)
//        {
//            cnt.pop();
//        }
//        return cnt.size();
//    }
//};


// 往完全二叉树添加节点
//class CBTInserter {
//public:
//    TreeNode* _root;
//    int _size;
//    unordered_map<int, TreeNode*> hash;
//    int idx = 1;
//
//    CBTInserter(TreeNode* root) {
//        _root = root;
//        _size = Size(_root);
//        bfs(_root);
//    }
//
//    int insert(int v) {
//        int p = idx / 2;
//        TreeNode* node = hash[p];
//        TreeNode* newnode = new TreeNode(v);
//        if (node->left == nullptr)
//        {
//            node->left = newnode;
//        }
//        else
//        {
//            node->right = newnode;
//        }
//        hash[idx++] = newnode;
//        return node->val;
//    }
//
//    TreeNode* get_root() {
//        return _root;
//    }
//
//private:
//    int Size(TreeNode* root)
//    {
//        if (root == nullptr) return 0;
//        int sz = 1;
//        sz += Size(root->left);
//        sz += Size(root->right);
//        return sz;
//    }
//
//    void bfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        queue<TreeNode*> q;
//        q.push(root);
//        int levelsize = 1;
//        while (!q.empty())
//        {
//            while (levelsize--)
//            {
//                TreeNode* tmp = q.front();
//                hash[idx++] = tmp;
//                q.pop();
//                if (tmp->left) q.push(tmp->left);
//                if (tmp->right) q.push(tmp->right);
//            }
//            levelsize = q.size();
//        }
//    }
//};

