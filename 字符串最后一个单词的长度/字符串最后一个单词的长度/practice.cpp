#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    getline(cin, s);
    size_t pos = s.rfind(' ');
    if (pos >= s.size())
    {
        cout << s.size()<< endl;
    }
    else
    {
        cout << s.size() - pos - 1 << endl;
    }
    return 0;
}