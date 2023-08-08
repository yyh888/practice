#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <thread>
#include <mutex>
#include <cassert>
using namespace std;

//void test(mutex* pmtx)
//{
//	static int i = 0;
//	pmtx->lock();
//	i++;
//	pmtx->unlock();
//}
//
//int main()
//{
//	mutex* pmtx = new mutex;
//	thread t1([&]() {
//		for (int i = 1; i <= 1000; i++)
//		{
//			test(pmtx);
//		}
//		});
//	thread t2([&]() {
//		for (int i = 1; i <= 1000; i++)
//		{
//			test(pmtx);
//		}
//	});
//	t1.join();
//	t2.join();
//	test(pmtx);
//	return 0;
//}


//class A
//{
//public:
//	A()
//	{
//		a++;
//	}
//public:
//	static int a;
//};
//
//int A::a = 1;
//
//int main()
//{
//	A a1;
//	A a2;
//	A a3;
//	cout << A::a << endl;
//	return 0;
//}


//class A
//{
//public:
//	virtual void fun1()
//	{
//		cout << "fun1" << endl;
//	}
//};
//
//int main()
//{
//	A a;
//	A b;
//	return 0;
//}

//class A
//{
//private:
//	int _a;
//};
//
//int main()
//{
//	A a;
//	a._a;
//	return 0;
//}


// LRU »º´æ
//class LRUCache {
//public:
//    struct Node
//    {
//        Node(int key, int val)
//            : _key(key)
//            , _val(val)
//        {}
//
//        int _key;
//        int _val;
//        Node* _pre = nullptr;
//        Node* _next = nullptr;
//    };
//
//    unordered_map<int, Node*> hash;
//    Node* head;
//    int _size;
//    int _cap;
//
//    LRUCache(int capacity) {
//        head = new Node(-1, -1);
//        head->_next = head;
//        head->_pre = head;
//
//        _cap = capacity;
//        _size = 0;
//    }
//
//    void move(Node* node)
//    {
//        node->_next = head->_next;
//        head->_next->_pre = node;
//        head->_next = node;
//        node->_pre = head;
//    }
//
//    void del(Node* node)
//    {
//        node->_pre->_next = node->_next;
//        node->_next->_pre = node->_pre;
//    }
//
//    int get(int key) {
//        if (!hash.count(key))
//        {
//            return -1;
//        }
//        Node* node = hash[key];
//        del(node);
//        move(node);
//        return node->_val;
//    }
//
//    void put(int key, int value) {
//        if (hash.count(key))
//        {
//            Node* node = hash[key];
//            node->_val = value;
//            del(node);
//            move(node);
//        }
//        else
//        {
//            if (_size != _cap)
//            {
//                Node* node = new Node(key, value);
//                hash[key] = node;
//                move(node);
//                _size++;
//            }
//            else
//            {
//                Node* node = new Node(key, value);
//                hash.erase(head->_pre->_key);
//                del(head->_pre);
//                move(node);
//                hash[key] = node;
//            }
//        }
//    }
//};


//namespace yyh
//{
//	class string
//	{
//		typedef char* iterator;
//
//	public:
//		string(const char* str = "")
//			: _size(strlen(str))
//			, _capacity(_size)
//		{
//			_str = new char[_capacity + 1];
//			strcpy(_str, str);
//		}
//
//		~string()
//		{
//			delete _str;
//			_str = nullptr;
//			_size = _capacity = 0;
//		}
//
//		string(const string& s)
//			: _str(nullptr)
//		{
//			yyh::string tmp(s._str);
//			swap(tmp);
//		}
//
//		void swap(string& s)
//		{
//			std::swap(_capacity, s._capacity);
//			std::swap(_size, s._size);
//			std::swap(_str, s._str);
//		}
//
//		string& operator=(string s)
//		{
//			swap(s);
//			return *this;
//		}
//
//		void print()
//		{
//			cout << _str << endl;
//		}
//
//		char* c_str()
//		{
//			return _str;
//		}
//
//		size_t size()
//		{
//			return _size;
//		}
//
//		char operator[](size_t pos)
//		{
//			assert(pos < _size);
//			return _str[pos];
//		}
//
//		iterator begin()
//		{
//			return _str;
//		}
//
//		iterator end()
//		{
//			return _str + _size;
//		}
//
//		void push_back(char ch)
//		{
//			if (_size == _capacity)
//			{
//				// À©ÈÝ
//				_capacity = _capacity == 0 ? 4 : _capacity * 2;
//				char* tmp = new char[_capacity + 1];
//				strcpy(tmp, _str);
//				delete[]_str;
//				_str = tmp;
//			}
//			_str[_size] = ch;
//			_str[++_size] = '\0';
//		}
//
//		void append(const char* str)
//		{
//			size_t sz = strlen(str);
//			if (sz + _size > _capacity)
//			{
//				while (_capacity < sz + _size)
//				{
//					_capacity = _capacity == 0 ? 4 : _capacity * 2;
//				}
//				char* tmp = new char[_capacity + 1];
//				strcpy(tmp, str);
//				delete[]_str;
//				_str = tmp;
//			}
//			strcpy(_str + _size, str);
//			_size += sz;
//		}
//
//		string& operator+=(const char ch)
//		{
//			push_back(ch);
//			return *this;
//		}
//
//		string& operator+=(const char* str)
//		{
//			append(str);
//			return *this;
//		}
//
//		void resize(size_t n, char ch = '\0')
//		{
//			if (n < _size)
//			{
//				_str[n] = '\0';
//				_size = n;
//			}
//			if (n > _size)
//			{
//				while (_capacity <= n)
//				{
//					_capacity = _capacity == 0 ? 4 : _capacity * 2;
//				}
//			}
//		}
//	private:
//		char* _str;
//		size_t _size;
//		size_t _capacity;
//	};
//}
//
//
//int main()
//{
//	yyh::string s1("1");
//	s1 += "2345";
//	for (auto& e : s1)
//	{
//		cout << e << " ";
//	}
//	/*yyh::string s2(s1);
//	yyh::string s3 = s2;
//
//	for (auto& e : s3)
//	{
//		cout << e << " ";
//	}*/
//	return 0;
//}