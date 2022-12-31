#include <iostream>

using namespace std;

class Solution {
public:
    string compressString(string S) {
        string ret;
        int p1 = 0, p2 = 0;
        while (S[p2])
        {
            int t = 0;
            ret += S[p1];
            while (S[p2] && S[p1] == S[p2])
            {
                ++t;
                p2++;
            }
            p1 = p2;
            ret += to_string(t);
        }
        if (S.size() > ret.size()) return ret;
        return S;
    }
};


class Solution {
public:
    int exchangeBits(int num) {
        int o = num & 0x55555555;
        int j = num & 0xAAAAAAAA;
        return (o << 1) | (j >> 1);
    }
};