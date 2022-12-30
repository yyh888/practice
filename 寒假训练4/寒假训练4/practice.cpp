#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> s;
        if (s.size() >= 10)
        {
            int count = s.size() - 2;
            char end = s[s.size() - 1];
            char start = s[0];
            string ret;
            ret += start;
            ret += to_string(count);
            ret += end;
            s = ret;
        }
        cout << s << endl;
    }
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")


class Solution {
public:
    string replaceSpaces(string S, int length) {
        string ans = "";
        for (int i = 0; i < length; i++) {
            if (S[i] == ' ') {
                ans += "%20";
            }
            else {
                ans += S[i];
            }
        }
        return ans;
    }
};
