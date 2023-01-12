#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    cin >> s;
    int ans = 0;
    int dig = 0, sym = 0;
    bool alp = false, ALP = false;
    int alplen = 0;
    if (s.size() <= 4) ans += 5;
    else if (s.size() <= 7) ans += 10;
    else ans += 25;
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i] >= '1' && s[i] <= '9') dig++;// Êý×Ö
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            alp = true;
            alplen++;
        }
        else if (s[i] >= 'A' && s[i] <= 'Z')
        {
            ALP = true;
            alplen++;
        }
        else
        {
            sym++;
        }
    }
    if (alplen == s.size()) ans += 10;
    if (alp && ALP) ans += 20;
    if (dig == 1) ans += 10;
    else if (dig > 1) ans += 20;
    if (sym == 1) ans += 10;
    else if (sym > 1) ans += 25;
    if (alp && ALP && dig > 0 && sym > 0) ans += 5;
    else if ((alp || ALP) && dig > 0 && sym > 0) ans += 3;
    else if (dig > 0 && sym > 0) ans += 2;

    if (ans >= 90) cout << "VERY_SECURE";
    else if (ans >= 80) cout << "SECURE";
    else if (ans >= 70) cout << "VERY_STRONG";
    else if (ans >= 60) cout << "STRONG";
    else if (ans >= 50) cout << "AVERAGE";
    else if (ans >= 25) cout << "WEAK";
    else cout << "VERY_WEAK";
    return 0;
}