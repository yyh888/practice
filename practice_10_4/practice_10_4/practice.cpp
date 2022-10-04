#include <iostream>
using namespace std;

class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int tmp = x;
        long long reversenum = 0;
        while (tmp)
        {
            reversenum = reversenum * 10 + tmp % 10;
            tmp /= 10;
        }
        return x == reversenum;
    }
};

// 2
class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0))
        {
            return false;
        }
        int reversenum = 0;
        while (reversenum < x)
        {
            reversenum = reversenum * 10 + x % 10;
            x /= 10;
        }
        return x == reversenum || reversenum / 10 == x;
    }
};