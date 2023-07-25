// 删除链表的倒数第 N 个结点
//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* cur = head, * pre = pHead;
//        while (n--)
//        {
//            cur = cur->next;
//        }
//        while (cur)
//        {
//            pre = head;
//            head = head->next;
//            cur = cur->next;
//        }
//        if (pre->next == nullptr)
//        {
//            pre->next = nullptr;
//        }
//        else
//        {
//            pre->next = pre->next->next;
//        }
//        return pHead->next;
//    }
//};


// 组合总和
//class Solution {
//public:
//    int n;
//    vector<int> tmp;
//    vector<vector<int>> res;
//
//    void dfs(int begin, vector<int>& nums, int target, int sum)
//    {
//        if (sum > target) return;
//        if (sum == target)
//        {
//            res.push_back(tmp);
//            return;
//        }
//        for (int i = begin; i < n; i++)
//        {
//            tmp.push_back(nums[i]);
//            dfs(i, nums, target, sum + nums[i]);
//            tmp.pop_back();
//        }
//    }
//
//    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
//        n = candidates.size();
//        dfs(0, candidates, target, 0);
//        return res;
//    }
//};


// 字符串解码
//class Solution {
//public:
//    typedef pair<int, string> PIS;
//
//    string decodeString(string s) {
//        int n = s.size();
//        stack<PIS> st;
//        string res;
//        int mul = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] >= '0' && s[i] <= '9')
//            {
//                mul = mul * 10 + (s[i] - '0');
//            }
//            else if (s[i] == '[')
//            {
//                st.push({ mul, res });
//                mul = 0;
//                res.clear();
//            }
//            else if (s[i] == ']')
//            {
//                auto [cnt, ret] = st.top();
//                st.pop();
//                while (cnt--)
//                {
//                    ret += res;
//                }
//                res = ret;
//            }
//            else
//            {
//                res += s[i];
//            }
//        }
//        return res;
//    }
//};