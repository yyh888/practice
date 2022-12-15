#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int getLucky(string s, int k) {
        string tmp;
        for (int i = 0; i < s.size(); i++)
        {
            int ret = s[i] - 'a' + 1;
            tmp += to_string(ret);
        }
        while (k--)
        {
            int ans = 0;
            for (int i = 0; i < tmp.size(); i++)
            {
                ans += tmp[i] - '0';
            }
            tmp = to_string(ans);
        }
        return stoi(tmp);
    }
};