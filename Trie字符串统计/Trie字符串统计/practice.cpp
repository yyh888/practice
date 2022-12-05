#include <iostream>

using namespace std;

const int N = 1e5 + 10;

int son[N][26], cnt[N], idx;
char str[N];

void insert(char a[])
{
    int p = 0;
    for (int i = 0; a[i]; i++)
    {
        int n = a[i] - 'a';
        if (!son[p][n]) son[p][n] = ++idx;
        p = son[p][n];
    }
    cnt[p]++;
}

int query(char a[])
{
    int p = 0;
    for (int i = 0; a[i]; i++)
    {
        int n = a[i] - 'a';
        if (!son[p][n]) return 0;
        p = son[p][n];
    }
    return cnt[p];
}

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        char ch;
        cin >> ch >> str;
        if (ch == 'I')
        {
            insert(str);
        }
        else
        {
            cout << query(str) << endl;
        }
    }
    return 0;
}