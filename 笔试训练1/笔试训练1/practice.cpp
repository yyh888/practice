#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    string::iterator it = s1.begin();
    while (it <= s1.end())
    {
        for (int i = 0; i < s2.size(); i++)
        {
            if (*it == s2[i]) it = s1.erase(it);
        }
        it++;
    }
    cout << s1 << endl;
    return 0;
}



