#include <iostream>
#include <vector>

using namespace std;

//class A
//{
//public:
//	A(){}
//
//	virtual ~A()
//	{
//		cout << "~A()" << pa << endl;
//		delete[]pa;
//	}
//private:
//	int* pa = new int[20];
//};
//
//class B : public A
//{
//public:
//	virtual ~B()
//	{
//		cout << "~B()" << pb << endl;
//		delete[]pb;
//	}
//private:
//	int* pb = new int[20];
//};
//
//int main()
//{
//	A* a = new A;
//	A* b = new B;
//	delete a;
//	delete b;
//	return 0;
//}

//class A
//{
//public:
//	A(int* p)
//	{
//		_p = p;
//	}
//
//	~A()
//	{
//		cout << "~A()" << endl;
//		delete _p;
//	}
//private:
//	int* _p;
//};
//
//class B : public A
//{
//public:
//	B()
//		: A(new int[20])
//	{}
//
//private:
//};
//
//void test()
//{
//	B b;
//}
//
//int main()
//{
//	test();
//	return 0;
//}


//int main()
//{
//	vector<int> nums{ 1, 2, 3, 4, 5};
//	int n = nums.size();
//	srand(time(0));
//	for (int i = n - 1; i >= 1; i--)
//	{
//		swap(nums[i], nums[rand() % i]);
//	}
//	for (auto& e : nums)
//	{
//		cout << e << " ";
//	}
//	return 0;
//}



//class Solution {
//public:
//
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        auto lam = [](ListNode* p1, ListNode* p2) {
//            return p1->val > p2->val;
//        };
//        priority_queue<ListNode*, vector<ListNode*>, decltype(lam)> pq(lam);
//        for (auto& e : lists)
//        {
//            if (e) pq.push(e);
//        }
//        ListNode* pHead = new ListNode;
//        ListNode* tail = pHead;
//        while (pq.size())
//        {
//            ListNode* tmp = pq.top();
//            pq.pop();
//            tail->next = tmp;
//            tail = tmp;
//            tmp = tmp->next;
//            if (tmp) pq.push(tmp);
//        }
//        return pHead->next;
//    }
//};



//class Heap
//{
//public:
//    size_t size()
//    {
//        return a.size();
//    }
//
//    void AdjustDown(int p)
//    {
//        int c = 2 * p + 1;
//        while (c < a.size())
//        {
//            if (c + 1 < a.size() && a[c]->val > a[c + 1]->val) c++;
//            if (a[c]->val < a[p]->val)
//            {
//                swap(a[c], a[p]);
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
//        while (c > 0)
//        {
//            if (a[p]->val > a[c]->val)
//            {
//                swap(a[p], a[c]);
//                c = p;
//                p = (c - 1) / 2;
//            }
//            else break;
//        }
//    }
//
//    void push(ListNode* p)
//    {
//        a.push_back(p);
//        AdjustUp(a.size() - 1);
//    }
//
//    ListNode* top()
//    {
//        return a[0];
//    }
//
//    void pop()
//    {
//        swap(a[0], a[a.size() - 1]);
//        a.pop_back();
//        AdjustDown(0);
//    }
//private:
//    vector<ListNode*> a;
//};
//
//class Solution {
//public:
//    ListNode* mergeKLists(vector<ListNode*>& lists) {
//        Heap pq;
//        for (auto& e : lists)
//        {
//            if (e) pq.push(e);
//        }
//        ListNode* pHead = new ListNode;
//        ListNode* tail = pHead;
//        while (pq.size())
//        {
//            ListNode* tmp = pq.top();
//            pq.pop();
//            tail->next = tmp;
//            tail = tmp;
//            tmp = tmp->next;
//            if (tmp) pq.push(tmp);
//        }
//        return pHead->next;
//    }
//};

//
//class A
//{
//public:
//	void Print() const
//	{
//
//	}
//};