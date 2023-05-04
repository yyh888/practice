// LRU
//struct listNode
//{
//    listNode(int k, int v)
//        : key(k)
//        , val(v)
//        , next(nullptr)
//        , prev(nullptr)
//    {}
//
//    int key;
//    int val;
//    listNode* next;
//    listNode* prev;
//};
//
//class LRUCache {
//public:
//    LRUCache(int capacity) {
//        size = 0;
//        n = capacity;
//        head = new listNode(0, 0);
//        head->next = head;
//        head->prev = head;
//    }
//
//    int get(int key) {
//        if (hash.find(key) == hash.end())
//        {
//            return -1;
//        }
//        remove(key);
//        return hash[key]->val;
//    }
//
//    void put(int key, int value) {
//        if (hash.find(key) != hash.end())
//        {
//            remove(key);
//            hash[key]->val = value;
//        }
//        else
//        {
//            if (size == n)
//            {
//                popBack();
//                size--;
//            }
//            listNode* node = new listNode(key, value);
//            pushFront(node);
//            size++;
//            hash[key] = node;
//        }
//    }
//
//    void popBack()
//    {
//        listNode* del = head->prev;
//        hash.erase(del->key);
//        del->prev->next = head;
//        head->prev = del->prev;
//        delete del;
//    }
//
//    void pushFront(listNode* node)
//    {
//        listNode* Next = head->next;
//        head->next = node;
//        node->prev = head;
//        Next->prev = node;
//        node->next = Next;
//        hash[node->key] = node;
//    }
//
//    void remove(int val)
//    {
//        listNode* tmp = hash[val];
//        tmp->prev->next = tmp->next;
//        tmp->next->prev = tmp->prev;
//        pushFront(tmp);
//    }
//private:
//    unordered_map<int, listNode*> hash;
//    listNode* head;
//    int n;
//    int size;
//};


// 有效的变位词
//class Solution {
//public:
//    bool isAnagram(string s, string t) {
//        if (s == t) return false;
//        unordered_map<char, int> hashs, hasht;
//        for (int i = 0; i < s.size(); i++)
//        {
//            hashs[s[i]]++;
//        }
//        for (int i = 0; i < t.size(); i++)
//        {
//            hasht[t[i]]++;
//        }
//        return hashs == hasht;
//    }
//};


// 变位词组
//class Solution {
//public:
//    vector<vector<string>> groupAnagrams(vector<string>& strs) {
//        unordered_map<string, vector<string>> hash;
//        for (auto& str : strs)
//        {
//            string tmp = str;
//            sort(tmp.begin(), tmp.end());
//            hash[tmp].push_back(str);
//        }
//        vector<vector<string>> vv;
//        for (auto& e : hash)
//        {
//            vv.push_back(e.second);
//        }
//        return vv;
//    }
//};

