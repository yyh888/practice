#pragma once
#include <iostream>
#include <assert.h>
using namespace std;
namespace yyh

{
    template<class T>
    class vector

    {

    public:

        // Vector的迭代器是一个原生指针

        typedef T* iterator;

        typedef const T* const_iterator;

        iterator begin()
        {
            return _start;
        }

        iterator end()
        {
            return _finish;
        }

        const_iterator cbegin() const
        {
            return _start;
        }

        const_iterator cend() const
        {
            return _finish;
        }



            // construct and destroy

        vector()
            : _start(nullptr)
            , _endOfStorage(nullptr)
            , _finish(nullptr)
        {}

        vector(int n, const T& value = T())
        {
            _start = new T[n];
            _finish = _start;
            _endOfStorage = _start + n;
            for (int i = 0; i < n; i++)
            {
                *_finish = value;
                _finish++;
            }
        }

        template<class InputIterator>
        vector(InputIterator first, InputIterator last)
            : _start(nullptr)
            , _finish(nullptr)
            , _endOfStorage(nullptr)
        {
            while (first != last)
            {
                push_back(*first);
                ++first;
            }
        }

        void swap(vector<T>& v)
        {
            std::swap(_start, v._start);
            std::swap(_finish, v._finish);
            std::swap(_endOfStorage, v._endOfStorage);
        }

        vector(const vector<T>& v)
            : _start(nullptr)
            , _finish(nullptr)
            , _endOfStorage(nullptr)
        {
            vector<T> tmp(v.cbegin(), v.cend());
            swap(tmp);
        }

        vector<T>& operator=(vector<T> v)
        {
            swap(v);
            return *this;
        }

            ~vector()
            {
                delete[]_start;
                _start = _endOfStorage = _finish = nullptr;
            }

            // capacity

            size_t size() const
            {
                return _finish - _start;
            }

            size_t capacity() const
            {
                return _endOfStorage - _start;
            }

            void reserve(size_t n)
            {
                if (n > size())
                {
                    int old = size();
                    // 拷贝回去
                    T* tmp = new T[n];
                    for (int i = 0; i < old; i++)
                    {
                        tmp[i] = _start[i];
                    }
                    delete[]_start;
                    _start = tmp;
                    _finish = _start + old;
                    _endOfStorage = _start + n;
                }
                else
                {
                    _finish = _start + n;
                }
            }

            void resize(size_t n, const T& value = T())
            {
                if (n <= capacity())
                {
                    _finish = _start + n;
                }
                else
                {
                    reserve(n);
                    while (_finish != _endOfStorage)
                    {
                        *_finish = value;
                        ++_finish;
                    }
                }
            }



            ///////////////access///////////////////////////////

            T& operator[](size_t pos)
            {
                return *(_start + pos);
            }

            const T& operator[](size_t pos)const
            {
                return *(_start + pos);
            }



            ///////////////modify/////////////////////////////

            void push_back(const T& x)
            {
                if (_finish == _endOfStorage)
                {
                    reserve(capacity() == 0 ? 4 : 2 * capacity());
                }
                *_finish = x;
                ++_finish;
            }

            void pop_back()
            {
                assert(_finish > _start);
                --_finish;
            }

            iterator insert(iterator pos, const T& x)
            {
                int old = pos - _start;
                if (_finish == _endOfStorage)
                {
                    reserve(capacity() == 0 ? 4 : 2 * capacity());
                    pos = _start + old;
                }
                iterator add = _finish;
                while (add != pos)
                {
                    *add = *(add - 1);
                    add--;
                }
                *pos = x;
                _finish++;
                return pos;
            }

            iterator erase(iterator pos)
            {
                assert(size() > 0);
                iterator del = pos;
                while (del != _finish)
                {
                    *del = *(del + 1);
                    del++;
                }
                _finish--;
                return pos;
            }

    private:

        iterator _start; // 指向数据块的开始

        iterator _finish; // 指向有效数据的尾

        iterator _endOfStorage; // 指向存储容量的尾

    };

    void fun1()
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i] << " ";
        }
        cout << endl;
        vector<int> v2(v);
        v2.resize(10);
        for (int i = 0; i < v2.size(); i++)
        {
            cout << v2[i] << " ";
        }
        cout << endl;
    }

    void fun2()
    {
        vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);
        v.push_back(4);
        v.insert(v.end(), 5);
        v.insert(v.begin() + 3, 100);
        for (auto& e : v)
        {
            cout << e << " ";
        }
    }
}