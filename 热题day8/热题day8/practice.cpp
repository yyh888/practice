// ��תͼ��
//class Solution {
//public:
//    void rotate(vector<vector<int>>& matrix) {
//        int n = matrix.size();
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < i; j++)
//            {
//                swap(matrix[i][j], matrix[j][i]);
//            }
//        }
//
//        for (int i = 0; i < n; i++)
//        {
//            for (int j = 0; j < n / 2; j++)
//            {
//                swap(matrix[i][j], matrix[i][n - j - 1]);
//            }
//        }
//    }
//};


// ��ĸ��λ�ʷ���
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string, vector<string>> hash;
//        for (string& str : strs)
//        {
//            string tmp = str;
//            sort(tmp.begin(), tmp.end());
//            hash[tmp].push_back(str);
//        }
//
//        vector<vector<string>> vv;
//
//        for (auto e : hash)
//        {
//            vv.push_back(e.second);
//        }
//        return vv;
//    }
//};


// ����������
//class Solution {
//public:
//    int maxSubArray(vector<int>& nums) {
//        int res = nums[0];
//        vector<int> dp(nums.size());
//        dp[0] = nums[0];
//        for (int i = 1; i < nums.size(); i++)
//        {
//            dp[i] = max(nums[i], nums[i] + dp[i - 1]);
//            res = max(dp[i], res);
//        }
//        return res;
//    }
//};

// ��Ծ��Ϸ
//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int n = nums.size();
//        if (n == 1)
//        {
//            return true;
//        }
//        vector<bool> flag(nums.size(), false);
//        flag[0] = true;
//        for (int i = 0; i < n - 1; i++)
//        {
//            if (flag[i] == false)
//            {
//                continue;
//            }
//            if (flag[i] == true && nums[i] + i >= n - 1)
//            {
//                return true;
//            }
//            for (int j = 1; j <= nums[i] && i + j < n - 1; j++)
//            {
//                flag[i + j] = true;
//            }
//        }
//        return false;
//    }
//};


//class Solution {
//public:
//    bool canJump(vector<int>& nums) {
//        int k = 0;// ����������Զλ��
//        for (int i = 0; i < nums.size(); i++)
//        {
//            if (i > k)
//            {
//                return false;
//            }
//            k = max(k, nums[i] + i);
//        }
//        return true;
//    }
//};


//�ϲ�����
//class Solution {
//public:
//    vector<vector<int>> merge(vector<vector<int>>& intervals) {
//        vector<vector<int>> vv;
//        sort(intervals.begin(), intervals.end());
//        int start = intervals[0][0], end = intervals[0][1];
//        for (int i = 1; i < intervals.size(); i++)
//        {
//            if (intervals[i][0] > end)
//            {
//                vv.push_back({ start, end });
//                start = intervals[i][0];
//                end = intervals[i][1];
//            }
//            else
//            {
//                end = max(end, intervals[i][1]);
//                start = min(start, intervals[i][0]);
//            }
//        }
//        vv.push_back({ start, end });
//        return vv;
//    }
//};

