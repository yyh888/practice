#include <iostream>
using namespace std;

class Solution {
public:
    class sum
    {
    public:
        sum()
        {
            _ret += _i;
            _i++;
        }
        static int _i;
        static int _ret;
    };

    int Sum_Solution(int n) {
        sum arr[n];
        return sum::_ret;
    }
};

int Solution::sum::_i = 1;
int Solution::sum::_ret = 0;

#include <iostream>
using namespace std;

int main() {
    int year, day;
    int Day[2][13] = { {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31},
    {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31} };
    while (~scanf("%d %d", &year, &day)) {
        int row = 0;
        int month = 1;
        if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        {
            row++;
        }
        while (day > Day[row][month])
        {
            day -= Day[row][month];
            month++;
        }
        printf("%04d-%02d-%02d\n", year, month, day);
    }
    return 0;
}