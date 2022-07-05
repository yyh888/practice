#include<iostream>


class Add
{
public:
    Add()
    {
        _ret += _i;
        _i++;
    }
    static int GetRet()
    {
        return _ret;
    }
    static void Init()
    {
        _i = 1;
        _ret = 0;
    }
private:
    static int _i;
    static int _ret;
};

int Add::_i = 1;
int Add::_ret = 0;

class Solution {
public:
    int Sum_Solution(int n) {
        Add::Init();
        Add arr[n];
        return Add::GetRet();
    }
};