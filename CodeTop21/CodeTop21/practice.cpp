// 删除排序链表中的重复元素 II
//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* pre = pHead;
//        ListNode* cur = head, * next = nullptr;
//        if (cur) next = cur->next;
//        while (next)
//        {
//            if (cur->val != next->val)
//            {
//                pre = cur;
//                cur = next;
//                next = cur->next;
//            }
//            else
//            {
//                while (next && next->val == cur->val)
//                {
//                    next = next->next;
//                }
//                pre->next = next;
//                cur = next;
//                if (cur) next = cur->next;
//            }
//        }
//        return pHead->next;
//    }
//};


//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (head == nullptr || head->next == nullptr)
//        {
//            return head;
//        }
//        if (head->val != head->next->val)
//        {
//            head->next = deleteDuplicates(head->next);
//        }
//        else
//        {
//            ListNode* cur = head->next;
//            while (cur && cur->val == head->val)
//            {
//                cur = cur->next;
//            }
//            return deleteDuplicates(cur);
//        }
//        return head;
//    }
//};


// 长度最小的子数组
//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int n = nums.size();
//        int minLen = n + 1;
//        int sum = 0;
//        for (int i = 0, j = 0; i < n; i++)
//        {
//            sum += nums[i];
//            while (sum >= target)
//            {
//                minLen = min(minLen, i - j + 1);
//                sum -= nums[j++];
//            }
//        }
//        return minLen == n + 1 ? 0 : minLen;
//    }
//};

// 子集
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//    int n;
//
//    void dfs(vector<int>& nums, int idx)
//    {
//        if (idx == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        dfs(nums, idx + 1);
//        tmp.push_back(nums[idx]);
//        dfs(nums, idx + 1);
//        tmp.pop_back();
//    }
//
//    vector<vector<int>> subsets(vector<int>& nums) {
//        n = nums.size();
//        dfs(nums, 0);
//        return res;
//    }
//};


// 子集 II
//class Solution {
//public:
//    int n;
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(bool preflag, vector<int>& nums, int idx)
//    {
//        if (idx == n)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        dfs(false, nums, idx + 1);
//        if (!preflag && idx > 0 && nums[idx] == nums[idx - 1])
//        {
//            return;
//        }
//        tmp.push_back(nums[idx]);
//        dfs(true, nums, idx + 1);
//        tmp.pop_back();
//    }
//
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        n = nums.size();
//        sort(nums.begin(), nums.end());
//        dfs(false, nums, 0);
//        return res;
//    }
//};