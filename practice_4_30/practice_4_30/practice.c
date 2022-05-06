#define  _CRT_SECURE_NO_WARNINGS

//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
//    struct ListNode* newHead = NULL;
//    struct ListNode* cur = head;
//    struct ListNode* next = cur->next;
//    while (next != NULL)
//    {
//        cur->next = newHead;
//        newHead = cur;
//        cur = next;
//        next = next->next;
//    }
//    cur->next = newHead;
//    newHead = cur;
//    return newHead;
//
//}



//struct ListNode* reverseList(struct ListNode* head) {
//    struct ListNode* newHead = NULL;
//    struct ListNode* cur = head;
//    struct ListNode* next = cur->next;
//    while (cur)
//    {
//        struct ListNode* next = cur->next;
//        cur->next = newHead;
//        newHead = cur;
//        cur = next;
//    }
//    return newHead;
//}



//struct ListNode* middleNode(struct ListNode* head) {
//    int count = 0;
//    struct ListNode* cur = head;
//    while (cur)
//    {
//        count++;
//        cur = cur->next;
//    }
//    count = count / 2;
//    printf("%d\n", count);
//    struct ListNode* curr = head;
//    while (count--)
//    {
//        curr = curr->next;
//    }
//    return curr;
//}



//快慢指针
//struct ListNode* middleNode(struct ListNode* head) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (fast && fast->next)//顺序不能变
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//
//    }
//    return slow;
//}




//struct ListNode* partition(struct ListNode* head, int x) {
//    struct ListNode* newhead = (struct ListNode*)malloc(sizeof(struct ListNode));
//    //找头节点
//    while (head->val > x)
//    {
//        newhead->next = head;
//        head = head->next;
//    }
//    struct ListNode* next = head->next, * cur = head;
//    struct ListNode* ncur = newhead;
//    while (next)
//    {
//        if (next->val > x)
//        {
//            ncur->next = next;
//            ncur = ncur->next;
//            next = next->next;
//            cur->next = next;
//        }
//        else
//        {
//            cur = next;
//            next = next->next;
//        }
//    }
//    cur->next = newhead->next;
//    return head;
//}


#include<stdio.h>
int main()
{
	int board[10][10];
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			printf("%d ", board[i][j]);
		}
		printf("\n");
	}
	return 0;
}