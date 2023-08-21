#include <iostream>
#include <thread>
#include <mutex>
#include <condition_variable>
#include <vector>

using namespace std;

//int main()
//{
//	int val = 1;
//	mutex Lock;
//	condition_variable cv;
//	thread t1([&]() {
//		while (val <= 100)
//		{
//			unique_lock<mutex> mtx(Lock);
//			if (val % 2 == 0)// Å¼Êý
//			{
//				cv.wait(mtx);
//			}
//			if(val <= 100)cout << "Thread1->" << val << endl;
//			val++;
//			cv.notify_one();
//		}
//		});
//	thread t2([&]() {
//		while (val <= 100)
//		{
//			unique_lock<mutex> mtx(Lock);
//			if (val % 2 != 0)// ÆæÊý
//			{
//				cv.wait(mtx);
//			}
//			if (val <= 100) cout << "Thread2->" << val << endl;
//			val++;
//			cv.notify_one();
//		}
//		});
//	t1.join();
//	t2.join();
//	return 0;
//}


//struct TreeNode
//{
//	int val;
//	TreeNode* left;
//	TreeNode* right;
//};

//class A
//{
//public:
//	virtual ~A()
//	{
//		delete[]a;
//		cout << "~A()" << endl;
//	}
//	int* a = new int[20];
//};
//
//class B : public A
//{
//public:
//	~B()
//	{
//		delete[]b;
//		cout << "~B()" << endl;
//	}
//	int* b = new int[20];
//};
//
//int main()
//{
//	A* pa = new A;
//	A* pb = new B;
//	delete pa;
//	delete pb;
//	return 0;
//}


//class Solution {
//public:
//    vector<int> constructArr(vector<int>& a) {
//        int n = a.size();
//        vector<int> b(n, 1);
//        for (int i = 0; i < n - 1; i++)
//        {
//            b[i + 1] = b[i] * a[i];
//        }
//        int sum = 1;
//        for (int i = n - 2; i >= 0; i--)
//        {
//            sum *= a[i + 1];
//            b[i] *= sum;
//        }
//        return b;
//    }
//};


//class Single
//{
//public:
//	static Single* GetSingle()
//	{
//		if (_single == nullptr)
//		{
//			mtx.lock();
//			if (_single == nullptr)
//			{
//				_single = new Single;
//			}
//			mtx.unlock();
//		}
//		return _single;
//	}
//private:
//	Single(){}
//	Single& operator=(const Single&) = delete;
//	Single(const Single&) = delete;
//	static mutex mtx;
//	static Single* _single;
//};
//
//Single* Single::_single = nullptr;
//mutex Single::mtx;
//
//int main()
//{
//	Single::GetSingle();
//	return 0;
//}
//
//class OnlyHeap
//{
//public:
//	OnlyHeap(){}
//private:
//	~OnlyHeap(){}
//	OnlyHeap(const OnlyHeap&) = delete;
//	OnlyHeap& operator=(const OnlyHeap&) = delete;
//};
//
//int main()
//{
//	OnlyHeap* p = new OnlyHeap;
//	return 0;
//}

//class OnlyStack
//{
//public:
//	static OnlyStack Get()
//	{
//		return OnlyStack();
//	}
//private:
//	OnlyStack(){}
//};


//class Solution {
//public:
//    int maxProfit(vector<int>& prices) {
//        int n = prices.size();
//        vector<int> dp1(n), dp2(n);
//        dp1[0] = -prices[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp1[i] = max(dp1[i - 1], dp2[i - 1] - prices[i]);
//            dp2[i] = max(dp2[i - 1], dp1[i - 1] + prices[i]);
//        }
//        return dp2[n - 1];
//    }
//};

//void QuickSort(vector<int>& v, int begin, int end)
//{
//	if (begin >= end) return;
//	int keyidx = begin + rand() % (end - begin + 1);
//	swap(v[begin], v[keyidx]);
//	int key = v[begin];
//	int l = begin, r = end;
//	while (l < r)
//	{
//		while (l < r && v[r] >= key) r--;
//		while (l < r && v[l] <= key) l++;
//		if (l < r) swap(v[l], v[r]);
//	}
//	swap(v[begin], v[l]);
//	QuickSort(v, begin, l - 1);
//	QuickSort(v, l + 1 , end);
//}
//
//int main()
//{
//	srand(time(0));
//	vector<int> v{ 8, 2, 5, 1, 9, 2 , 2, 5, 7, 3, 2};
//	QuickSort(v, 0, v.size() - 1);
//	for (auto& e : v)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}


//int main()
//{
//	const char* str = "abcasdsa";
//	char a[] = "abvcsdhju5q";
//	cout << sizeof(str) << endl;
//	return 0;
//}


