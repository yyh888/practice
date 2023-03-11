// 序列化二叉树
//class Codec {
//public:
//
//    // Encodes a tree to a single string.
//    string serialize(TreeNode* root) {
//        if (!root)
//        {
//            return "N,";
//        }
//        string ret = to_string(root->val);
//        ret += ",";
//        ret += serialize(root->left);
//        ret += serialize(root->right);
//        return ret;
//    }
//
//    TreeNode* dfs(list<string>& lt)
//    {
//        if (lt.front() == "N")
//        {
//            lt.erase(lt.begin());
//            return nullptr;
//        }
//        TreeNode* node = new TreeNode(stoi(lt.front()));
//        lt.erase(lt.begin());
//        node->left = dfs(lt);
//        node->right = dfs(lt);
//        return node;
//    }
//
//    // Decodes your encoded data to tree.
//    TreeNode* deserialize(string data) {
//        list<string> lt;
//        string s;
//        for (auto& e : data)
//        {
//            if (e == ',')
//            {
//                lt.push_back(s);
//                s.clear();
//            }
//            else
//            {
//                s += e;
//            }
//        }
//        if (!s.empty())
//        {
//            lt.push_back(s);
//        }
//        return dfs(lt);
//    }
//};

//#include <iostream>
//#include <set>
//#include <string>
//
//using namespace std;
//
//int main()
//{
//	string s = "abcdef";
//	cout << typeid(s[0]).name() << endl;
//	return 0;
//}

// 字符串的排列
//class Solution {
//public:
//    vector<string> res;
//    vector<string> permutation(string s) {
//        dfs(s, 0);
//        return res;
//    }
//
//    void dfs(string s, int x)
//    {
//        if (x >= s.size() - 1)
//        {
//            res.push_back(s);
//            return;
//        }
//        unordered_set<char> st;
//        for (int i = x; i < s.size(); i++)
//        {
//            if (st.find(s[i]) != st.end()) continue;// 剪枝
//            st.insert(s[i]);
//            swap(s[i], s[x]);
//            dfs(s, x + 1);
//            swap(s[i], s[x]);
//        }
//    }
//};


// 数组中出现次数超过一半的数字
//class Solution {
//public:
//    int majorityElement(vector<int>& nums) {
//        unordered_map<int, int> hash;
//        for (int& e : nums)
//        {
//            hash[e]++;
//        }
//        int res = nums[0];
//        for (auto e : hash)
//        {
//            if (e.second > nums.size() / 2)
//                res = e.first;
//        }
//        return res;
//    }
//};

