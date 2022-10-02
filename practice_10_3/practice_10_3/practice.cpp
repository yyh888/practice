#include <iostream>
#include <string>
using namespace std;

class Solution {
public:
    bool checkOnesSegment(string s) {
        int n = s.size();
        int i = 0;
        // 跳过开头的1
        while (i < n && s[i] == '1')
        {
            i++;
        }
        while (i < n)
        {
            if (i < n && s[i] == '1')
            {
                return false;
            }
            i++;
        }
        return true;
    }
};

// 2
class Solution {
public:
    bool checkOnesSegment(string s) {
        return s.find("01") == string::npos;
    }
};