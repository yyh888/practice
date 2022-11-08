#include <iostream>
using namespace std;

class Solution {
public:
    int countConsistentStrings(string allowed, vector<string>& words) {
        int a[26] = { 0 };
        int sum = 0;
        for (int i = 0; allowed[i]; i++)
        {
            a[allowed[i] - 'a']++;
        }
        for (int i = 0; i < words.size(); i++)
        {
            int flag = 1;
            for (int j = 0; j < words[i].size(); j++)
            {
                if (a[words[i][j] - 'a'] == 0)
                {
                    flag = 0;
                    break;
                }
            }
            if (flag) sum++;
        }
        return sum;
    }
};