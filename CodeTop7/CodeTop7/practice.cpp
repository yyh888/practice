// 最长回文子串
//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        vector<vector<bool>> dp(n, vector<bool>(n));
//        int MaxLen = 1;
//        int begin = 0;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            for (int j = i; j < n; j++)
//            {
//                if (s[i] == s[j] && (j - i < 2 || dp[i + 1][j - 1]))
//                {
//                    dp[i][j] = true;
//                    if (j - i + 1 > MaxLen)
//                    {
//                        MaxLen = j - i + 1;
//                        begin = i;
//                    }
//                }
//            }
//        }
//        return s.substr(begin, MaxLen);
//    }
//};


//class Solution {
//public:
//    string longestPalindrome(string s) {
//        int n = s.size();
//        int MaxLen = 1;
//        int begin = 0;
//        for (int i = 0; i < n; i++)
//        {
//            int l = i, r = i;
//            while (r + 1 < n && s[i] == s[r + 1])
//            {
//                r++;
//                if (r - i + 1 > MaxLen)
//                {
//                    MaxLen = r - i + 1;
//                    begin = i;
//                }
//            }
//            while (l > 0 && r < n - 1 && s[l - 1] == s[r + 1])
//            {
//                l--;
//                r++;
//                if (r - l + 1 > MaxLen)
//                {
//                    MaxLen = r - l + 1;
//                    begin = l;
//                }
//            }
//        }
//        return s.substr(begin, MaxLen);
//    }
//};


// 全排列
//class Solution {
//public:
//    vector<vector<int>> vv;
//    vector<bool> flag;
//    int n;
//
//    void dfs(vector<int>& nums, int i, vector<int>& tmp)
//    {
//        if (i >= n)
//        {
//            if (tmp.size() == n) vv.push_back(tmp);
//            return;
//        }
//        for (int k = 0; k < n; k++)
//        {
//            if (flag[k]) continue;
//            flag[k] = true;
//            tmp.push_back(nums[k]);
//            dfs(nums, i + 1, tmp);
//            tmp.pop_back();
//            flag[k] = false;
//        }
//    }
//
//    vector<vector<int>> permute(vector<int>& nums) {
//        n = nums.size();
//        flag.resize(n, false);
//        vector<int> tmp;
//        dfs(nums, 0, tmp);
//        return vv;
//    }
//};


//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//struct ListNode {
//	int val;
//	ListNode* next;
//	ListNode() : val(0), next(nullptr) {}
//	ListNode(int x) : val(x), next(nullptr) {}
//	ListNode(int x, ListNode* next) : val(x), next(next) {}
//};
//
//class Heap// 小堆
//{
//public:
//    void AdjustDown(int p)
//    {
//        int c = 2 * p + 1;
//        while (c < n)
//        {
//            if (c + 1 < n && nums[c]->val > nums[c + 1]->val)
//            {
//                c++;
//            }
//            if (nums[p]->val > nums[c]->val)
//            {
//                swap(nums[p], nums[c]);
//                p = c;
//                c = 2 * p + 1;
//            }
//            else break;
//        }
//    }
//
//    void AdjustUp(int c)
//    {
//        int p = (c - 1) / 2;
//        while (c)
//        {
//            if (nums[p]->val > nums[c]->val)
//            {
//                swap(nums[p], nums[c]);
//                c = p;
//                p = (c - 1) / 2;
//            }
//            else break;
//        }
//    }
//
//    void pop()
//    {
//        swap(nums[0], nums[n - 1]);
//        n--;
//		  nums.pop_back();
//        AdjustDown(0);
//    }
//
//    ListNode* top()
//    {
//        return nums[0];
//    }
//
//    void push(ListNode* node)
//    {
//        nums.push_back(node);
//        n++;
//        AdjustUp(n - 1);
//    }
//
//    int size()
//    {
//        return n;
//    }
//private:
//    vector<ListNode*> nums;
//    int n = 0;
//};
//
//ListNode* mergeKLists(vector<ListNode*>& lists) {
//    Heap q;
//    int n = lists.size();
//    for (int i = 0; i < n; i++)
//    {
//        if (lists[i])
//            q.push(lists[i]);
//    }
//    ListNode* head = new ListNode;
//    ListNode* tail = head;
//    while (q.size())
//    {
//        tail->next = q.top();
//        ListNode* cur = nullptr;
//        if (q.top())
//        {
//            cur = q.top()->next;
//            tail = tail->next;
//        }
//        q.pop();
//        if (cur) q.push(cur);
//    }
//    return head->next;
//}
//
//
//// [[1, 4], [1], [2]]
//int main()
//{
//    vector<ListNode*> lists;
//    ListNode* l1 = new ListNode(1);
//    ListNode* cur = l1;
//    cur->next = new ListNode(4);
//    lists.push_back(l1);
//
//    ListNode* l2 = new ListNode(1);
//    lists.push_back(l2);
//
//    ListNode* l3 = new ListNode(2);
//    lists.push_back(l3);
//    mergeKLists(lists);
//    return 0;
//}