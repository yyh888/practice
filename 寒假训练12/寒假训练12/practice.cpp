class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* node = nullptr, * next = nullptr;
        int add = 0;
        while (l1 && l2)
        {
            int sum = l1->val + l2->val + add;
            l1 = l1->next;
            l2 = l2->next;
            add = sum / 10;
            sum %= 10;
            ListNode* newnode = new ListNode(sum);
            if (node)
            {
                next->next = newnode;
            }
            else
            {
                node = newnode;
            }
            next = newnode;
        }
        while (l1)
        {
            int sum = l1->val + add;
            l1 = l1->next;
            add = sum / 10;
            sum %= 10;
            ListNode* newnode = new ListNode(sum);
            if (node)
            {
                next->next = newnode;
            }
            else
            {
                node = newnode;
            }
            next = newnode;
        }
        while (l2)
        {
            int sum = l2->val + add;
            l2 = l2->next;
            add = sum / 10;
            sum %= 10;
            ListNode* newnode = new ListNode(sum);
            if (node)
            {
                next->next = newnode;
            }
            else
            {
                node = newnode;
            }
            next = newnode;
        }
        if (add)
        {
            ListNode* newnode = new ListNode(1);
            if (node)
            {
                next->next = newnode;
            }
            else
            {
                node = newnode;
            }
            next = newnode;
        }
        next->next = nullptr;
        return node;
    }
};



class Solution {
public:
    int maxDepth(string s) {
        int ans = 0, ret = 0;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '(')
            {
                ++ret;
                ans = max(ret, ans);
            }
            else if (s[i] == ')')
            {
                --ret;
            }
        }
        return ans;
    }
};