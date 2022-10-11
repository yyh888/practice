#include <iostream>
#include <vector>
#include <string>

using namespace std;


class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        vector<int> v;
        int n = s1.size();
        for (int i = 0; i < n; i++)
        {
            if (s1[i] != s2[i])
            {
                v.push_back(i);
            }
        }
        if (v.size() == 0) {
            return true;
        }
        if (v.size() != 2) {
            return false;
        }
        swap(s2[v[0]], s2[v[1]]);
        return s1 == s2;
    }
};

