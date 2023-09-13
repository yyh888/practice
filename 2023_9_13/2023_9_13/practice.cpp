#include <iostream>

using namespace std;

//int main()
//{
//	int a[5][10];
//	cout << (&a[3][6] - &a[0][0]) << endl;
//	return 0;
//}


//class Solution {
//public:
//    ListNode* deleteDuplicates(ListNode* head) {
//        if (!head) return nullptr;
//        ListNode* pHead = new ListNode;
//        pHead->next = head;
//        ListNode* pre = pHead, * cur = head, * tail = head->next;
//        while (tail)
//        {
//            if (cur->val == tail->val)
//            {
//                while (tail && tail->val == cur->val)
//                {
//                    tail = tail->next;
//                }
//                cur = tail;
//                pre->next = cur;
//                if (tail) tail = tail->next;
//            }
//            else
//            {
//                pre = cur;
//                cur = tail;
//                tail = tail->next;
//            }
//        }
//        return pHead->next;
//    }
//};


//class A
//{
//	void fun() { int al; }
//};
//
//int main()
//{
//	cout << sizeof(A) << endl;
//	return 0;
//}

//
//class Solution {
//public:
//    vector<vector<int>> res;
//    vector<int> tmp;
//
//    void dfs(vector<int>& nums, bool preflag, int idx)
//    {
//        if (idx == nums.size())
//        {
//            res.push_back(tmp);
//            return;
//        }
//        // ²»¼Ó
//        dfs(nums, false, idx + 1);
//        if (!preflag && idx > 0 && nums[idx] == nums[idx - 1]) return;
//        // ¼Ó
//        tmp.push_back(nums[idx]);
//        dfs(nums, true, idx + 1);
//        tmp.pop_back();
//    }
//
//    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
//        sort(nums.begin(), nums.end());
//        dfs(nums, false, 0);
//        return res;
//    }
//};

//int cnt = 0;
//
//void Hannoi(int n, char a, char b, char c)
//{
//	if (n == 1)
//	{
//		cout << a << "->" << c << endl;
//		cnt++;
//		return;
//	}
//	Hannoi(n - 1, a, c, b);
//	cout << a << "->" << c << endl;
//	cnt++;
//	Hannoi(n - 1, b, a, c);
//}
//
//int main()
//{
//	Hannoi(3, 'a', 'b', 'c');
//	cout << cnt;
//	return 0;
//}


