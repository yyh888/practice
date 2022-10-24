#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        // 右数组的最小值
        vector<int> MinRight(n);
        MinRight[n - 1] = nums[n - 1];
        for (int i = n - 2; i >= 0; i--)
        {
            MinRight[i] = min(MinRight[i + 1], nums[i]);
        }
        int MaxLeft = MinRight[0];
        for (int i = 0; i < n - 1; i++)
        {
            MaxLeft = max(MaxLeft, nums[i]);
            if (MaxLeft <= MinRight[i + 1])
            {
                return i + 1;
            }
        }
        // 题目保证有
        return n - 1;
    }
};


class Solution {
public:
    int partitionDisjoint(vector<int>& nums) {
        int n = nums.size();
        int CurMax = nums[0], pos = 0, LeftMax = nums[0];
        for (int i = 0; i < n - 1; i++)
        {
            CurMax = max(CurMax, nums[i]);
            if (LeftMax > nums[i])
            {
                pos = i;
                LeftMax = CurMax;
            }
        }
        return pos + 1;
    }
};