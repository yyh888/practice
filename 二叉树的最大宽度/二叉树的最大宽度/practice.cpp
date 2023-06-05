// 二叉树最大宽度
//class Solution {
//public:
//    unordered_map<long long, long long> hash;
//    int ans = 0;
//
//    void dfs(TreeNode* root, long long u, int depth)
//    {
//        if (root == nullptr) return;
//        if (!hash.count(depth)) hash.insert({ depth, u });
//        ans = max(ans, (int)(u - hash[depth] + 1));
//        u = 1 + (u - hash[depth]);
//        dfs(root->left, u * 2, depth + 1);
//        dfs(root->right, u * 2 + 1, depth + 1);
//    }
//
//    int widthOfBinaryTree(TreeNode* root) {
//        dfs(root, 1, 0);
//        return ans;
//    }
//};


//class Solution {
//public:
//    unordered_map<TreeNode*, long long> hash;
//    queue<TreeNode*> qq;
//    int ans = 0;
//
//    int widthOfBinaryTree(TreeNode* root) {
//        qq.push(root);
//        hash.insert({ root, 1 });
//        int levelsize = 1;
//        while (qq.size())
//        {
//            long long start = hash[qq.front()];
//            long long end;
//            while (levelsize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                end = hash[tmp];
//                long long u = end - start + 1;
//                if (tmp->left)
//                {
//                    qq.push(tmp->left);
//                    hash.insert({ tmp->left, 2 * u });
//                }
//                if (tmp->right)
//                {
//                    qq.push(tmp->right);
//                    hash.insert({ tmp->right, 2 * u + 1 });
//                }
//            }
//            levelsize = qq.size();
//            ans = max(ans, (int)(end - start + 1));
//        }
//        return ans;
//    }
//};