#include <iostream>

using namespace std;

const int N = 1e6 + 10;

int head, index, e[N], ne[N];

void init()
{
    head = -1;
    index = 0;
}

void push_front(int val)
{
    e[index] = val;
    ne[index] = head;
    head = index++;
}

void insert(int k, int val)
{
    e[index] = val;
    ne[index] = ne[k];
    ne[k] = index++;
}

void erase(int k)
{
    ne[k] = ne[ne[k]];
}

int main()
{
    int m;
    cin >> m;
    init();
    while (m--)
    {
        int k, x;
        char op;
        cin >> op;
        if (op == 'H')
        {
            cin >> x;
            push_front(x);
        }
        else if (op == 'D')
        {
            cin >> k;
            if (!k) head = ne[head];
            erase(k - 1);
        }
        else
        {
            cin >> k >> x;
            insert(k - 1, x);
        }
    }
    for (int i = head; i != -1; i = ne[i])
    {
        cout << e[i] << " ";
    }
    return 0;
}