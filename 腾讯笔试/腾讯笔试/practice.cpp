#include <iostream>
#include <vector>

using namespace std;


class LessHeap
{
public:
    void AdjustDown(int p)
    {
        int c = 2 * p + 1;
        while (c < con.size())
        {
            if (c + 1 < con.size() && con[c] > con[c + 1])// 小根
            {
                c++;
            }
            if (con[p] > con[c])
            {
                swap(con[p], con[c]);
                p = c;
                c = 2 * p + 1;
            }
            else break;
        }
    }

    void AdjustUp(int c)
    {
        int p = (c - 1) / 2;
        while (c > 0)
        {
            if (con[p] > con[c])
            {
                swap(con[p], con[c]);
                c = p;
                p = (c - 1) / 2;
            }
            else break;
        }
    }

    void push(int x)
    {
        con.push_back(x);
        AdjustUp(con.size() - 1);
    }

    int Find(int num)
    {
        auto it = find(con.begin(), con.end(), num);
        if (it == con.end()) return -1;
        else return it - con.begin();
    }

    void pop(int idx = 0)
    {
        if (idx != 0)
        {
            swap(con[0], con[idx]);
        }
        swap(con[0], con[con.size() - 1]);
        con.pop_back();
        AdjustDown(0);
    }

    vector<int> con;
};


class GreaterHeap
{
public:
    void AdjustDown(int p)
    {
        int c = 2 * p + 1;
        while (c < con.size())
        {
            if (c + 1 < con.size() && con[c] < con[c + 1])// 大根
            {
                c++;
            }
            if (con[p] < con[c])
            {
                swap(con[p], con[c]);
                p = c;
                c = 2 * p + 1;
            }
            else break;
        }
    }

    void AdjustUp(int c)
    {
        int p = (c - 1) / 2;
        while (c > 0)
        {
            if (con[p] < con[c])
            {
                swap(con[p], con[c]);
                c = p;
                p = (c - 1) / 2;
            }
            else break;
        }
    }

    void push(int x)
    {
        con.push_back(x);
        AdjustUp(con.size() - 1);
    }

    int Find(int num)
    {
        auto it = find(con.begin(), con.end(), num);
        if (it == con.end()) return -1;
        else return it - con.begin();
    }

    void pop(int idx = 0)
    {
        if (idx != 0)
        {
            swap(con[0], con[idx]);
        }
        swap(con[0], con[con.size() - 1]);
        con.pop_back();
        AdjustDown(0);
    }

    vector<int> con;
};