// 验证二叉搜索树
//class Solution {
//public:
//    long long Min = LLONG_MIN;
//
//    bool inorder(TreeNode* root)
//    {
//        if (root == nullptr) return true;
//        if (!inorder(root->left)) return false;
//        if (Min < root->val) Min = root->val;
//        else return false;
//        if (!inorder(root->right)) return false;
//        return true;
//    }
//
//    bool isValidBST(TreeNode* root) {
//        return inorder(root);
//    }
//};


// 两数相加
//class Solution {
//public:
//    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
//        int add = 0;
//        ListNode* pHead = new ListNode;
//        ListNode* tail = pHead;
//        while (l1 || l2 || add)
//        {
//            if (l1)
//            {
//                add += l1->val;
//                l1 = l1->next;
//            }
//            if (l2)
//            {
//                add += l2->val;
//                l2 = l2->next;
//            }
//            ListNode* node = new ListNode(add % 10);
//            add /= 10;
//            tail->next = node;
//            tail = node;
//        }
//        return pHead->next;
//    }
//};


// 寻找峰值
//class Solution {
//public:
//    int findPeakElement(vector<int>& nums) {
//        int l = 0, r = nums.size() - 1;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2;
//            if (nums[mid] > nums[mid + 1]) r = mid;
//            else l = mid + 1;
//        }
//        return l;
//    }
//};