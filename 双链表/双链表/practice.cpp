#include <iostream>
#include <string>
using namespace std;

const int N = 1e6 + 10;
int e[N], l[N], r[N], index;

void init()
{
    index = 2;
    // 0表示head，1表示尾
    r[0] = 1;
    l[1] = 0;
}

void push_front(int val)
{
    e[index] = val;
    l[index] = 0;
    r[index] = r[0];
    l[r[0]] = index;
    r[0] = index++;
}

void push_back(int val)
{
    e[index] = val;
    l[index] = l[1];
    r[index] = 1;
    r[l[1]] = index;
    l[1] = index++;
}

void erase(int k)
{
    r[l[k]] = r[k];
    l[r[k]] = l[k];
}

void left_insert(int k, int val)
{
    e[index] = val;
    l[index] = l[k];
    r[index] = k;
    r[l[k]] = index;
    l[k] = index++;
}

void right_insert(int k, int val)
{
    e[index] = val;
    l[index] = k;
    r[index] = r[k];
    l[r[k]] = index;
    r[k] = index++;
}

int main()
{
    init();
    int m;
    cin >> m;
    string op;
    int k, x;
    while (m--)
    {
        cin >> op;
        if (op == "L")
        {
            cin >> x;
            push_front(x);
        }
        else if (op == "R")
        {
            cin >> x;
            push_back(x);
        }
        else if (op == "D")
        {
            cin >> k;
            erase(k + 1);
        }
        else if (op == "IL")
        {
            cin >> k >> x;
            left_insert(k + 1, x);
        }
        else
        {
            cin >> k >> x;
            right_insert(k + 1, x);
        }
    }
    for (int i = r[0]; i != 1; i = r[i])
    {
        cout << e[i] << " ";
    }
    return 0;
}