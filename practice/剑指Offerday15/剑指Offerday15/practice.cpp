#include <iostream>
#include <string>
using namespace std;

// 二叉搜索树与双向链表
//class Solution {
//public:
//    void Creat(vector<Node*>& v, Node* root)
//    {
//        if (root == nullptr)
//        {
//            return;
//        }
//        Creat(v, root->left);
//        v.push_back(root);
//        Creat(v, root->right);
//    }
//
//    Node* treeToDoublyList(Node* root) {
//        if (!root) return nullptr;
//        vector<Node*> v;
//        Creat(v, root);
//        v[0]->left = v[v.size() - 1];
//        v[v.size() - 1]->right = v[0];
//        for (int i = 0; i < v.size() - 1; i++)
//        {
//            v[i]->right = v[i + 1];
//            v[i + 1]->left = v[i];
//        }
//        return v[0];
//    }
//};

//class Solution {
//public:
//    Node* pre, * head;
//    Node* treeToDoublyList(Node* root) {
//        if (!root)
//        {
//            return nullptr;
//        }
//        dfs(root);
//        head->left = pre;
//        pre->right = head;
//        return head;
//    }
//
//    void dfs(Node* cur)
//    {
//        if (!cur)
//        {
//            return;
//        }
//        dfs(cur->left);
//        if (!pre)
//        {
//            head = cur;
//        }
//        else
//        {
//            pre->right = cur;
//        }
//        cur->left = pre;
//        pre = cur;
//        dfs(cur->right);
//    }
//};

int main()
{
	int a = -1;
	cout << to_string(a) << endl;
	return 0;
}