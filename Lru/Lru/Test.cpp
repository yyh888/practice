#include <iostream>
#include <unordered_map>
#include <vector>

using namespace std;

struct ListNode
{
	ListNode(int key, int val)
		: _key(key)
		, _val(val)
	{}

	int _key;
	int _val;
	ListNode* _pre = nullptr;
	ListNode* _next = nullptr;
};

typedef ListNode Node;
	
struct LRU
{
	LRU(int cap)
	{
		head = new Node(-1, -1);
		head->_next = head;
		head->_pre = head;

		_cap = cap;
		_size = 0;
	}

	// 取出节点
	void del(Node* node)
	{
		node->_pre->_next = node->_next;
		node->_next->_pre = node->_pre;
	}

	// 移动到队头
	void move(Node* node)
	{
		node->_next = head->_next;
		head->_next->_pre = node;
		head->_next = node;
		node->_pre = head;
	}

	// 获取
	int get(int key)
	{
		if (!hash.count(key))
		{
			return -1;
		}
		Node* node = hash[key];
		del(node);
		move(node);
		return node->_val;
	}

	// 插入
	void put(int key, int val)
	{
		if (hash.count(key))// 修改
		{
			Node* node = hash[key];
			node->_val = val;
			del(node);
			move(node);
		}
		else
		{
			// 是否满
			if (_size != _cap)
			{
				Node* node = new Node(key, val);
				hash[key] = node;
				_size++;
				move(node);
			}
			else
			{
				Node* node = new Node(key, val);
				// 删除尾部
				hash.erase(head->_pre->_val);
				del(head->_pre);
				move(node);
				// 添加进hash
				hash[key] = node;
			}
		}
	}

	unordered_map<int, Node*> hash;
	Node* head;// 头节点
	int _size;
	int _cap;
};

int main()
{
	LRU lru(4);
	lru.put(1, 1);
	lru.put(2, 2);
	lru.put(3, -1);
	cout << lru.get(3) << endl;
	cout << lru.get(4) << endl;
	return 0;
}