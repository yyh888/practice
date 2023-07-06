// 搜索旋转排序数组
//class Solution {
//public:
//    int search(vector<int>& nums, int target) {
//        int n = nums.size();
//        int l = 0, r = n - 1;
//        while (l < r)
//        {
//            int mid = l + (r - l) / 2 + 1;
//            if (nums[mid] <= nums[r])// 右有序
//            {
//                if (nums[r] >= target && nums[mid] <= target)
//                {
//                    l = mid;
//                }
//                else r = mid - 1;
//            }
//            else// 左有序
//            {
//                if (nums[l] <= target && nums[mid] > target)
//                {
//                    r = mid - 1;
//                }
//                else l = mid;
//            }
//        }
//        if (nums[l] == target) return l;
//        else return -1;
//    }
//};


// 相交链表
//class Solution {
//public:
//    ListNode* getIntersectionNode(ListNode* headA, ListNode* headB) {
//        ListNode* c1 = headA, * c2 = headB;
//        while (c1 != c2)
//        {
//            if (c1 == nullptr) c1 = headB;
//            else c1 = c1->next;
//            if (c2 == nullptr) c2 = headA;
//            else c2 = c2->next;
//        }
//        return c1;
//    }
//};


// 二叉树的最近公共祖先
//class Solution {
//public:
//    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
//        if (root == nullptr || root == p || root == q) return root;
//        TreeNode* left = lowestCommonAncestor(root->left, p, q);
//        TreeNode* right = lowestCommonAncestor(root->right, p, q);
//        if (left && right) return root;
//        if (left) return left;
//        else return right;
//    }
//};