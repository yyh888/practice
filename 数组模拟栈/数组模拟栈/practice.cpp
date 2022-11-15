#include <iostream>

using namespace std;

const int N = 1e6 + 10;
int a[N], top;

void push(int val)
{
    a[top++] = val;
}

void pop()
{
    top--;
}

string empty()
{
    if (top == 0) return "YES";
    else return "NO";
}

int query()
{
    return a[top - 1];
}

int main()
{
    int m;
    cin >> m;
    string op;
    int x;
    while (m--)
    {
        cin >> op;
        if (op == "push")
        {
            cin >> x;
            push(x);
        }
        else if (op == "pop")
        {
            pop();
        }
        else if (op == "empty")
        {
            cout << empty() << endl;
        }
        else
        {
            cout << query() << endl;
        }
    }
    return 0;
}

