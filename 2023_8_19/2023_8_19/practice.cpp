//class Solution {
//public:
//    vector<int> constructArr(vector<int>& a) {
//        int n = a.size();
//        vector<int> res(n, 1);
//        for (int i = 0; i < n - 1; i++)
//        {
//            res[i + 1] = res[i] * a[i];
//        }
//        int sum = 1;
//        for (int i = n - 2; i >= 0; i--)
//        {
//            sum *= a[i + 1];
//            res[i] *= sum;
//        }
//        return res;
//    }
//};


//class A
//{
//public:
//	static A& Get()
//	{
//		static A _a;
//		return _a;
//	}
//private:
//	A(){}
//	A(const A&) = delete;
//	A& operator=(const A&) = delete;
//};


//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int res = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            int ret = 0;
//            for (auto& e : nums)
//            {
//                ret += (e >> i) & 1;
//            }
//            if (ret % 3)
//            {
//                res |= (1 << i);
//            }
//        }
//        return res;
//    }
//};


//class A
//{
//public:
//	static A& Get()
//	{
//		return _a;
//	}
//private:
//	A() {}
//	static A _a;
//};
//
//A A::_a;

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <thread>
#include <vector>

using namespace std;


//class A
//{
//public:
//	static A* Get()
//	{
//		static A* p = new A;
//		return p;
//	}
//private:
//	A(){}
//	A(const A&) = delete;
//	A& operator=(const A&) = delete;
//};
//
//int main()
//{
//	thread t1([]() {
//		for (int i = 0; i < 100; i++)
//		{
//			A::Get();
//		}
//		});
//	thread t2([]() {
//		for (int i = 0; i < 100; i++)
//		{
//			A::Get();
//		}
//		});
//	t1.join();
//	t2.join();
//	return 0;
//}

//const int Cap = 10;
//
//template <class T>
//class RingQueue
//{
//private:
//	P(int sem){}
//	V(int sem){}
//public:
//	RingQueue()
//		: _que(Cap)
//	{
//		_psem = Cap;
//		_csem = 0;
//	}
//	
//	void push(const T& val)
//	{
//		P(_psem);
//		_que[_pidx++] = val;
//		_pidx %= Cap;
//		V(_csem);
//	}
//
//	void Pop(T* out)
//	{
//		P(_csem);
//		*out = _que[_cidx++];
//		_cidx %= Cap;
//		V(_psem);
//	}
//
//private:
//	vector<int> _que;
//	int _psem;// 生产者信号量
//	int _csem;// 消费者信号量
//	int _cidx = 0;
//	int _pidx = 0;
//};


//void Fun(int& x) { cout << "左值引用" << endl; }
//void Fun(const int& x) { cout << "const 左值引用" << endl; }
//
//void Fun(int&& x) { cout << "右值引用" << endl; }
//void Fun(const int&& x) { cout << "const 右值引用" << endl; }
//
//template <class T>
//void fun(T&& i)
//{
//	Fun(std::forward<T>(i));
//}
//
//int main()
//{
//	int a = 10;// 左值
//	fun(a);
//	const int b = 100;// const 左值
//	fun(b);
//	fun(std::move(a));// 右值
//	fun(std::move(b));// const 右值
//	return 0;
//}

namespace yyh
{
	class string
	{
	public:
		string(const char* str)
			: _size(strlen(str))
			, _capacity(_size)
		{
			_str = new char[_capacity + 1];
			strcpy(_str, str);
		}

		void Swap(string& s)
		{
			swap(_str, s._str);
			swap(_size, s._size);
			swap(_capacity, s._capacity);
		}

		string(const string& s)
		{
			string tmp(s._str);
			Swap(tmp);
			cout << "string(const string& s)" << endl;
		}

		string(string&& s)
		{
			Swap(s);
			cout << "string(string&& s)" << endl;
		}

		const char* c_str()
		{
			return _str;
		}
	private:
		char* _str = nullptr;
		size_t _size;
		size_t _capacity;
	};
}
//
//int main()
//{
//	yyh::string s1("abc");
//	yyh::string s2(std::move(s1));
//	cout << s2.c_str() << endl;
//	return 0;
//}


//class A
//{
//public:
//	int _a;
//};
//
//class B : public A
//{
//public:
//	int _b;
//};
//
//class C : public A
//{
//public:
//	int _c;
//};
//
//int main()
//{
//	B b;
//	A a = (A)b;
//	C* c = dynamic_cast<C*>(&a);
//	return 0;
//}

//string& fun(const string& s)
//{
//	string tmp("abc");
//	return tmp;
//}
//
//int main()
//{
//	string s("abc");
//	string p = fun(s);
//	return 0;
//}

//int fun(const string& s)
//{
//	int res = 0;
//	int n = s.size();
//	if (n <= 2 || s.substr(0, 2) != "0x")
//	{
//		for (int i = 0; i < n; i++)
//		{
//			res = res * 10 + s[i] - '0';
//		}
//		return res;
//	}
//	else
//	{
//		for (int i = 2; i < n; i++)
//		{
//			res = res * 16 + s[i] - '0';
//		}
//		return res;
//	}
//}
//
//int main()
//{
//	string s;
//	cin >> s;
//	cout << fun(s) << endl;
//	return 0;
//}


//class A
//{
//public:
//	char ch;
//	virtual void fun() {}
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}