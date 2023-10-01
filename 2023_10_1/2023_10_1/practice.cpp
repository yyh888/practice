//class Solution {
//public:
//    bool lemonadeChange(vector<int>& bills) {
//        vector<int> nums(3);
//        int n = bills.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (bills[i] == 5)
//            {
//                nums[0]++;
//            }
//            else if (bills[i] == 10)
//            {
//                if (nums[0] > 0)
//                {
//                    nums[0]--;
//                    nums[1]++;
//                }
//                else return false;
//            }
//            else
//            {
//                if (nums[0] > 0 && nums[1] > 0)
//                {
//                    nums[0]--;
//                    nums[1]--;
//                    nums[2]++;
//                }
//                else if (nums[0] > 0)
//                {
//                    if (nums[0] < 3) return false;
//                    else
//                    {
//                        nums[0] -= 3;
//                        nums[2]++;
//                    }
//                }
//                else return false;
//            }
//        }
//        return true;
//    }
//};


//class Solution {
//public:
//    int halveArray(vector<int>& nums) {
//        priority_queue<double, vector<double>, less<double>> pq;
//        double sum = 0;
//        for (double num : nums)
//        {
//            sum += num;
//            pq.push(num);
//        }
//        double ans = sum / 2;
//        int res = 0;
//        while (sum > ans)
//        {
//            double tmp = pq.top();
//            pq.pop();
//            tmp /= 2;
//            if (tmp != 0) pq.push(tmp);
//            sum -= tmp;
//            res++;
//        }
//        return res;
//    }
//};