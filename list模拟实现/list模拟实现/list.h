#pragma once
#include <iostream>
#include <assert.h>
#include "reverse_iterator.h"
using namespace std;

namespace yyh
{
	template <class T>
	struct ListNode
	{
		ListNode(const T& val = T())
			: _prev(nullptr)
			, _next(nullptr)
			, _val(val)
		{}
		ListNode<T>* _prev;
		ListNode<T>* _next;
		T _val;
	};

	template <class T, class Ref, class Ptr>
	struct _list_iterator
	{
		typedef ListNode<T> Node;
		typedef _list_iterator<T, Ref, Ptr> iterator;
		_list_iterator(Node* p)
		{
			_p = p;
		}

		Ref operator*()
		{
			return _p->_val;
		}

		Ptr operator->()
		{
			return &_p->_val;
		}

		iterator& operator++()
		{
			_p = _p->_next;
			return *this;
		}

		iterator& operator++(int)
		{
			iterator tmp(*this);
			_p = _p->_next;
			return tmp;
		}

		iterator& operator--()
		{
			_p = _p->_prev;
			return *this;
		}

		iterator& operator--(int)
		{
			iterator tmp(*this);
			_p = _p->_prev;
			return tmp;
		}

		//end() 返回临时变量具有常属性 
		bool operator!=(const iterator& it) const
		{
			return _p != it._p;
		}

		bool operator==(const iterator& it) const
		{
			return _p == it._p;
		}

		Node* _p;
	};

	template <class T>
	class list
	{
		typedef ListNode<T> Node;
	public:
		typedef _list_iterator<T, T&, T*> iterator;
		typedef _list_iterator<T, const T&, const T*> const_iterator;

		typedef reverse_iterator<const_iterator, const T&, const T*> const_reverse_iterator;
		typedef reverse_iterator<iterator, T&, T*> reverse_iterator;

		reverse_iterator rbegin()
		{
			return reverse_iterator(end());
		}

		reverse_iterator rend()
		{
			return reverse_iterator(begin());
		}

		const_reverse_iterator rbegin() const
		{
			return const_reverse_iterator(end());
		}

		const_reverse_iterator rend() const
		{
			return const_reverse_iterator(begin());
		}

		list()// 哨兵位
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
		}

		list(size_t n, const T& val = T())
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		list(int n, const T& val = T())
		{
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			for (size_t i = 0; i < n; i++)
			{
				push_back(val);
			}
		}

		void push_back(const T& val)
		{
			insert(end(), val);
		}

		void push_front(const T& val)
		{
			insert(begin(), val);
		}

		void pop_back()
		{
			erase(--end());
		}

		void pop_front()
		{
			erase(begin());
		}

		//list(const list<T>& lt)
		//{
		//	// 先创建头节点
		//	_head = new Node;
		//	_head->_next = _head;
		//	_head->_prev = _head;
		//	const_iterator it = lt.begin();
		//	while (it != lt.end())
		//	{
		//		push_back(*it);
		//		++it;
		//	}
		//}

		template<class InputIterator>
		list(InputIterator first, InputIterator last)
		{
			// 先创建头节点
			_head = new Node;
			_head->_next = _head;
			_head->_prev = _head;
			while (first != last)
			{
				push_back(*first);
				++first;
			}
		}

		list(const list<T>& lt)
		{
			_head = new Node;// _head不能为nullptr,析构会解用
			_head->_next = _head;
			_head->_prev = _head;
			list<T> tmp(lt.begin(), lt.end());
			swap(_head, tmp._head);
		}

		//list<T>& operator=(const list<T>& lt)
		//{
		//	if (this != &lt)
		//	{
		//		clear();
		//		for (auto& e : lt)
		//		{
		//			push_back(e);
		//		}
		//	}
		//	return *this;
		//}

		list<T>& operator=(list<T> lt)
		{
			_head->_next = _head;
			_head->_prev = _head;
			swap(_head, lt._head);
			return *this;
		}

		~list()
		{
			clear();
			delete _head;
			_head = nullptr;
		}

		void clear()
		{
			iterator it = begin();
			while (it != end())
			{
				it = erase(it);
			}
		}

		iterator erase(iterator pos)
		{
			assert(pos != end());
			Node* prev = pos._p->_prev;
			Node* next = prev->_next->_next;
			delete pos._p;
			prev->_next = next;
			next->_prev = prev;
			return iterator(next);
		}

		iterator insert(iterator pos, const T& val)
		{
			Node* cur = pos._p;
			Node* prev = cur->_prev;
			Node* newnode = new Node(val);
			cur->_prev = newnode;
			newnode->_next = cur;
			prev->_next = newnode;
			newnode->_prev = prev;
			return iterator(newnode);
		}

		iterator begin()
		{
			return iterator(_head->_next);
		}

		iterator end()
		{
			return iterator(_head);
		}

		const const_iterator begin() const
		{
			return const_iterator(_head->_next);
		}

		const const_iterator end() const
		{
			return const_iterator(_head);
		}

	private:
		Node* _head;
	};

	void fun1()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		list<int>::iterator it = lt.begin();
		while (it != lt.end())
		{
			cout << *it << " ";
			++it;
		}
	}

	void print(const list<int>& lt)
	{
		list<int>::const_reverse_iterator it = lt.rbegin();
		while (it != lt.rend())
		{
			cout << *it << " ";
			++it;
		}
	}

	void fun2()
	{
		list<int> lt;
		lt.push_back(1);
		lt.push_back(2);
		lt.push_back(3);
		lt.push_back(4);
		lt.pop_back();
		lt.pop_front();
		list<int> lt2;
		lt2 = lt;
		print(lt2);
	}
}

