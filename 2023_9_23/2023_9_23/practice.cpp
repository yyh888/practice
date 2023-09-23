#include <iostream>
#include <vector>
using namespace std;

//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n, 1);
//        int Max = 1;
//        for (int i = 1; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                if (nums[i] > nums[j]) dp[i] = max(dp[i], dp[j] + 1);
//                Max = max(dp[i], Max);
//            }
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    vector<int> searchRange(vector<int>& nums, int target) {
//        int n = nums.size();
//        if (n == 0) return { -1, -1 };
//        int l = 0, r = n - 1;
//        int left, right;
//        while (l < r)
//        {
//            int mid = (l + r) / 2 + 1;
//            if (nums[mid] > target) r = mid - 1;
//            else l = mid;
//        }
//        if (nums[l] != target) return { -1, -1 };
//        right = l;
//        l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = (l + r) / 2;
//            if (nums[mid] < target) l = mid + 1;
//            else r = mid;
//        }
//        left = r;
//        return { left, right };
//    }
//};


//class Solution {
//public:
//    int searchInsert(vector<int>& nums, int target) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l <= r)
//        {
//            int mid = (l + r) / 2;
//            if (nums[mid] == target) return mid;
//            else if (nums[mid] < target) l = mid + 1;
//            else r = mid - 1;
//        }
//        return r + 1;
//    }
//};


//namespace yyh
//{
//	template <class T>
//	class vector
//	{
//		typedef T* iterator;
//		typedef const T* const_iterator;
//	public:
//		vector(){}
//
//		template <class InputIterator>
//		vector(InputIterator first, InputIterator end)
//		{
//			while (first != end)
//			{
//				push_back(*first++);
//			}
//		}
//		
//		void Swap(vector<T>& tmp)
//		{
//			swap(_start, tmp._start);
//			swap(_finish, tmp._finish);
//			swap(_endofstorage, tmp._endofstorage);
//		}
//
//		const_iterator begin() const
//		{
//			return _start;
//		}
//
//		const_iterator end() const
//		{
//			return _finish;
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
//		vector(const vector<T>& v)
//		{
//			vector<T> tmp(v.begin(), v.end());
//			Swap(tmp);
//		}
//
//		iterator erase(iterator pos)
//		{
//			if (pos == end())
//			{
//				_finish--;
//				return _finish;
//			}
//			iterator it = pos;
//			size_t sz = pos - _start;
//			while (it != end() - 1)
//			{
//				*it = *(it + 1);
//				it++;
//			}
//			_finish--;
//			return _start + sz;
//		}
//
//		size_t size()
//		{
//			return _finish - _start;
//		}
//
//		size_t capacity()
//		{
//			return _endofstorage - _start;
//		}
//
//		void reserve(size_t n)
//		{
//			if (n <= capacity()) return;
//			size_t sz = size();
//			T* tmp = new T[n];
//			if (_start)
//			{
//				for (size_t i = 0; i < size(); i++)
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
//		void push_back(const T& val)
//		{
//			if (size() == capacity())
//			{
//				reserve(capacity() == 0 ? 4 : 2 * capacity());
//			}
//			*_finish++ = val;
//		}
//	private:
//		iterator _start = nullptr;
//		iterator _finish = nullptr;
//		iterator _endofstorage = nullptr;
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
//	yyh::vector<int> t(v);
//	t.erase(t.begin());
//	t.erase(t.end());
//	for (auto& e : t)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}


