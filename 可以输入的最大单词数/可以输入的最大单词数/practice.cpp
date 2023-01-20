#include <iostream>
#include <string>
using namespace std;

int canBeTypedWords(string text, string brokenLetters) {
    for (int i = 0; i < brokenLetters.size(); i++)
    {
        for (int j = 0; j < text.size(); j++)
        {
            if (text[j] == brokenLetters[i]) text[j] = '1';
        }
    }
    int ans = 0, del = 0;
    int i = 0;
    while (i < text.size())
    {
        int flag = 0;
        while (i < text.size() && text[i] != ' ')
        {
            if (text[i] == '1') flag = 1;
            ++i;
        }
        if (flag) ++del;
        ++ans;
        ++i;
    }
    return ans - del;
}

int main()
{
    string s1 = "leet code";
    string s2 = "e";
    canBeTypedWords(s1, s2);
    return 0;
}