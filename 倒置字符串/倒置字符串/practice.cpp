#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    getline(cin, s);
    s += ' ';
    string ans;
    int n = s.size();
    int i = n - 1, j = n - 1;
    while (i > 0 && j > 0)
    {
        while (i > 0 && s[i] != ' ')
        {
            i--;
        }
        if (i > 0)
        {
            ans += s.substr(i + 1, j - i);
            j = i;
            i--;
        }
    }
    ans += s.substr(0, j);
    cout << ans;
    return 0;
}