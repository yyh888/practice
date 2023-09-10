#include <iostream>
#include <vector>
#include <string>

using namespace std;


//class Solution {
//public:
//    TreeNode* mirrorTree(TreeNode* root) {
//        if (root == nullptr) return nullptr;
//        TreeNode* node = new TreeNode(root->val);
//        node->left = mirrorTree(root->right);
//        node->right = mirrorTree(root->left);
//        return node;
//    }
//};


//class Solution {
//public:
//    int singleNumber(vector<int>& nums) {
//        int n = nums.size();
//        int num = 0;
//        for (int i = 0; i < 32; i++)
//        {
//            int ret = 0;
//            for (auto& e : nums)
//            {
//                if (e >> i & 1) ret++;
//            }
//            if (ret % 3 != 0)
//            {
//                num |= 1 << i;
//            }
//        }
//        return num;
//    }
//};


//int main()
//{
//	vector<int> nums{ 1, 2, 4, 3, 3, 4 };
//	int n = nums.size();
//	int num = 0;
//	for (int i = 0; i < n; i++)
//	{
//		num ^= nums[i];
//	}
//	for (int i = 1; i <= n - 2; i++)
//	{
//		num ^= i;
//	}
//
//	int idx = 0;
//	while (1 << idx & num != 1)
//	{
//		idx++;
//	}
//	
//	int a = 0, b = 0;
//	for (int i = 0; i < n; i++)
//	{
//		if (1 << idx & nums[i])
//		{
//			a ^= nums[i];
//		}
//		else
//		{
//			b ^= nums[i];
//		}
//	}
//	for (int i = 0; i <= n - 2; i++)
//	{
//		if (i & 1 << idx) a ^= i;
//		else b ^= i;
//	}
//	cout << a << " " << b;
//}


//int main()
//{
//	vector<int> nums{ 1, 2, 3, 3, 4, 4 };
//	int n = nums.size();
//	int num = 0;
//	for (auto& e : nums)
//	{
//		num ^= e;
//	}
//	int a = 0, b = 0;
//	int idx = 0;
//	while (1 << idx & num != 1)
//	{
//		idx++;
//	}
//	for (auto& e : nums)
//	{
//		if (1 << idx & e) a ^= e;
//		else b ^= e;
//	}
//	cout << a << " " << b;
//	return 0;
//}


//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//        int i = m - 1, j = n - 1;
//        int idx = n + m - 1;
//        while (i >= 0 && j >= 0)
//        {
//            if (nums1[i] >= nums2[j])
//            {
//                nums1[idx--] = nums1[i];
//                i--;
//            }
//            else
//            {
//                nums1[idx--] = nums2[j];
//                j--;
//            }
//        }
//        while (i >= 0)
//        {
//            nums1[idx--] = nums1[i];
//            i--;
//        }
//        while (j >= 0)
//        {
//            nums1[idx--] = nums2[j];
//            j--;
//        }
//    }
//};


//class A
//{
//public:
//	virtual void fun()
//	{
//		cout << "A" << endl;
//	}
//};
//
//class B : public A
//{
//public:
//private:
//	virtual void fun()
//	{
//		cout << "B" << endl;
//	}
//};
//
//int main()
//{
//	B b;
//	A* p = &b;
//	p->fun();
//	return 0;
//}


//template <class K, class V>
//struct HashNode
//{
//	HashNode(const pair<K, V> _kv)
//		: kv(_kv)
//		, next(nullptr)
//	{}
//
//	pair<K, V> kv;
//	HashNode<K, V>* next;
//};
//
//
//template <class K>
//struct HashKey
//{
//	size_t operator()(const K& key)
//	{
//		return (size_t)key;
//	}
//};
//
//// ×Ö·û´®
//template <>
//struct HashKey<string>
//{
//	size_t operator()(const string& key)
//	{
//		size_t res = 0;
//		for (int i = 0; i < key.size(); i++)
//		{
//			res *= 131;
//			res += key[i];
//		}
//		return res;
//	}
//};
//
//
//template <class K, class V, class GetKey = HashKey<K>>
//class HashTable
//{
//	typedef HashNode<K, V> Node;
//public:
//	HashTable()
//		: n(0)
//	{
//		tables.resize(7);
//	}
//
//	Node* find(const K& key)
//	{
//		GetKey Get;
//		size_t idx = Get(key) % tables.size();
//		Node* cur = tables[idx];
//		while (cur)
//		{
//			if (cur->kv.first == key)
//			{
//				return cur;
//			}
//			else cur = cur->next;
//		}
//		return nullptr;
//	}
//
//	bool insert(const pair<K, V>& _kv)
//	{
//		if (find(_kv.first)) return false;
//		if (tables.size() == n)
//		{
//			vector<Node*> newtables;
//			newtables.resize(2 * n);
//			for (size_t i = 0; i < tables.size(); i++)
//			{
//				Node* cur = tables[i];
//				while (cur)
//				{
//					Node* next = cur->next;
//					size_t idx = GetKey()(cur->kv.first) % newtables.size();
//					// Í·²å
//					cur->next = newtables[idx];
//					newtables[idx] = cur;
//					cur = next;
//				}
//				tables[i] = nullptr;
//			}
//			tables.swap(newtables);
//		}
//
//		GetKey Get;
//		size_t HashI = Get(_kv.first) % tables.size();
//		Node* newnode = new Node(_kv);
//		newnode->next = tables[HashI];
//		tables[HashI] = newnode;
//		n++;
//		return true;
//	}
//private:
//	vector<Node*> tables;
//	size_t n;
//};
//
//
//int main()
//{
//	HashTable<string, int> hash;
//	hash.insert({ "aaa", 1 });
//	hash.insert({ "bbb", 2 });
//	hash.insert({ "ccc", 3 });
//	cout << hash.find("aaa")->kv.second << endl;
//	cout << hash.find("bbb")->kv.second << endl;
//	cout << hash.find("ccc")->kv.second << endl;
//	return 0;
//}


//class Single
//{
//public:
//	static Single& Get()
//	{
//		static Single _sig;
//		return _sig;
//	}
//private:
//	Single(){}
//};


