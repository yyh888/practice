#pragma once
#include<iostream>
#include <assert.h>
using namespace std;

namespace yyh
{
    // List的节点类
    template<class T>
    struct ListNode
    {

        ListNode(const T& val = T())
            : _pre(nullptr)
            , _next(nullptr)
            , _val(val)
        {}

        ListNode<T>* _pre;

        ListNode<T>* _next;

        T _val;

    };



    //List的迭代器类
    template<class T, class Ref, class Ptr>
    struct ListIterator
    {
        typedef ListNode<T>* PNode;
        typedef ListIterator<T, Ref, Ptr> Self;

        ListIterator(PNode p)
        {
            _pNode = p;
        }

        ListIterator(const Self& l)
        {
            _pNode = l._pNode;
        }

        Ref operator*()
        {
            return _pNode->_val;
        }

        Ptr operator->()
        {
            return &_pNode->_val;
        }

        Self& operator++()
        {
            _pNode = _pNode->_next;
            return *this;
        }

        Self operator++(int)
        {
            Self tmp = *this;
            _pNode = _pNode->_next;
            return tmp;
        }

        Self& operator--()
        {
            _pNode = _pNode->_pre;
            return *this;
        }

        Self& operator--(int)
        {
            Self tmp = *this;
            _pNode = _pNode->_pre;
            return tmp;
        }

        bool operator!=(const Self& l)
        {
            return !(*this == l);
        }

        bool operator==(const Self& l)
        {
            return _pNode == l._pNode;
        }

        PNode _pNode;

    };



    //list类
    template<class T>
    class list
    {

        typedef ListNode<T> Node;

        typedef Node* PNode;

    public:

        typedef ListIterator<T, T&, T*> iterator;

        typedef ListIterator<T, const T&, const T*> const_iterator;

    public:

        ///////////////////////////////////////////////////////////////

        // List的构造

        list()
        {
            _pHead = new Node;
            _pHead->_next = _pHead;
            _pHead->_pre = _pHead;
        }

        list(int n, const T& value = T())
        {
            while (n--)
            {
                push_back(value);
            }
        }

        template <class Iterator>
        list(Iterator first, Iterator last)
        {
            _pHead = new Node;
            _pHead->_pre = _pHead;
            _pHead->_next = _pHead;
            while (first != last)
            {
                push_back(*first);
                ++first;
            }
        }

        list(const list<T>& l)
        {
            _pHead = new Node;
            for (auto& e : l)
            {
                push_back(e);
            }
        }

        list<T>& operator=(const list<T> l)
        {
            clear();
            for (auto& e : l)
            {
                push_back(e);
            }
            return *this;
        }

        ~list()
        {
            clear();
            delete _pHead;
            _pHead = nullptr;
        }



        ///////////////////////////////////////////////////////////////

        // List Iterator

        iterator begin()
        {
            return iterator(_pHead->_next);
        }

        iterator end()
        {
            return iterator(_pHead);
        }

        const_iterator begin() const
        {
            return const_iterator(_pHead->_next);
        }

        const_iterator end() const
        {
            return const_iterator(_pHead);
        }



        ///////////////////////////////////////////////////////////////
        // List Capacity
        size_t size()const
        {
            size_t i = 0;
            iterator it = begin();
            while (it != end())
            {
                ++it;
                ++i;
            }
            return i;
        }

        ////////////////////////////////////////////////////////////

        // List Access

        T& front()
        {
            return _pHead->_next->_val;
        }

        const T& front()const
        {
            return _pHead->_next->_val;
        }

        T& back()
        {
            return _pHead->_pre->_val;
        }

        const T& back()const
        {
            return _pHead->_pre->_val;
        }



        ////////////////////////////////////////////////////////////

        // List Modify

        void push_back(const T& val) { insert(end(), val); }

        void pop_back() { erase(--end()); }

        void push_front(const T& val) { insert(begin(), val); }

        void pop_front() { erase(begin()); }

        // 在pos位置前插入值为val的节点
        iterator insert(iterator pos, const T& val)
        {
            Node* cur = pos._pNode;
            Node* pre = cur->_pre;
            Node* newnode = new Node(val);
            pre->_next = newnode;
            newnode->_pre = pre;
            newnode->_next = cur;
            cur->_pre = newnode;
            return iterator(newnode);
        }

        // 删除pos位置的节点，返回该节点的下一个位置
        iterator erase(iterator pos)
        {
            assert(pos != end());
            Node* cur = pos._pNode;
            Node* pre = cur->_pre;
            Node* next = cur->_next;
            delete cur;
            pre->_next = next;
            next->_pre = pre;
            return iterator(next);
        }

        void clear()
        {
            iterator it = begin();
            while (it != end())
            {
                it = erase(it);
            }
        }

    private:
        PNode _pHead;
    };

    void fun1()
    {
        list<int> lt;
        lt.push_back(1);
        lt.push_back(2);
        lt.push_back(3);
        lt.push_back(4);
        lt.push_back(5);
        for (auto& e : lt)
        {
            cout << e << " ";
        }
        cout << endl;
    }
};