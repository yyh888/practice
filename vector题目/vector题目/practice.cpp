#include <iostream>
#include <string>
#include <vector>
using namespace std;


//class Solution {
//public:
//    int removeDuplicates(vector<int>& nums) {
//        int n = nums.size();
//        vector<int>::iterator cur = nums.begin(), next = nums.begin() + 1;
//        while (cur < nums.end())
//        {
//            int ret = *cur;
//            while (next < nums.end() && ret == *next) next = nums.erase(next);
//            cur = next++;
//        }
//        return nums.size();
//    }
//};

//class Solution {
//public:
//
//    long long lowbit(long long x)
//    {
//        return x & -x;
//    }
//
//    vector<int> singleNumber(vector<int>& nums) {
//        int n = nums.size();
//        int key = 0;
//        for (int i = 0; i < n; i++) key ^= nums[i];
//        int ret = lowbit(key);
//        vector<int> v1, v2;
//        for (int& e : nums)
//        {
//            if (e & ret)
//            {
//                v1.push_back(e);
//            }
//            else
//            {
//                v2.push_back(e);
//            }
//        }
//        vector<int> ans;
//        int a = 0, b = 0;
//        for (int& e : v1)
//        {
//            a ^= e;
//        }
//        for (int& e : v2)
//        {
//            b ^= e;
//        }
//        cout << endl;
//        ans.push_back(a);
//        ans.push_back(b);
//        return ans;
//    }
//};


