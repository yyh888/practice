#include <iostream>
// 寻找第k大
//void QuickSort(vector<int>& nums, int begin, int end, int k)
//{
//    if (begin >= end) return;
//    int l = begin - 1, r = end + 1;
//    int key = nums[begin];
//    while (l < r)
//    {
//        do l++; while (nums[l] < key);
//        do r--; while (nums[r] > key);
//        if (l < r) swap(nums[l], nums[r]);
//    }
//    QuickSort(nums, begin, r, k);
//    QuickSort(nums, r + 1, end, k);
//}

// void QuickSort(vector<int>& nums, int begin, int end)
// {
//     if(begin >= end) return;
//     int l = begin, r = end;
//     int key = nums[begin];
//     while(l < r)
//     {
//         while(l < r && nums[r] >= key) r--;
//         while(l < r && nums[l] <= key) l++;
//         if(l < r) swap(nums[l], nums[r]);
//     }
//     swap(nums[begin], nums[l]);
//     QuickSort(nums, begin, l - 1);
//     QuickSort(nums, l + 1, end);
// }

//int findKth(vector<int>& a, int n, int K) {
//    // write code here
//    QuickSort(a, 0, n - 1, K);
//    return a[n - K];
//}
//};


// 合并区间
//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        if (intervals.size() == 0) return {};
//        sort(intervals.begin(), intervals.end());
//        int n = intervals.size();
//        vector<vector<int>> res;
//        res.push_back(intervals[0]);
//        for (int i = 1; i < n; i++)
//        {
//            if (intervals[i][0] <= res[res.size() - 1][1])
//            {
//                if (intervals[i][1] > res[res.size() - 1][1])
//                {
//                    res[res.size() - 1][1] = intervals[i][1];
//                }
//            }
//            else
//            {
//                res.push_back(intervals[i]);
//            }
//        }
//        return res;
//    }
//};

//#include <iostream>
//#include <cassert>
//
//using std::cout;
//using std::endl;
//
//namespace yyh
//{
//	template <class T>
//	class vector
//	{
//		typedef T* iterator;
//	public:
//		vector()
//		{}
//
//		void swap(vector<T>& v)
//		{
//			std::swap(_finish, v._finish);
//			std::swap(_start, v._start);
//			std::swap(_endofstorage, v._endofstorage);
//		}
//
//		vector(const vector<T>& v)
//		{
//			/*_start = new T[v.capacity()];
//			_finish = _start;
//			_endofstorage = _start + v.capacity();
//			for (size_t i = 0; i < v.size(); i++)
//			{
//				*_finish++ = v[i];
//			}*/
//			vector<T> tmp(v.begin(), v.end());
//			swap(tmp);
//		}
//
//		vector<T>& operator=(vector<T> v)
//		{
//			swap(v);
//			return *this;
//		}
//
//		template <class InputIterator>
//		vector(InputIterator begin, InputIterator end)
//		{
//			while (begin != end)
//			{
//				push_back(*begin);
//				begin++;
//			}
//		}
//
//		size_t size() const
//		{
//			return _finish - _start;
//		}
//
//		size_t capacity() const
//		{
//			return _endofstorage - _start;
//		}
//
//
//		void reverse(size_t n)
//		{
//			if (n <= size())
//			{
//				_finish = _start + n;
//				return;
//			}
//			size_t sz = size();
//			T* tmp = new T[n];
//			if (_start)
//			{
//				for (size_t i = 0; i < sz; i++)
//				{
//					tmp[i] = _start[i];
//				}
//				delete[]_start;
//			}
//			_start = tmp;
//			_finish = _start + sz;
//			_endofstorage = _start + n;
//		}
//
//		void resize(size_t n, const T& val = T())
//		{
//			if (n <= size())
//			{
//				_finish = _start + n;
//				return;
//			}
//			if (n > capacity())
//			{
//				reverse(n);
//			}
//			while (_finish != _endofstorage)
//			{
//				*_finish++ = val;
//			}
//		}
//
//		void push_back(const T& val)
//		{
//			if (_finish == _endofstorage)
//			{
//				reverse(capacity() == 0 ? 4 : capacity() * 2);
//			}
//			*_finish++ = val;
//		}
//
//		void pop_back()
//		{
//			assert(size() > 0);
//			_finish--;
//		}
//
//		T& operator[](size_t pos)
//		{
//			assert(pos < size());
//			return _start[pos];
//		}
//
//		const T& operator[](size_t pos) const
//		{
//			assert(pos < size());
//			return _start[pos];
//		}
//
//		iterator begin()
//		{
//			return _start;
//		}
//
//		iterator end()
//		{
//			return _finish;
//		}
//
//		iterator begin() const
//		{
//			return _start;
//		}
//
//		iterator end() const
//		{
//			return _finish;
//		}
//
//		iterator insert(iterator pos, const T& val)
//		{
//			assert(pos >= _start);
//			assert(pos <= _finish);
//			if (_finish == _endofstorage)
//			{
//				size_t len = pos - _start;
//				reverse(capacity() == 0 ? 4 : capacity() * 2);
//				pos = _start + len;
//			}
//			// 移动数据
//			iterator it = _finish;
//			while (it > pos)
//			{
//				*(it + 1) = *it;
//				it--;
//			}
//			*pos = val;
//			_finish++;
//			return pos;
//		}
//
//		iterator erase(iterator pos)
//		{
//			assert(size() > 0);
//			assert(pos <= _finish);
//			assert(pos >= _start);
//			iterator it = pos;
//			while (it < _finish)
//			{
//				(*it) = *(it + 1);
//				it++;
//			}
//			_finish--;
//			return pos;
//		}
//
//		~vector()
//		{
//			delete _start;
//			_start = _finish = _endofstorage = nullptr;
//		}
//	private:
//		iterator _start = nullptr;// 数据开始
//		iterator _finish = nullptr;// 数据结尾
//		iterator _endofstorage = nullptr;// 空间结尾
//	};
//}
//
//int main()
//{
//	yyh::vector<int> v;
//	v.push_back(1);
//	v.push_back(2);
//	v.push_back(3);
//	v.push_back(4);
//	v.push_back(5);
//	yyh::vector<int> v2 = v;
//	v2.erase(v2.begin());
//	v2.insert(v2.begin(), 100);
//	for (auto& e : v2)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}

