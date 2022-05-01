#define  _CRT_SECURE_NO_WARNINGS



//if (head == NULL)
//{
//    return head;
//}
//struct ListNode* largenode = (struct ListNode*)malloc(sizeof(struct ListNode));
//largenode->next = NULL;
//struct ListNode* smallnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//smallnode->next = NULL;
//struct ListNode* ltail = largenode, * stail = smallnode;
//while (head)
//{
//    if (head->val < x)
//    {
//        struct ListNode* tmp = head;
//        head = head->next;
//        stail->next = tmp;
//        stail = stail->next;
//        stail->next = NULL;
//    }
//    else
//    {
//        struct ListNode* tmp = head;
//        head = head->next;
//        ltail->next = tmp;
//        ltail = ltail->next;
//        ltail->next = NULL;
//    }
//}
//struct ListNode* phead = smallnode->next;
//stail->next = largenode->next;
//free(smallnode);
//free(largenode);
//return phead;
//
//}




//struct ListNode* partition(struct ListNode* head, int x) {
//    if (head == NULL)
//    {
//        return head;
//    }
//    struct ListNode* largenode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    largenode->next = NULL;
//    struct ListNode* smallnode = (struct ListNode*)malloc(sizeof(struct ListNode));
//    smallnode->next = NULL;
//    struct ListNode* ltail = largenode, * stail = smallnode;
//    while (head)
//    {
//        if (head->val < x)
//        {
//            //struct ListNode* tmp = head;
//            //head = head->next;
//            stail->next = head;
//            stail = stail->next;
//            //stail->next = NULL;
//        }
//        else
//        {
//            //struct ListNode* tmp = head;
//            //head = head->next;
//            ltail->next = head;
//            ltail = ltail->next;
//            //ltail->next = NULL;
//        }
//        head = head->next;
//    }
//    stail->next = largenode->next;
//    ltail->next = NULL;
//    struct ListNode* phead = smallnode->next;
//    free(smallnode);
//    free(largenode);
//    return phead;
//
//}





/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL)
//    {
//        return NULL;
//    }
//    struct ListNode* n1 = NULL;
//    struct ListNode* n2 = head;
//    struct ListNode* n3 = head->next;
//    while (n3 != NULL)
//    {
//        n2->next = n1;
//        n1 = n2;
//        n2 = n3;
//        n3 = n3->next;
//
//    }
//    n2->next = n1;
//    return n2;
//
//}




//struct ListNode* reverseList(struct ListNode* head) {
//    if (head == NULL || head->next == NULL)
//    {
//        return head;
//    }
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
//    struct ListNode* curr = head;
//    while (count--)
//    {
//        curr = curr->next;
//    }
//    return curr;
//}




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




/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//struct ListNode* getKthFromEnd(struct ListNode* head, int k) {
//    struct ListNode* slow = head;
//    struct ListNode* fast = head;
//    while (k--)
//    {
//        if (fast == NULL)
//        {
//            return NULL;
//        }
//        fast = fast->next;
//    }
//    while (fast != NULL)
//    {
//        slow = slow->next;
//        fast = fast->next;
//    }
//    return slow;
//
//}



/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */


//bool isPalindrome(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        slow = slow->next;
//        fast = fast->next->next;
//    }
//    //旋转后半部分
//    //尾插
//    struct ListNode* newnode = NULL;
//    while (slow)
//    {
//        struct ListNode* tmp = slow;
//        slow = slow->next;
//        tmp->next = newnode;
//        newnode = tmp;
//    }
//    //比较
//    //奇数个中间的前一个的next没变
//    struct ListNode* hcur = head, * ncur = newnode;
//    while (hcur && ncur)
//    {
//        if (hcur->val != ncur->val)
//        {
//            return false;
//        }
//        else
//        {
//            hcur = hcur->next;
//            ncur = ncur->next;
//        }
//    }
//    return true;
//}
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
//bool hasCycle(struct ListNode* head) {
//    struct ListNode* fast = head;
//    struct ListNode* slow = head;
//    while (fast && fast->next)
//    {
//        fast = fast->next->next;
//        slow = slow->next;
//        if (fast == slow)
//        {
//            return true;
//        }
//    }
//    return false;
//}