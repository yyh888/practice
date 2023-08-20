#include <iostream>

//namespace yyh
//{
//	template <class T>
//	class vector
//	{
//		typedef T* iterator;
//		typedef const T* const_iterator;
//	public:
//		vector() {}
//
//		template <class InputIterator>
//		vector(InputIterator first, InputIterator last)
//		{
//			while (first != last)
//			{
//				push_back(*first++);
//			}
//		}
//
//		void Swap(vector<T>& v)
//		{
//			std::swap(_start, v._start);
//			std::swap(_finish, v._finish);
//			std::swap(_endofstorage, v._endofstorage);
//		}
//
//		vector(const vector<T>& v)
//		{
//			std::cout << "const vector<T>& v" << std::endl;
//			vector<T> tmp(v.begin(), v.end());
//			Swap(tmp);
//		}
//
//		vector(vector<T>&& v)
//		{
//			Swap(v);
//			std::cout << "vector(vector<T>&& v)" << std::endl;
//		}
//
//		vector<T>& operator=(vector<T> v)
//		{
//			swap(v);
//		}
//
//		~vector()
//		{
//			delete []_start;
//			_start = _endofstorage = _finish = nullptr;
//		}
//
//		void reserve(size_t n)
//		{
//			if (n < size())
//			{
//				_finish = _start + n;
//			}
//			else
//			{
//				if (n > capacity())
//				{
//					size_t sz = size();
//					iterator tmp = new T[n];
//					if (_start)
//					{
//						for (size_t i = 0; i < sz; i++)
//						{
//							tmp[i] = _start[i];
//						}
//						delete[]_start;
//					}
//					_start = tmp;
//					_finish = _start + sz;
//					_endofstorage = _start + n;
//				}
//			}
//		}
//
//		void resize(size_t n, const T& val = T())
//		{
//			if (n < size())
//			{
//				_finish = _start + n;
//			}
//			else
//			{
//				if (n > capacity())
//				{
//					reserve(n);
//				}
//				while (_finish != _endofstorage)
//				{
//					*_finish = val;
//					_finish++;
//				}
//			}
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
//		void push_back(const T& val)
//		{
//			if (_finish == _endofstorage)
//			{
//				reserve(capacity() == 0 ? 4 : capacity() * 2);
//			}
//			*_finish = val;
//			_finish++;
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
//		iterator insert(iterator pos, const T& val)
//		{
//			if (_finish == _endofstorage)
//			{
//				size_t len = pos - _start;
//				reserve(capacity() == 0 ? 4 : capacity() * 2);
//				pos = _start + len;
//			}
//			iterator end = _finish + 1;
//			while (end != pos)
//			{
//				*end = *(end - 1);
//				end--;
//			}
//			*pos = val;
//			_finish++;
//			return pos;
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
//	yyh::vector<int> v1;
//	v1.push_back(1);
//	v1.push_back(2);
//	v1.push_back(3);
//	v1.push_back(4);
//	v1.push_back(5);
//	v1.insert(v1.begin(), 0);
//	v1.insert(v1.begin() + 2, 100);
//	yyh::vector<int> v2 = v1;
//	for (auto& e : v2)
//	{
//		std::cout << e << " ";
//	}
//	return 0;
//}


//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n);
//        dp[0] = nums[0];
//        int Max = nums[0];
//        for (int i = 1; i < n; i++)
//        {
//            dp[i] = max(nums[i], nums[i] + dp[i - 1]);
//            Max = max(Max, dp[i]);
//        }
//        return Max;
//    }
//};


