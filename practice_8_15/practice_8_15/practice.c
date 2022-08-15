//qsort排
int cmp(int* e1, int* e2)
{
    return *e1 - *e2;
}

int* sortArray(int* nums, int numsSize, int* returnSize) {
    *returnSize = numsSize;
    qsort(nums, numsSize, sizeof(int), cmp);
    return nums;
}

//合并两个有序链表
struct ListNode* _sortInList(struct ListNode* n1, struct ListNode* n2)
{
    if (n1 == NULL)
    {
        return n2;
    }
    if (n2 == NULL)
    {
        return n1;
    }
    struct ListNode* head;
    //小的值链接到下一个
    if (n1->val < n2->val)
    {
        head = n1;
        head->next = _sortInList(n1->next, n2);
    }
    else
    {
        head = n2;
        head->next = _sortInList(n1, n2->next);
    }
    return head;
}

struct ListNode* sortInList(struct ListNode* head) {
    if (head == NULL || head->next == NULL)
    {
        return head;
    }
    struct ListNode* slow = head, * mid = head->next, * fast = head->next->next;
    while (fast && fast->next)
    {
        slow = slow->next;
        mid = mid->next;
        fast = fast->next->next;
    }
    slow->next = NULL;
    struct ListNode* node1 = sortInList(head);
    struct ListNode* node2 = sortInList(mid);
    struct ListNode* new = _sortInList(node1, node2);
    return new;
}
