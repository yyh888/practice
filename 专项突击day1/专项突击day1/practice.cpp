// 二进制加法
//class Solution {
//public:
//    string addBinary(string a, string b) {
//        int n = a.size(), m = b.size();
//        string res;
//        int i = n - 1, j = m - 1;
//        int add = 0;
//        while (i >= 0 || j >= 0 || add)
//        {
//            int ret = add;
//            if (i >= 0)
//            {
//                ret += a[i] - '0';
//            }
//            if (j >= 0)
//            {
//                ret += b[j] - '0';
//            }
//            add = ret / 2;
//            ret %= 2;
//            res += (ret + '0');
//            i--;
//            j--;
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//};

// 前 n 个数字二进制中 1 的个数
//class Solution {
//public:
//    int lowbit(int x)
//    {
//        return x & -x;
//    }
//
//    int fun(int x)
//    {
//        int cnt = 0;
//        while (x)
//        {
//            cnt++;
//            x -= lowbit(x);
//        }
//        return cnt;
//    }
//
//    vector<int> countBits(int n) {
//        vector<int> res(n + 1);
//        for (int i = 0; i <= n; i++)
//        {
//            res[i] = fun(i);
//        }
//        return res;
//    }
//};


// 只出现一次的数字
//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        unordered_map<int, int> hash;
//        int n = nums.size();
//        for (int i = 0; i < n; i++)
//        {
//            hash[nums[i]]++;
//        }
//        for (auto& e : hash)
//        {
//            if (e.second == 1)
//            {
//                return e.first;
//            }
//        }
//        return -1;
//    }
//};

//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int n = nums.size();
//        int res = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            int ret = 0;
//            for (auto& num : nums)
//            {
//                ret += (num >> i) & 1;
//            }
//            if (ret % 3)
//            {
//                res |= (1 << i);
//            }
//        }
//        return res;
//    }
//};


// K 个一组翻转链表
//class Solution {
//public:
//    ListNode* Reverse(ListNode* head, ListNode* tail)
//    {
//        if (head == tail || head->next == tail)
//        {
//            return head;
//        }
//        ListNode* tmp = Reverse(head->next, tail);
//        head->next->next = head;
//        head->next = tail;
//        return tmp;
//    }
//
//    ListNode* reverseKGroup(ListNode* head, int k) {
//        if (head == nullptr)
//        {
//            return nullptr;
//        }
//        ListNode* end = head;
//        for (int i = 1; i < k && end; i++)
//        {
//            end = end->next;
//        }
//        if (end == nullptr)
//        {
//            return head;
//        }
//        ListNode* tmp = Reverse(head, end->next);
//        head->next = reverseKGroup(head->next, k);
//        return tmp;
//    }
//};