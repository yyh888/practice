#include <iostream>
#include <stack>
#include <memory>
#include <vector>

using namespace std;

//struct Task
//{
//	int n;
//	char a = 'a';
//	char b = 'b';
//	char c = 'c';
//};
//
//class Hanno
//{
//public:
//	Hanno(int n)
//		: _n(n)
//	{}
//
//	void move(char x, char y)
//	{
//		cnt++;
//		cout << x << "->" << y << " " << cnt << endl;
//	}
//
//	void fun()
//	{
//		Task task;
//		task.n = _n;
//		st.push(task);
//		while (st.size())
//		{
//			Task tmp = st.top();
//			st.pop();
//			if (tmp.n == 1)
//			{
//				move(tmp.a, tmp.c);
//				break;
//			}
//			Task t2;
//			t2.n = tmp.n - 1;
//			t2.a = tmp.b;
//			t2.b = tmp.a;
//			t2.c = tmp.c;
//			st.push(t2);
//			move(tmp.a, tmp.c);
//			Task t1;
//			t1.n = tmp.n - 1;
//			t1.a = tmp.a;
//			t1.b = tmp.c;
//			t1.c = tmp.b;
//			st.push(t1);
//		}
//	}
//
//	int Cnt()
//	{
//		return cnt;
//	}
//private:
//	int _n;
//	int cnt;
//	stack<Task> st;
//};


//int cnt = 0;
//
//// x->y
//void move(char x, char y)
//{
//	cnt++;
//	cout << x << "->" << y << " " << cnt << endl;
//}
//
//void hanno(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hanno(n - 1, a, c, b);
//		move(a, c);
//		hanno(n - 1, b, a, c);
//	}
//}

//int PartSort(vector<int>& nums, int begin, int end)
//{
//	int key = nums[begin];
//	int l = begin, r = end;
//	while (l < r)
//	{
//		while (l < r && nums[r] >= key) r--;
//		while (l < r && nums[l] <= key) l++;
//		if (l < r) swap(nums[l], nums[r]);
//	}
//	swap(nums[begin], nums[l]);
//	return l;
//}
//
//void QuickSort(vector<int>& nums)
//{
//	int begin = 0, end = nums.size() - 1;
//	stack<int> st;
//	st.push(begin);
//	st.push(end);
//	while (st.size())
//	{
//		int right = st.top();
//		st.pop();
//		int left = st.top();
//		st.pop();
//		int key = PartSort(nums, left, right);
//		if (left < key - 1)
//		{
//			st.push(left);
//			st.push(key - 1);
//		}
//		if (right > key + 1)
//		{
//			st.push(key + 1);
//			st.push(right);
//		}
//	}
//}
//
//int main()
//{
//	vector<int> nums{ 5, 2, 6, 7, 4, 3 };
//	QuickSort(nums);
//	for (auto& e : nums)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//int cnt = 0;
//
//void move(char x, char y)
//{
//	cnt++;
//	cout << x << "->" << y << " " << cnt << endl;
//}
//
//void hannoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		move(a, c);
//	}
//	else
//	{
//		hannoi(n - 1, a, c, b);
//		move(a, c);
//		hannoi(n - 1, b, a, c);
//	}
//}

//struct Task
//{
//	int n;
//	char a;
//	char b;
//	char c;
//};
//
//class Hannoi
//{
//public:
//	Hannoi(int n)
//		: _n(n)
//	{}
//
//	void move(char x, char y)
//	{
//		cnt++;
//		cout << x << "->" << y << " " << cnt << endl;
//	}
//	
//	void fun()
//	{
//		Task task;
//		task.n = _n;
//		task.a = 'a';
//		task.b = 'b';
//		task.c = 'c';
//		stack<Task> st;
//		st.push(task);
//		while (st.size())
//		{
//			Task tmp = st.top();
//			st.pop();
//			if (tmp.n == 1)
//			{
//				move(tmp.a, tmp.c);
//			}
//			else
//			{
//				Task t1;
//				t1.n = tmp.n - 1;
//				t1.a = tmp.a;
//				t1.b = tmp.c;
//				t1.c = tmp.b;
//				st.push(t1);
//				move(t1.a, t1.c);
//				Task t2;
//				t2.n = tmp.n - 1;
//				t2.a = tmp.b;
//				t2.b = tmp.a;
//				t2.c = tmp.c;
//				st.push(t2);
//			}
//		}
//	}
//
//private:
//	int _n;
//	int cnt = 0;
//};

//int main()
//{
//	Hannoi h(1);
//	h.fun();
//	return 0;
//}



//class Solution {
//public:
//    void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//        int n = A.size();
//        move(n, A, B, C);
//    }
//
//    void move(int n, vector<int>& A, vector<int>& B, vector<int>& C)
//    {
//        if (n == 1)
//        {
//            C.push_back(A.back());
//            A.pop_back();
//        }
//        else
//        {
//            move(n - 1, A, C, B);
//            C.push_back(A.back());
//            A.pop_back();
//            move(n - 1, B, A, C);
//        }
//    }
//};




//struct Task
//{
//    int n;
//    vector<int>* A, * B, * C;
//    Task(int _n, vector<int>* _A, vector<int>* _B, vector<int>* _C)
//        : A(_A)
//        , B(_B)
//        , C(_C)
//        , n(_n)
//    {}
//};
//
//void hanota(vector<int>& A, vector<int>& B, vector<int>& C) {
//    stack<Task> st;
//    Task t(A.size(), &A, &B, &C);
//    st.push(t);
//    while (st.size())
//    {
//        Task task = st.top();
//        st.pop();
//        if (task.n == 1)
//        {
//            task.C->push_back(task.A->back());
//            task.A->pop_back();
//        }
//        else
//        {
//            Task t1(task.n - 1, task.A, task.C, task.B);
//            st.push(t1);
//            task.C->push_back(task.A->back());
//            task.A->pop_back();
//            Task t2(task.n - 1, task.B, task.A, task.C);
//            st.push(t2);
//        }
//    }
//}
//
//int main()
//{
//    vector<int> a{2, 1};
//    vector<int> b, c;
//    hanota(a, b, c);
//    return 0;
//}


