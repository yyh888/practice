#include <iostream>

using namespace std;

//class Solution {
//public:
//    vector<int> spiralOrder(vector<vector<int>>& matrix) {
//        int n = matrix.size(), m = matrix[0].size();
//        int top = 0, end = n - 1, left = 0, right = m - 1;
//        vector<int> res;
//        while (top <= end || left <= right)
//        {
//            for (int j = left; j <= right; j++)
//            {
//                res.push_back(matrix[top][j]);
//            }
//            if (++top > end) break;
//            for (int i = top; i <= end; i++)
//            {
//                res.push_back(matrix[i][right]);
//            }
//            if (--right < left) break;
//            for (int j = right; j >= left; j--)
//            {
//                res.push_back(matrix[end][j]);
//            }
//            if (--end < top) break;
//            for (int i = end; i >= top; i--)
//            {
//                res.push_back(matrix[i][left]);
//            }
//            if (++left > right) break;
//        }
//        return res;
//    }
//};

//template <class T>
//T Add(T a, T b);
//
//
//int main()
//{
//	cout << Add(2, 1);
//	return 0;
//}
//
//
//template <class T>
//T Add(T a, T b)
//{
//	return a + b;
//}



//class MyCircularDeque {
//public:
//    vector<int> queue;
//    int front, rear;
//    int capacity;
//
//    MyCircularDeque(int k) {
//        capacity = k + 1;
//        queue.resize(capacity);
//        front = rear = 0;
//    }
//
//    bool insertFront(int value) {
//        if (isFull()) return false;
//        front = (front - 1 + capacity) % capacity;
//        queue[front] = value;
//        return true;
//    }
//
//    bool insertLast(int value) {
//        if (isFull()) return false;
//        queue[rear] = value;
//        rear = (rear + 1) % capacity;
//        return true;
//    }
//
//    bool deleteFront() {
//        if (isEmpty()) return false;
//        front++;
//        front %= capacity;
//        return true;
//    }
//
//    bool deleteLast() {
//        if (isEmpty()) return false;
//        rear--;
//        if (rear < 0) rear = capacity - 1;
//        return true;
//    }
//
//    int getFront() {
//        if (isEmpty()) return -1;
//        return queue[front];
//    }
//
//    int getRear() {
//        if (isEmpty()) return -1;
//        return queue[(rear - 1 + capacity) % capacity];
//    }
//
//    bool isEmpty() {
//        return rear == front;
//    }
//
//    bool isFull() {
//        return (rear + 1) % capacity == front;
//    }
//};


//class Solution {
//public:
//    ListNode* MergeSort(ListNode* l1, ListNode* l2)
//    {
//        ListNode* head = new ListNode;
//        ListNode* tail = head;
//        while (l1 && l2)
//        {
//            if (l1->val < l2->val)
//            {
//                tail->next = l1;
//                tail = tail->next;
//                l1 = l1->next;
//            }
//            else
//            {
//                tail->next = l2;
//                tail = tail->next;
//                l2 = l2->next;
//            }
//        }
//        while (l1)
//        {
//            tail->next = l1;
//            tail = tail->next;
//            l1 = l1->next;
//        }
//        while (l2)
//        {
//            tail->next = l2;
//            l2 = l2->next;
//            tail = tail->next;
//        }
//        return head->next;
//    }
//
//    ListNode* MergeSort(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr) return head;
//        // 找中间节点
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            if (fast)
//                slow = slow->next;
//        }
//        ListNode* tmp = slow->next;
//        slow->next = nullptr;
//        ListNode* l1 = MergeSort(head);
//        ListNode* l2 = MergeSort(tmp);
//        return MergeSort(l1, l2);
//    }
//
//    ListNode* sortList(ListNode* head) {
//        return MergeSort(head);
//    }
//};


//class Solution {
//public:
//    void reorderList(ListNode* head) {
//        if (head == nullptr) return;
//        stack<ListNode*> st;
//        // 找中间节点
//        ListNode* fast = head, * slow = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            if (fast) slow = slow->next;
//        }
//        ListNode* cur = slow->next;
//        slow->next = nullptr;
//        while (cur)
//        {
//            st.push(cur);
//            cur = cur->next;
//        }
//        cur = head;
//        while (st.size())
//        {
//            ListNode* node = st.top();
//            st.pop();
//            node->next = cur->next;
//            cur->next = node;
//            cur = node->next;
//        }
//    }
//};


//class Solution {
//public:
//    ListNode* Reverse(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* tmp = Reverse(head->next);
//        head->next->next = head;
//        head->next = nullptr;
//        return tmp;
//    }
//
//    void reorderList(ListNode* head) {
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            if (slow) slow = slow->next;
//        }
//        ListNode* tmp = slow->next;
//        slow->next = nullptr;
//        tmp = Reverse(tmp);
//        ListNode* cur = head;
//        ListNode* pHead = new ListNode, * tail = pHead;
//        while (cur || tmp)
//        {
//            if (cur)
//            {
//                tail->next = cur;
//                cur = cur->next;
//                tail = tail->next;
//            }
//            if (tmp)
//            {
//                tail->next = tmp;
//                tmp = tmp->next;
//                tail = tail->next;
//            }
//        }
//    }
//};


