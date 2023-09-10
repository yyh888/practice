#include <iostream>

using namespace std;

//int main()
//{
//	static int hot = 200;
//	int& rad = hot;
//	hot += 100;
//	cout << rad;
//	return 0;
//}


struct A
{
	int a1;
public:
	A(int x = 2) :a1(x) {}
	void f1() { cout << a1; }
	friend A operator++(A& p) { ++p.a1; return p; }
};

int main()
{
	A obj1;
	(++obj1).f1();
	operator++(obj1).f1();
	(obj1++).f1();
	return 0;
}


//
//class Solution {
//public:
//    typedef pair<TreeNode*, bool> PTB;
//
//    vector<int> postorderTraversal(TreeNode* root) {
//        vector<int> res;
//        stack<PTB> st;
//        TreeNode* cur = root;
//        while (st.size() || cur)
//        {
//            while (cur)
//            {
//                st.push({ cur, false });
//                cur = cur->left;
//            }
//            PTB tmp = st.top();
//            if (tmp.second)
//            {
//                st.pop();
//                res.push_back(tmp.first->val);
//                cur = nullptr;
//            }
//            else
//            {
//                st.top().second = true;
//                cur = tmp.first->right;
//            }
//        }
//        return res;
//    }
//};

//class Solution {
//public:
//    int n;
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(vector<int>& nums, int i)
//    {
//        if (i == nums.size())
//        {
//            res.push_back(tmp);
//            return;
//        }
//        // ¼Ó
//        tmp.push_back(nums[i]);
//        dfs(nums, i + 1);
//        tmp.pop_back();
//        // ²»¼Ó
//        dfs(nums, i + 1);
//    }
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        dfs(nums, 0);
//        return res;
//    }
//};


//class Solution {
//public:
//    void Reverse(vector<int>& nums, int l, int r)
//    {
//        while (l < r)
//        {
//            swap(nums[l], nums[r]);
//            l++;
//            r--;
//        }
//    }
//
//    void rotate(vector<int>& nums, int k) {
//        int n = nums.size();
//        k %= n;
//        Reverse(nums, 0, n - k - 1);
//        Reverse(nums, n - k, n - 1);
//        Reverse(nums, 0, n - 1);
//    }
//};


