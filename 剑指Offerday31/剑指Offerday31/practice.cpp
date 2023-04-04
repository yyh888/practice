// 队列的最大值
//class MaxQueue {
//public:
//    queue<int> qq;
//    deque<int> Maxqq;
//    MaxQueue() {
//
//    }
//
//    int max_value() {
//        if (qq.empty())
//        {
//            return -1;
//        }
//        return Maxqq.front();
//    }
//
//    void push_back(int value) {
//        qq.push(value);
//        while (!Maxqq.empty() && value > Maxqq.back())
//        {
//            Maxqq.pop_back();
//        }
//        Maxqq.push_back(value);
//    }
//
//    int pop_front() {
//        if (qq.empty())
//        {
//            return -1;
//        }
//        int val = qq.front();
//        qq.pop();
//        if (val == Maxqq.front())
//        {
//            Maxqq.pop_front();
//        }
//        return val;
//    }
//};

// 扑克牌中的顺子
//class Solution {
//public:
//    bool isStraight(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        int cnt = 0;
//        if (nums[1] == 0) cnt = 2;
//        else if (nums[0] == 0) cnt = 1;
//        int i = 0;
//        while (nums[i] == 0) i++;
//        for (; i < 4; i++)
//        {
//            if (nums[i] >= nums[i + 1])
//            {
//                return false;
//            }
//            int sub = nums[i + 1] - nums[i] - 1;
//            cnt -= sub;
//            if (cnt < 0)
//            {
//                return false;
//            }
//        }
//        return true;
//    }
//};

// 把字符串转换成整数
//class Solution {
//public:
//    int strToInt(string str) {
//        bool oneflag = true;
//        int flag = 1;
//        int i = 0;
//        long long ans = 0;
//        while (i < str.size())
//        {
//            if (!oneflag && (str[i] < '0' || str[i] > '9'))
//            {
//                break;
//            }
//            while (oneflag && i < str.size() && str[i] == ' ')
//            {
//                i++;
//            }
//
//            if (str[i] == '-')
//            {
//                flag = -1;
//                i++;
//                oneflag = false;
//                continue;
//            }
//            if (str[i] == '+')
//            {
//                i++;
//                oneflag = false;
//                continue;
//            }
//
//            if (oneflag && (i == str.size() || (str[i] < '0' || str[i] > '9')))
//            {
//                return 0;
//            }
//            else
//            {
//                oneflag = false;
//            }
//
//            ans = ans * 10 + (str[i] - '0');
//            if (ans > INT_MAX)
//            {
//                if (flag == -1)
//                {
//                    return INT_MIN;
//                }
//                else
//                {
//                    return INT_MAX;
//                }
//            }
//            i++;
//        }
//        return flag * ans;
//    }
//};