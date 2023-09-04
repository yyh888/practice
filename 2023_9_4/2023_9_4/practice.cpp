#include <iostream>

using namespace std;

//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(3, -0x3f3f3f3f));// 买入
//        vector<vector<int>> g(n, vector<int>(3, -0x3f3f3f3f));// 卖出
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < 3; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j > 0)
//                {
//                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//        return max(g[n - 1][0], max(g[n - 1][1], g[n - 1][2]));
//    }
//};



//class Solution {
//public:
//    int maxProfit(int k, vector<int>& prices) {
//        int n = prices.size();
//        vector<vector<int>> f(n, vector<int>(k + 1, -0x3f3f3f3f));// 买入
//        vector<vector<int>> g(n, vector<int>(k + 1, -0x3f3f3f3f));// 卖出
//        f[0][0] = -prices[0];
//        g[0][0] = 0;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j <= k; j++)
//            {
//                f[i][j] = max(f[i - 1][j], g[i - 1][j] - prices[i]);
//                if (j > 0)
//                {
//                    g[i][j] = max(g[i - 1][j], f[i - 1][j - 1] + prices[i]);
//                }
//                else
//                {
//                    g[i][j] = g[i - 1][j];
//                }
//            }
//        }
//        int Max = 0;
//        for (int i = 0; i <= k; i++)
//        {
//            Max = max(Max, g[n - 1][i]);
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int tot = nums1.size() + nums2.size();
//        if (tot % 2 == 0)
//        {
//            int l = find(nums1, 0, nums2, 0, tot / 2);
//            int r = find(nums1, 0, nums2, 0, tot / 2 + 1);
//            return (l + r) / 2.0;
//        }
//        else
//        {
//            return find(nums1, 0, nums2, 0, tot / 2 + 1) / 1.0;
//        }
//    }
//
//    int find(vector<int>& nums1, int i, vector<int>& nums2, int j, int k)
//    {
//        if (nums2.size() - j < nums1.size() - i) return find(nums2, j, nums1, i, k);
//        if (k == 1)
//        {
//            if (i == nums1.size())
//            {
//                return nums2[j];
//            }
//            else return min(nums1[i], nums2[j]);
//        }
//        if (i == nums1.size())
//        {
//            return nums2[j + k - 1];
//        }
//        int si = min((int)nums1.size(), i + k / 2), sj = j + k / 2;
//        if (nums1[si - 1] < nums2[sj - 1])
//        {
//            return find(nums1, si, nums2, j, k - si + i);
//        }
//        else
//        {
//            return find(nums1, i, nums2, sj, k - sj + j);
//        }
//    }
//};

//typedef int (*ADD)(int x, int y);
//
//int Add(int x, int y)
//{
//	return x + y;
//}
//
//void fun(ADD p)
//{
//	cout << p(1, 2);
//}
//
//int main()
//{
//	fun(Add);
//	return 0;
//}


//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        if (!headA || !headB) return nullptr;
//        ListNode* cur1 = headA, * cur2 = headB;
//        while (cur1 != cur2)
//        {
//            cur1 = cur1 == nullptr ? headB : cur1->next;
//            cur2 = cur2 == nullptr ? headA : cur2->next;
//        }
//        return cur1;
//    }
//};



//class A
//{
//public:
//	virtual void fun()
//	{
//		cout << "A" << endl;
//	}
//private:
//
//};
//
//
//class B : public A
//{
//public:
//private:
//	virtual void fun()
//	{
//		cout << "B" << endl;
//	}
//};
//
//
//int main()
//{
//	B b;
//	A* p = &b;
//	p->fun();
//	return 0;
//}


//int main()
//{
//	int a[4][5] = { {1, 2}, {3, 4, 5} };
//	cout << a[1][1];
//	return 0;
//}


//class Solution {
//public:
//    vector<int> twoSum(vector<int>& numbers, int target) {
//        int n = numbers.size();
//        for (int i = 0; i < n; i++)
//        {
//            int l = i + 1, r = n - 1;
//            while (l <= r)
//            {
//                int mid = (l + r) / 2;
//                if (numbers[i] + numbers[mid] == target)
//                {
//                    return { i, mid };
//                }
//                else if (numbers[i] + numbers[mid] < target)
//                {
//                    l = mid + 1;
//                }
//                else r = mid - 1;
//            }
//        }
//        return { -1, -1 };
//    }
//};



