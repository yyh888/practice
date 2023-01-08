class Solution {
public:
    /**
     *
     * @param head ListNode类
     * @param m int整型
     * @param n int整型
     * @return ListNode类
     */
    ListNode* tmp = nullptr;

    ListNode* reverse(ListNode* head, int n)
    {
        if (n == 1)
        {
            tmp = head->next;
            return head;
        }
        ListNode* node = reverse(head->next, n - 1);
        head->next->next = head;
        head->next = tmp;
        return node;
    }

    ListNode* reverseBetween(ListNode* head, int m, int n)
    {
        if (m == 1) return reverse(head, n);
        ListNode* node = reverseBetween(head->next, m - 1, n - 1);
        head->next = node;
        return head;
    }
};