#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    string ans;
    int max = -1;
    cin >> s;
    int n = s.size();
    int i = 0, j = 0;
    while (j < n)
    {
        int len = 0;
        while (i < n && (s[i] < '1' || s[i] > '9'))
        {
            i++;
        }
        j = i;
        while (j < n && s[j] >= '1' && s[j] <= '9')
        {
            j++;
            len++;
        }
        if (len > max)
        {
            max = len;
            ans = s.substr(i, len);
        }
        i = j;
    }
    cout << ans;
    return 0;
}