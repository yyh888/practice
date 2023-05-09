// 序列化与反序列化二叉树
//class Codec {
//public:
//    // Encodes a tree to a single string.
//    string serialize(TreeNode* root) {
//        if (root == nullptr) return "#,";
//        string res = to_string(root->val) + ',';
//        res += serialize(root->left);
//        res += serialize(root->right);
//        return res;
//    }
//
//    TreeNode* _deserialize(list<string>& lt)
//    {
//        if (lt.empty()) return nullptr;
//        string cur = lt.front();
//        lt.pop_front();
//        if (cur == "#") return nullptr;
//        TreeNode* node = new TreeNode(stoi(cur));
//        node->left = _deserialize(lt);
//        node->right = _deserialize(lt);
//        return node;
//    }
//
//    // Decodes your encoded data to tree.
//    TreeNode* deserialize(string data) {
//        cout << data << endl;
//        list<string> lt;
//        int n = data.size();
//        string tmp;
//        for (int i = 0; i < n; i++)
//        {
//            if (data[i] == ',')
//            {
//                lt.push_back(tmp);
//                tmp.clear();
//            }
//            else
//            {
//                tmp += data[i];
//            }
//        }
//        return _deserialize(lt);
//    }
//};


// 从根节点到叶节点的路径数字之和
//class Solution {
//public:
//    int sum;
//    string s;
//    void dfs(TreeNode* root)
//    {
//        if (root == nullptr) return;
//        if (!root->left && !root->right)
//        {
//            string cur = to_string(root->val);
//            s += cur;
//            sum += stoi(s);
//            s.pop_back();
//            return;
//        }
//        string cur = to_string(root->val);
//        s += cur;
//        dfs(root->left);
//        dfs(root->right);
//        s.pop_back();
//    }
//
//    int sumNumbers(TreeNode* root) {
//        dfs(root);
//        return sum;
//    }
//};


//class Solution {
//public:
//    int dfs(TreeNode* root, int pre)
//    {
//        if (root == nullptr) return 0;
//        int sum = pre * 10 + root->val;
//        if (!root->left && !root->right)
//        {
//            return sum;
//        }
//        else
//        {
//            return dfs(root->left, sum) + dfs(root->right, sum);
//        }
//    }
//
//    int sumNumbers(TreeNode* root) {
//        return dfs(root, 0);
//    }
//};


// 向下的路径节点之和
//class Solution {
//public:
//    unordered_map<long long, int> hash;
//    int num = 0;
//
//    void dfs(TreeNode* root, long long target, long long sum)
//    {
//        if (root == nullptr) return;
//        sum += root->val;
//        num += hash[sum - target];
//        hash[sum]++;
//        dfs(root->left, target, sum);
//        dfs(root->right, target, sum);
//        hash[sum]--;
//    }
//
//    int pathSum(TreeNode* root, int targetSum) {
//        hash[0] = 1;
//        dfs(root, targetSum, 0);
//        return num;
//    }
//};