//#include <iostream>
//#include <mutex>
//#include <thread>
//#include <vector>
//
//int tickets = 10000;
//std::mutex mtx;
//
//void Thread()
//{
//	int cnt = 0;
//	while (tickets > 0 && ++cnt < 10)
//	{
//		mtx.lock();
//		tickets--;
//		mtx.unlock();
//	}
//	//std::cout << cnt << " " << std::endl;
//}
//
//
//int main()
//{
//	std::vector<std::thread*> td;
//	while (tickets > 0)
//	{
//		std::thread* t = new std::thread(Thread);
//		td.push_back(t);
//	}
//	for (int i = 0; i < td.size(); i++)
//	{
//		td[i]->join();
//	}
//	std::cout << td.size();
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
//	OnlyStack()
//	{}
//};

//class OnlyHeap
//{
//public:
//	static OnlyHeap* Get()
//	{
//		return new OnlyHeap;
//	}
//
//	OnlyHeap(const OnlyHeap&) = delete;
//private:
//	OnlyHeap()
//	{}
//};

//class OnlyHeap
//{
//public:
//	OnlyHeap(){}
//	OnlyHeap(const OnlyHeap&) = delete;
//private:
//	~OnlyHeap()
//	{}
//};
//
//int main()
//{
//	OnlyHeap* hp = new OnlyHeap;
//	
//	return 0;
//}

using std::cout;
using std::endl;
class B
{
public:
};

class A
{
public:
	A(){}

private:
};

int main()
{
	//A* p = (A*)malloc(sizeof(A) * 20);
	/*int* p = (int*)malloc(32);
	delete p;*/
	char* p = new char[16];
	delete p;
	return 0;
}



//class Solution {
//public:
//    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
//        int n = nums.size();
//        vector<int> res;
//        deque<int> dq;
//        for (int i = 0; i < n; i++)
//        {
//            if (dq.size() && i - dq.front() >= k)
//            {
//                dq.pop_front();
//            }
//            while (dq.size() && nums[i] > nums[dq.back()])
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
//    vector<int> res;
//
//    vector<int> getLeastNumbers(vector<int>& arr, int k) {
//        if (k >= arr.size()) return arr;
//        return QuickSort(arr, 0, arr.size() - 1, k);
//    }
//
//    vector<int> QuickSort(vector<int>& nums, int begin, int end, int k)
//    {
//        int l = begin, r = end;
//        int key = nums[begin];
//        while (l < r)
//        {
//            while (l < r && nums[r] >= key) r--;
//            while (l < r && nums[l] <= key) l++;
//            if (l < r) swap(nums[l], nums[r]);
//        }
//        swap(nums[begin], nums[l]);
//        if (l > k) return QuickSort(nums, begin, l - 1, k);
//        if (l < k) return QuickSort(nums, l + 1, end, k);
//        res.assign(nums.begin(), nums.begin() + k);
//        return res;
//    }
//};


