#include <iostream>
#include <string>
#include <vector>
using namespace std;
// 字符串转整形数字
class Solution {
public:
    int StrToInt(string str) {
        int n = str.size();
        int ret = 0;
        int flag;
        int i = 0;
        if (str[0] == '+')
        {
            flag = 1;
            i++;
        }
        if (str[0] == '-')
        {
            flag = -1;
            i++;
        }
        for (; i < n; i++)
        {
            if (str[i] < '0' || str[i] > '9')
            {
                return 0;
            }
            else
            {
                ret = ret * 10 + str[i] - '0';
            }
        }
        return flag * ret;
    }
};

//字符串相加
class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        int add = 0;
        string ret;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = 0, val2 = 0;
            if (end1 >= 0)
            {
                val1 = num1[end1] - '0';
                end1--;
            }
            if (end2 >= 0)
            {
                val2 = num2[end2] - '0';
                end2--;
            }
            int tmp = val1 + val2 + add;
            if (tmp > 9)
            {
                tmp -= 10;
                add = 1;
            }
            else
            {
                add = 0;
            }
            ret += tmp + '0';
        }
        if (add)
        {
            ret += '1';
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }
};

// 反转字符串
class Solution {
public:
    void reverseString(vector<char>& s) {
        int n = s.size();
        int left = 0, right = n - 1;
        while (left < right)
        {
            swap(s[left], s[right]);
            ++left;
            --right;
        }
    }
};

// 反转字符串中的单词 III
class Solution {
public:
    string reverseWords(string s) {
        int n = s.size();
        int pos_prev = 0, pos = 0, end = 0;
        string ret;
        while (pos < n)
        {
            pos_prev = pos;
            if (s[pos] == ' ')
            {
                pos_prev++;
                pos++;
            }
            while (pos < n && s[pos] != ' ')
            {
                pos++;
            }
            end = pos - 1;
            while (end >= pos_prev)
            {
                ret += s[end];
                end--;
            }
            if (pos < n)
                ret += ' ';
        }
        return ret;
    }
};

// 字符串相乘
class Solution {
public:
    string addStrings(string num1, string num2) {
        int end1 = num1.size() - 1, end2 = num2.size() - 1;
        int add = 0;
        string ret;
        while (end1 >= 0 || end2 >= 0)
        {
            int val1 = 0, val2 = 0;
            if (end1 >= 0)
            {
                val1 = num1[end1] - '0';
                end1--;
            }
            if (end2 >= 0)
            {
                val2 = num2[end2] - '0';
                end2--;
            }
            int tmp = val1 + val2 + add;
            if (tmp > 9)
            {
                tmp -= 10;
                add = 1;
            }
            else
            {
                add = 0;
            }
            ret += tmp + '0';
        }
        if (add)
        {
            ret += '1';
        }
        reverse(ret.begin(), ret.end());
        return ret;
    }


    string multiply(string num1, string num2) {
        string s;
        if (num1 == "0" || num2 == "0")
        {
            s += '0';
            return "0";
        }
        int n = num1.size(), m = num2.size();
        string sum;
        for (int i = m - 1; i >= 0; i--)
        {
            int tmpnum;
            string tmpstr;
            int add = 0;
            for (int j = n - 1; j >= 0; j--)
            {
                tmpnum = (num1[j] - '0') * (num2[i] - '0') + add;
                if (tmpnum > 9)
                {
                    add = (tmpnum / 10);
                    tmpnum %= 10;
                }
                else
                {
                    add = 0;
                }
                tmpstr += tmpnum + '0';
            }
            if (add)
            {
                tmpstr += add + '0';
            }
            reverse(tmpstr.begin(), tmpstr.end());
            int count = m - 1 - i;
            while (count--)
            {
                tmpstr += '0';
            }
            sum = addStrings(sum, tmpstr);
        }
        return sum;
    }
};