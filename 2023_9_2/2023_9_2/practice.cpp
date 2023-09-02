#include <iostream>

using namespace std;

//class Solution {
//public:
//    void sortColors(vector<int>& nums) {
//        int n = nums.size();
//        int p0 = 0, p1 = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (nums[i] == 0)
//            {
//                swap(nums[p0], nums[i]);
//                if (p1 > p0) swap(nums[i], nums[p1]);
//                p0++;
//                p1++;
//            }
//            else if (nums[i] == 1)
//            {
//                swap(nums[i], nums[p1++]);
//            }
//        }
//    }
//};

//
//#include <bits/stdc++.h>
//using namespace std;
//
//void Reverse(vector<int>& nums, int l, int r)
//{
//    while (l < r)
//    {
//        swap(nums[l], nums[r]);
//        l++;
//        r--;
//    }
//}
//
//int main()
//{
//    int n, m;
//    cin >> n >> m;
//    vector<int> nums(n);
//    for (int i = 0; i < n; i++)
//    {
//        cin >> nums[i];
//    }
//    m = m % n;
//    Reverse(nums, 0, n - m - 1);
//    Reverse(nums, n - m, n - 1);
//    reverse(nums.begin(), nums.end());
//    for (auto& e : nums) cout << e << " ";
//    return 0;
//}


//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int n = height.size();
//        int left = 0, right = n - 1;
//        int leftMax = height[0], rightMax = height[n - 1];
//        int sum = 0;
//        while (left < right)
//        {
//            if (height[left] < height[right])
//            {
//                leftMax = max(leftMax, height[left]);
//                sum += leftMax - height[left];
//                left++;
//            }
//            else
//            {
//                rightMax = max(rightMax, height[right]);
//                sum += rightMax - height[right];
//                right--;
//            }
//        }
//        return sum;
//    }
//};



//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int n = height.size();
//        stack<int> st;
//        int sum = 0;
//        for (int i = 0; i < n; i++)
//        {
//            while (st.size() && height[st.top()] < height[i])
//            {
//                int mid = st.top();
//                st.pop();
//                if (st.size() && height[st.top()] > height[mid])
//                {
//                    int h = min(height[st.top()], height[i]) - height[mid];
//                    int l = i - st.top() - 1;
//                    sum += h * l;
//                }
//            }
//            st.push(i);
//        }
//        return sum;
//    }
//};



//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int n = nums.size();
//        deque<int> dq;
//        vector<int> res;
//        for (int i = 0; i < n; i++)
//        {
//            while (dq.size() && nums[i] >= nums[dq.back()])
//            {
//                dq.pop_back();
//            }
//            while (dq.size() && i - dq.front() >= k)
//            {
//                dq.pop_front();
//            }
//            dq.push_back(i);
//            if (i >= k - 1) res.push_back(nums[dq.front()]);
//        }
//        return res;
//    }
//};


//class A
//{
//public:
//	A()
//	{
//		cout << "A()" << endl;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//	}
//	int a;
//	int b;
//};
//
//int main()
//{
//	A* p = new A[2];
//	delete p;
//	return 0;
//}


//class A
//{
//public:
//	A()
//		: p(new int(100))
//	{}
//
//
//	A(const A& a)
//		: p(new int(*a.p))
//	{
//		cout << "Éî¿½±´A(const A& a)" << endl;
//	}
//
//	A(A&& a)
//	{
//		swap(p, a.p);
//		cout << "Ç³¿½±´A(A&& a)" << endl;
//	}
//
//	~A()
//	{
//		delete[]p;
//	}
//
//	int* p;
//};
//
//int main()
//{
//	A a;
//	A b(move(a));
//	cout << *b.p << endl;
//	return 0;
//}