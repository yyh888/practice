void _sumOfLeftLeaves(struct TreeNode* root, int* ret)
{
	if (root == NULL)
	{
		return;
	}
	if (root->left && root->left->left == NULL && root->left->right == NULL)
	{
		*ret += root->left->val;
	}
	_sumOfLeftLeaves(root->left, ret);
	_sumOfLeftLeaves(root->right, ret);
}
int sumOfLeftLeaves(struct TreeNode* root) {
	// write code here
	int ret = 0;
	_sumOfLeftLeaves(root, &ret);
	return ret;
}


#include<stdio.h>
typedef struct ListNode
{
	int val;
	struct ListNode* next;
}ListNode;
ListNode* BuyNode(int i)
{
	ListNode* node = (ListNode*)malloc(sizeof(ListNode));
	node->val = i;
	node->next = NULL;
	return node;
}
int main()
{
	int n = 0, m = 0;
	scanf("%d %d", &n, &m);
	//头节点
	ListNode* head = BuyNode(1);
	ListNode* cur = head;
	ListNode* curr = head;
	int j = 2;
	for (; j <= n; j++)
	{
		cur = BuyNode(j);
		curr->next = cur;
		curr = curr->next;
	}
	//成环
	cur->next = head;
	//删除节点
	while (head->next != head)
	{
		int tmp = m;
		while (tmp != 1)
		{
			cur = head;
			head = head->next;
			tmp--;
		}
		ListNode* ret = head;
		head = head->next;
		cur->next = head;
		free(ret);
		ret = NULL;
	}
	printf("%d", head->val);
	return 0;
}