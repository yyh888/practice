#include <iostream>

using namespace std;

int n;

void move(char x, char y)
{
    n++;
}

void hannoi(int m, char a, char b, char c)
{
    if (m == 1) move(a, c);
    else {
        hannoi(m - 1, a, c, b);
        move(a, c);
        hannoi(m - 1, b, a, c);
    }
}

int main()
{
    int m;
    cin >> m;
    hannoi(m, 'a', 'b', 'c');
    cout << n;
    return 0;
}