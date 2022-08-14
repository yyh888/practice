#include <stdio.h>
#include <stdlib.h>

struct ListNode {
	int val;
	struct ListNode* next;
};

int cmp(struct ListNode** e1, struct ListNode** e2)
{
    return (*e1)->val - (*e2)->val;
}

struct ListNode* sortInList(struct ListNode* head) {
    if (head == NULL)
    {
        return NULL;
    }
    struct ListNode* nums[100000];
    int count = 0;
    struct ListNode* cur = head;
    while (cur)
    {
        nums[count++] = cur;
        cur = cur->next;
    }
    qsort(nums, count, sizeof(struct ListNode*), cmp);
    head = nums[0];
    cur = head;
    for (int i = 1; i < count; i++)
    {
        cur->next = nums[i];
        cur = cur->next;
    }
    cur->next = NULL;
    return head;
}


struct ListNode* Buy(int x)
{
    struct ListNode* node = (struct ListNode*)malloc(sizeof(struct ListNode));
    node->val = x;
    node->next = NULL;
    return node;
}

int main()
{
    struct ListNode* head = Buy(1);
    struct ListNode* cur = head;
    cur->next = Buy(3);
    cur = cur->next;
    cur->next = Buy(2);
    cur = cur->next;
    cur->next = Buy(4);
    cur = cur->next;
    cur->next = Buy(5);
    sortInList(head);
    return 0;
}