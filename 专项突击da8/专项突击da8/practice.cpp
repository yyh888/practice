// 展平多级双向链表
//class Solution {
//public:
//    Node* flatten(Node* head) {
//        Node* pHead = new Node;
//        pHead->next = head;
//        while (head)
//        {
//            if (head->child)
//            {
//                Node* tmp = head->next;
//                Node* node = flatten(head->child);
//                node->prev = head;
//                head->next = node;
//                head->child = nullptr;
//                while (head->next)
//                {
//                    head = head->next;
//                }
//                head->next = tmp;
//                if (tmp) tmp->prev = head;
//                head = tmp;
//            }
//            else
//            {
//                head = head->next;
//            }
//        }
//        return pHead->next;
//    }
//};


//class Solution {
//public:
//    Node* dfs(Node* head)
//    {
//        Node* tail = head;
//        while (head)
//        {
//            if (head->child == nullptr)
//            {
//                tail = head;
//                head = head->next;
//            }
//            else
//            {
//                Node* tmp = head->next;
//                head->next = head->child;
//                head->child->prev = head;
//                head->child = nullptr;
//                Node* last = dfs(head->next);
//                last->next = tmp;
//                if (tmp)
//                {
//                    tmp->prev = last;
//                }
//                while (tail)
//                {
//                    tail = tail->next;
//                }
//            }
//        }
//        return tail;
//    }
//
//    Node* flatten(Node* head) {
//        dfs(head);
//        return head;
//    }
//};


//class Solution {
//public:
//    Node* flatten(Node* head) {
//        Node* pHead = new Node;
//        pHead->next = head;
//        while (head)
//        {
//            if (head->child)
//            {
//                Node* tmp = head->next;
//                Node* last = head->child;
//                head->next = last;
//                last->prev = head;
//                head->child = nullptr;
//                while (last->next)
//                {
//                    last = last->next;
//                }
//                last->next = tmp;
//                if (tmp) tmp->prev = last;
//            }
//            head = head->next;
//        }
//        return pHead->next;
//    }
//};


// 排序的循环链表
//class Solution {
//public:
//    Node* insert(Node* head, int insertVal) {
//        Node* node = new Node(insertVal);
//        if (head == nullptr)
//        {
//            node->next = node;
//            return node;
//        }
//        Node* tmp = head;
//        int Min = INT_MAX, Max = INT_MIN;
//        while (head->next != tmp)
//        {
//            if (head->val <= insertVal && head->next->val >= insertVal)
//            {
//                node->next = head->next;
//                head->next = node;
//                return tmp;
//            }
//            if (head->val > Max)
//            {
//                Max = head->val;
//            }
//            if (head->val < Min)
//            {
//                Min = head->val;
//            }
//            head = head->next;
//        }
//        if (head->val <= insertVal && head->next->val >= insertVal)
//        {
//            node->next = head->next;
//            head->next = node;
//            return tmp;
//        }
//        if (head->val > Max)
//        {
//            Max = head->val;
//        }
//        if (head->val < Min)
//        {
//            Min = head->val;
//        }
//        if (Max == Min || Max == INT_MIN || Min == INT_MAX)
//        {
//            node->next = tmp->next;
//            tmp->next = node;
//        }
//        else
//        {
//            head = tmp;
//            while (head->val != Max || head->val == head->next->val)
//            {
//                head = head->next;
//            }
//            node->next = head->next;
//            head->next = node;
//        }
//        return tmp;
//    }
//};


// 插入、删除和随机访问都是 O(1) 的容器
//class RandomizedSet {
//public:
//    unordered_map<int, int> hash;
//    vector<int> v;
//    /** Initialize your data structure here. */
//    RandomizedSet() {
//        srand((unsigned)time(0));
//    }
//
//    /** Inserts a value to the set. Returns true if the set did not already contain the specified element. */
//    bool insert(int val) {
//        if (hash.find(val) == hash.end())
//        {
//            int idx = v.size();
//            v.push_back(val);
//            hash[val] = idx;
//            return true;
//        }
//        return false;
//    }
//
//    /** Removes a value from the set. Returns true if the set contained the specified element. */
//    bool remove(int val) {
//        if (hash.find(val) == hash.end())
//        {
//            return false;
//        }
//        int idx = hash[val];
//        int tail = v.size() - 1;
//        int tmp = v[tail];
//        v[idx] = v[tail];
//        hash[tmp] = idx;
//        v.pop_back();
//        hash.erase(val);
//        return true;
//    }
//
//    /** Get a random element from the set. */
//    int getRandom() {
//        int randomIndex = rand() % v.size();
//        return v[randomIndex];
//    }
//};