#include <iostream>
#include <vector>
#include <mutex>
#include <thread>

using namespace std;
//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int n = nums.size();
//        vector<int> res;
//        deque<int> dq;
//        for (int i = 0, j = 0; i < n; i++)
//        {
//            while (dq.size() && i - dq.front() >= k)
//            {
//                dq.pop_front();
//            }
//            while (dq.size() && nums[i] >= nums[dq.back()])
//            {
//                dq.pop_back();
//            }
//            dq.push_back(i);
//            if (i >= k - 1) res.push_back(nums[dq.front()]);
//        }
//        return res;
//    }
//};


//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        int Max = INT_MIN;
//        vector<int> dp(n + 1);
//        for (int i = 1; i <= n; i++)
//        {
//            dp[i] = max(nums[i - 1], nums[i - 1] + dp[i - 1]);
//            Max = max(Max, dp[i]);
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    long long Min = LONG_MIN;
//
//    bool isValidBST(TreeNode* root) {
//        if (!root) return true;
//        if (!isValidBST(root->left)) return false;
//        if (root->val > Min) Min = root->val;
//        else return false;
//        if (!isValidBST(root->right)) return false;
//        return true;
//    }
//};


//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if (root->val < p->val && root->val < q->val)
//        {
//            return lowestCommonAncestor(root->right, p, q);
//        }
//        else if (root->val > p->val && root->val > q->val)
//        {
//            return lowestCommonAncestor(root->left, p, q);
//        }
//        else return root;
//    }
//};


//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        while (root)
//        {
//            if (root->val < p->val && root->val < q->val)
//            {
//                root = root->right;
//            }
//            else if (root->val > p->val && root->val > q->val)
//            {
//                root = root->left;
//            }
//            else return root;
//        }
//        return root;
//    }
//};

//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//};
//
//TreeNode* dfs(TreeNode* root, TreeNode* p, TreeNode* q)
//{
//	if (!root || root == p || root == q) return root;
//	TreeNode* left = dfs(root->left, p, q);
//	TreeNode* right = dfs(root->right, p, q);
//	if (left && right) return root;
//	if (left) return left;
//	else return right;
//}

//class Solution {
//public:
//    int threeSumClosest(vector<int>& nums, int target) {
//        sort(nums.begin(), nums.end());
//        int n = nums.size();
//        int res = 0x3f3f3f3f;
//        for (int i = 0; i < n - 2; i++)
//        {
//            int l = i + 1, r = n - 1;
//            while (l < r)
//            {
//                int val = nums[i] + nums[l] + nums[r];
//                if (abs(val - target) < abs(res - target))
//                {
//                    res = val;
//                }
//                if (val == target) return target;
//                else if (val < target)
//                {
//                    l++;
//                }
//                else
//                {
//                    r--;
//                }
//            }
//        }
//        return res;
//    }
//};



//int main()
//{
//	vector<int> v{ 1 };
//	vector<int>::iterator it = v.begin();
//	v.resize(100);
//	return 0;
//}

//class A
//{
//public:
//	virtual void fun(int a)
//	{
//		cout << "fun(int a)" << endl;
//	}
//
//	virtual void fun(double b)
//	{
//		cout << "fun(double b)" << endl;
//	}
//};

//mutex t1, t2;
//
//void thread1()
//{
//	t1.lock();
//	cout << "111111";
//	t2.lock();
//	cout << "222222";
//	t1.unlock();
//	t2.unlock();
//}
//
//int main()
//{
//	static int a[5] = { 1, 2, 3, 4, 5 };
//	thread t1(thread1);
//	t1.join();
//	return 0;
//}

void fun()
{
	int a[5] = { 1, 2, 3, 4, 5 };
}

void fun1()
{
	int a = 1;
	int b = 2;
}

int main()
{
	fun();
	fun1();
	fun();
	return 0;
}