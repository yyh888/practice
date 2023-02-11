#include <asm-generic/errno.h>
#include <iostream>
#include <map>
#include <utility>
#include <vector>
#include <algorithm>
#include <string>
using namespace std;

struct Compare {
    bool operator()(const pair<string, int>& p1, const pair<string, int>& p2) {
        return p1.second > p2.second || (p1.second == p2.second && p1.first < p2.first);
    }
};

int main() {
    string s;
    while (getline(cin, s)) {
        map<string, int> cntmap;
        for (int i = 0, j = 0; i < s.size(); i++) {
            if (s[i] == ' ' || s[i] == '.') {
                string t = s.substr(j, i - j);
                if (isupper(t[0]))
                    t[0] = tolower(t[0]);
                j = i + 1;
                cntmap[t]++;
            }
        }
        vector<pair<string, int>> v(cntmap.begin(), cntmap.end());
        sort(v.begin(), v.end(), Compare());
        for (auto& e : v) {
            cout << e.first << ":" << e.second << endl;
        }
    }
    return 0;
}
// 64 Î»Êä³öÇëÓÃ printf("%lld")