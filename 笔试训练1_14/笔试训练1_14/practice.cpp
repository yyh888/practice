class BinInsert {
public:
    int binInsert(int n, int m, int j, int i) {
        return n | (m << j);
    }
};


#include <iostream>
#include <cmath>
using namespace std;

bool istrue(int x)
{
    for (int i = 2; i <= sqrt(x); i++)
    {
        if (x % i == 0) return false;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;
    int x1, x2;
    x1 = x2 = n / 2;
    while (x1 != 0)
    {
        if (istrue(x1) && istrue(x2)) break;
        x1--;
        x2++;
    }
    cout << x1 << endl;
    cout << x2 << endl;
    return 0;
}