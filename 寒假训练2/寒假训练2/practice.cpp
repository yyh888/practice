#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    int FirstNotRepeatingChar(string str) {
        int a[52];
        int ans = -1;
        memset(a, 0, 4 * 52);
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] <= 'z' && str[i] >= 'a')
                a[str[i] - 'a']++;
            else
            {
                a[str[i] - 'A' + 26]++;
            }
        }
        for (int i = 0; i < str.size(); i++)
        {
            if (str[i] <= 'z' && str[i] >= 'a') {
                if (a[str[i] - 'a'] == 1)
                {
                    ans = i;
                    break;
                }
            }
            else
            {
                if (a[str[i] - 'A' + 26] == 1)
                {
                    ans = i;
                    break;
                }
            }
        }
        return ans;
    }
};



class Solution {
public:
    bool isUnique(string astr) {
        int a[26];
        memset(a, 0, 4 * 26);
        for (int i = 0; i < astr.size(); i++)
        {
            a[astr[i] - 'a']++;
        }
        bool flag = true;
        for (int i = 0; i < 26; i++)
        {
            if (a[i] > 1) flag = false;
        }
        return flag;
    }
};