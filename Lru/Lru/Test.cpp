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

	// ȡ���ڵ�
	void del(Node* node)
	{
		node->_pre->_next = node->_next;
		node->_next->_pre = node->_pre;
	}

	// �ƶ�����ͷ
	void move(Node* node)
	{
		node->_next = head->_next;
		head->_next->_pre = node;
		head->_next = node;
		node->_pre = head;
	}

	// ��ȡ
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

	// ����
	void put(int key, int val)
	{
		if (hash.count(key))// �޸�
		{
			Node* node = hash[key];
			node->_val = val;
			del(node);
			move(node);
		}
		else
		{
			// �Ƿ���
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
				// ɾ��β��
				hash.erase(head->_pre->_val);
				del(head->_pre);
				move(node);
				// ��ӽ�hash
				hash[key] = node;
			}
		}
	}

	unordered_map<int, Node*> hash;
	Node* head;// ͷ�ڵ�
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