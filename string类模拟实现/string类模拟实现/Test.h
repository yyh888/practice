#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <assert.h>
using namespace std;
namespace yyh

{

    class string

    {

        friend ostream& operator<<(ostream& _cout, const yyh::string& s)
        {
            _cout << s.c_str();
            return _cout;
        }

        friend istream& operator>>(istream& _cin, yyh::string& s)
        {
            s.clear();
            _cin >> s._str;
            return _cin;
        }

    public:

        typedef char* iterator;

    public:

        string(const char* str = "")
            : _size(strlen(str))
            , _capacity(_size)
        {
            _str = new char[_capacity + 1];
            strcpy(_str, str);
        }

        // s1(s2)
        string(const string& s)
            : _str(nullptr)
        {
            string tmp(s._str);
            swap(tmp);
        }

        string& operator=(string s)
        {
            swap(s);
            return *this;
        }

        ~string()
        {
            delete[]_str;
            _str = nullptr;
            _capacity = _size = 0;
        }



        //////////////////////////////////////////////////////////////

        // iterator

        iterator begin()
        {
            return _str;
        }

        iterator end()
        {
            return _str + _size;
        }



        /////////////////////////////////////////////////////////////

        // modify

        void push_back(char c)
        {
            insert(_size, c);
        }

        string& operator+=(char c)
        {
            push_back(c);
            return *this;
        }

        void append(const char* str)
        {
            insert(_size, str);
        }

        string& operator+=(const char* str)
        {
            append(str);
            return *this;
        }

        void clear()
        {
            _str[0] = '\0';
            _size = 0;
        }

        void swap(string& s)
        {
            std::swap(_str, s._str);
            std::swap(_size, s._size);
            std::swap(_capacity, s._capacity);
        }

        const char* c_str()const
        {
            return _str;
        }



        /////////////////////////////////////////////////////////////

        // capacity

        size_t size()const
        {
            return _size;
        }

        size_t capacity()const
        {
            return _capacity;
        }

        bool empty()const
        {
            return _size == 0;
        }

        void resize(size_t n, char c = '\0')
        {
            if (n > _size)
            {
                if (n > _capacity)
                    reserve(n);
                for (int i = _size; i < _capacity; i++)
                {
                    _str[i] = 'c';
                }
                _size = n;
                _str[_size] = '\0';
            }
        }

        void reserve(size_t n)
        {
            if (n <= size())
            {
                _str[n] = '\0';
                _size = n;
            }
            else
            {
                char* tmp = new char[n + 1];
                strcpy(tmp, _str);
                delete[]_str;
                _str = tmp;
                _capacity = n;
            }
        }



        /////////////////////////////////////////////////////////////

        // access

        char& operator[](size_t index)
        {
            return _str[index];
        }

        const char& operator[](size_t index)const
        {
            return _str[index];
        }



        /////////////////////////////////////////////////////////////

        //relational operators

        bool operator<(const string& s)
        {
            return strcmp(_str, s._str) < 0;
        }

        bool operator<=(const string& s)
        {
            return !(*this > s);
        }

        bool operator>(const string& s)
        {
            return strcmp(_str, s._str) > 0;
        }

        bool operator>=(const string& s)
        {
            return !(*this < s);
        }

        bool operator==(const string& s)
        {
            return strcmp(_str, s._str) == 0;
        }

        bool operator!=(const string& s)
        {
            return !(*this == s);
        }



        // 返回c在string中第一次出现的位置

        size_t find(char c, size_t pos = 0) const
        {
            for (size_t i = 0; i < size(); i++)
            {
                if (_str[i] == c)
                {
                    return i;
                }
            }
            return npos;
        }

        // 返回子串s在string中第一次出现的位置

        size_t find(const char* s, size_t pos = 0) const
        {
            const char* ans = strstr(_str + pos, s);
            if (ans)
            {
                return ans - _str;
            }
            return npos;
        }

        // 在pos位置上插入字符c/字符串str，并返回该字符的位置

        string& insert(size_t pos, char c)
        {
            if (_size + 1 >= _capacity)
            {
                reserve(_capacity == 0 ? 4 : 2 * _capacity);
            }
            size_t end = _size + 1;
            while (end > pos)
            {
                _str[end] = _str[end - 1];
                end--;
            }
            _str[pos] = c;
            _size++;
            return *this;
        }

        string& insert(size_t pos, const char* str)
        {
            size_t sz = strlen(str);
            size_t n = sz + size();
            if (n > _capacity)
            {
                reserve(n);
            }
            size_t end = n;
            while (end >= pos + sz)
            {
                _str[end] = _str[end - sz];
                end--;
            }
            for (size_t i = pos; i < sz + pos; i++)
            {
                _str[i] = *str;
                str++;
            }
            _size += sz;
            return *this;
        }



        // 删除pos位置上的元素，并返回该元素的下一个位置

        string& erase(size_t pos, size_t len)
        {
            assert(pos < _size);
            if (pos + len >= _size)
            {
                _size = pos;
                _str[_size] = '\0';
            }
            else
            {
                strcpy(_str + pos, _str + pos + len);
                _size -= len;
            }
            return *this;
        }

    private:

        char* _str;
        size_t _size;
        size_t _capacity;
        static const size_t npos = -1;

    };

}
