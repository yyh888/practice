#include <iostream>
#include <cstdio>
#include <string>

using namespace std;

//class Solution {
//public:
//    int longestValidParentheses(string s) {
//        int n = s.size();
//        stack<int> st;
//        st.push(-1);
//        int Max = 0;
//        for (int i = 0; i < n; i++)
//        {
//            if (s[i] == '(') st.push(i);
//            else
//            {
//                st.pop();
//                if (st.empty())
//                {
//                    st.push(i);
//                }
//                else
//                {
//                    Max = max(Max, i - st.top());
//                }
//            }
//        }
//        return Max;
//    }
//};



//int main()
//{
//	int k = 99;while (k = 11)k += 11;printf("k=%d\n", k);
//	return 0;
//}

//string& fun()
//{
//	string s = "abc";
//	return s;
//}
//
//int main()
//{
//	string c = fun();
//	cout << c << endl;
//	return 0;
//}
//


//int main()
//{
//	double a[10] = { 1, 2, 3, 4};
//	double* s = a;
//	cout << *(s + 3) << endl;
//	return 0;
//}

//
//void fun()
//{
//	cout << "fun()" << endl;
//}
//
//int main()
//{
//	::fun();
//	return 0;
//}
//


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
//    ListNode* Merge(ListNode* head)
//    {
//        if (head == nullptr || head->next == nullptr) return head;
//        ListNode* slow = head, * fast = head;
//        while (fast && fast->next)
//        {
//            fast = fast->next->next;
//            if (fast) slow = slow->next;
//        }
//        ListNode* l2 = slow->next;
//        slow->next = nullptr;
//        return MergeSort(Merge(head), Merge(l2));
//    }
//
//    ListNode* sortList(ListNode* head) {
//        return MergeSort(head);
//    }
//};


//class Solution {
//public:
//    double QuiclMul(double x, long long N)
//    {
//        if (N == 0) return 1.0;
//        double y = QuiclMul(x, N / 2);
//        return N % 2 == 0 ? y * y : y * y * x;
//    }
//
//    double myPow(double x, int n) {
//        long long N = n;
//        return N > 0 ? QuiclMul(x, N) : 1.0 / QuiclMul(x, -N);
//    }
//};