#include<iostream>
using namespace std;
int main()
{
    int count[55] = { 1, 2, 3, 4 };
    for (int i = 4; i < 55; i++)
    {
        count[i] = count[i - 1] + count[i - 3];
    }
    int n = 0;
    while (1)
    {
        cin >> n;
        if (n == 0)
        {
            break;
        }
        cout << count[n - 1] << endl;
    }
    return 0;
}