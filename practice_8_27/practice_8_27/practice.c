#include <stdio.h>
#include <math.h>
#include <limits.h>
//static long pre = INT_MIN;
//
//bool isValidBST(struct TreeNode* root) {
//    if (!root)
//    {
//        return true;
//    }
//    //进入左子树
//    if (!isValidBST(root->left))
//    {
//        return false;
//    }
//    if (root->val <= pre)
//    {
//        return false;
//    }
//    //更新pre值
//    pre = root->val;
//    //进入右子树
//    if (!isValidBST(root->right))
//    {
//        return false;
//    }
//    return true;
//}


int main()
{
	char a = -128;
	char b = 128;
	printf("%u\n", a);
	printf("%u\n", b);
	return 0;
}