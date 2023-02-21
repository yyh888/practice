// 替换空格
//class Solution {
//public:
//    string replaceSpace(string s) {
//        string ret;
//        for (int i = 0; i < s.size(); i++)
//        {
//            if (s[i] == ' ')
//            {
//                ret += "%20";
//            }
//            else ret += s[i];
//        }
//        return ret;
//    }
//};


// 从尾到头打印链表
//class Solution {
//public:
//    void _reversePrint(ListNode* head, vector<int>& v)
//    {
//        if (head == nullptr) return;
//        _reversePrint(head->next, v);
//        v.push_back(head->val);
//    }
//
//    vector<int> reversePrint(ListNode* head) {
//        vector<int> v;
//        _reversePrint(head, v);
//        return v;
//    }
//};