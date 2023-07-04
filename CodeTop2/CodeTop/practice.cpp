// 反转链表
//class Solution {
//public:
//    ListNode* reverseList(ListNode* head) {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* tmp = reverseList(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//};


// 数组中的第K个最大元素
//class Heap// 大堆
//{
//public:
//    Heap(vector<int>& v)
//        : nums(v)
//        , n(v.size())
//    {
//        for (int i = (n - 1 - 1) / 2; i >= 0; i--)
//        {
//            AdjustDown(i);
//        }
//    }
//
//    void AdjustDown(int p)
//    {
//        int c = p * 2 + 1;
//        while (c < n)
//        {
//            if (c + 1 < n && nums[c] < nums[c + 1]) c++;
//            if (nums[p] < nums[c])
//            {
//                swap(nums[p], nums[c]);
//                p = c;
//                c = 2 * p + 1;
//            }
//            else break;
//        }
//    }
//
//    void pop()
//    {
//        swap(nums[0], nums[n - 1]);
//        n--;
//        AdjustDown(0);
//    }
//
//    int top()
//    {
//        return nums[0];
//    }
//
//private:
//    vector<int>& nums;
//    int n;
//};
//
//class Solution {
//public:
//    int findKthLargest(vector<int>& nums, int k) {
//        Heap hp(nums);
//        while (--k) hp.pop();
//        return hp.top();
//    }
//};

// 三数之和
//class Solution {
//public:
//    vector<vector<int>> threeSum(vector<int>& nums) {
//        int n = nums.size();
//        sort(nums.begin(), nums.end());
//        vector<vector<int>> res;
//        for (int i = 0; i < n - 2; i++)
//        {
//            // 去重
//            if (i > 0 && nums[i] == nums[i - 1])
//            {
//                continue;
//            }
//            int l = i + 1, r = n - 1;
//            while (l < r)
//            {
//                if (nums[i] + nums[l] + nums[r] > 0)
//                {
//                    r--;
//                }
//                else if (nums[i] + nums[l] + nums[r] < 0)
//                {
//                    l++;
//                }
//                else
//                {
//                    res.push_back({ nums[i], nums[l], nums[r] });
//                    // 去重
//                    l++;
//                    r--;
//                    while (l < r && nums[l] == nums[l - 1]) l++;
//                    while (l < r && nums[r] == nums[r + 1]) r--;
//                }
//            }
//        }
//        return res;
//    }
//};