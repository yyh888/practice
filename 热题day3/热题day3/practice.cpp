// 三数之和
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        vector<vector<int>> vv;
//        if (nums.size() < 3)
//        {
//            return vv;
//        }
//        sort(nums.begin(), nums.end());
//        for (int i = 0; i < nums.size() && nums[i] <= 0; i++)
//        {
//            if (i > 0 && nums[i] == nums[i - 1])
//            {
//                continue;
//            }
//            int l = i + 1, r = nums.size() - 1;
//            while (l < r)
//            {
//                if (nums[i] + nums[l] + nums[r] == 0)
//                {
//                    vv.push_back({ nums[i], nums[l], nums[r] });
//                    l++;
//                    r--;
//                    while (l < r && nums[l] == nums[l - 1])
//                    {
//                        l++;
//                    }
//                    while (l < r && nums[r] == nums[r + 1])
//                    {
//                        r--;
//                    }
//                }
//                else if (nums[i] + nums[l] + nums[r] < 0)
//                {
//                    l++;
//                }
//                else
//                {
//                    r--;
//                }
//            }
//        }
//        return vv;
//    }
//};


// 删除链表的倒数第 N 个结点
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        int m = 0;
//        ListNode* cur = head;
//        while (cur)
//        {
//            cur = cur->next;
//            m++;
//        }
//        if (m == 1)
//        {
//            return nullptr;
//        }
//        ListNode* pre = nullptr;
//        cur = head;
//        int cnt = m - n;
//        while (cnt--)
//        {
//            pre = cur;
//            cur = cur->next;
//        }
//        if (pre == nullptr)
//        {
//            return cur->next;
//        }
//        else
//        {
//            pre->next = cur->next;
//        }
//        return head;
//    }
//};


//括号生成
//class Solution {
//public:
//    vector<string> res;
//
//    void dfs(string s, int left, int right)
//    {
//        if (left == 0 && right == 0)
//        {
//            res.push_back(s);
//            return;
//        }
//        if (left > right)
//        {
//            return;
//        }
//        if (left > 0)
//        {
//            dfs(s + '(', left - 1, right);
//        }
//        if (right > 0)
//        {
//            dfs(s + ')', left, right - 1);
//        }
//    }
//
//    vector<string> generateParenthesis(int n) {
//        if (n == 0)
//        {
//            return res;
//        }
//        dfs("", n, n);
//        return res;
//    }
//};