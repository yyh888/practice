#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode* left, TreeNode* right) : val(x), left(left), right(right) {}
    
};

bool cmp(const pair<int, int>& p1, const pair<int, int>& p2)
{
    return p1.second < p2.second;
}

    void Inorder(TreeNode* root, vector<pair<int, int>>& vv)
    {
        if (!root) return;
        Inorder(root->left, vv);
        if (!vv.empty() && root->val == vv.back().first)
            vv.back().second++;
        else
            vv.push_back(make_pair(root->val, 1));
        Inorder(root->right, vv);
    }

    vector<int> findMode(TreeNode* root) {
        vector<int> v;
        if (!root) return v;
        vector<pair<int, int>> vv;
        Inorder(root, vv);
        sort(vv.begin(), vv.end(), cmp);
        v.push_back(vv.back().first);
        int tmp = vv.back().second;
        vv.pop_back();
        while (!vv.empty() && tmp == vv.back().second)
        {
            v.push_back(vv.back().first);
            vv.pop_back();
        }
        return v;
    }

int main()
{
    TreeNode* node = new TreeNode(1);
    node->left = new TreeNode(2);
    node->left->left = new TreeNode(2);
    vector<int> v = findMode(node);
    for (auto e : v) cout << e << " ";
    return 0;
}