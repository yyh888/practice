// 扁平化嵌套列表迭代器
//class NestedIterator {
//public:
//    vector<int> v;
//    int idx = 0;
//
//    void dfs(vector<NestedInteger>& List)
//    {
//        for (auto& e : List)
//        {
//            if (e.isInteger())
//            {
//                v.push_back(e.getInteger());
//            }
//            else
//            {
//                dfs(e.getList());
//            }
//        }
//        return;
//    }
//
//    NestedIterator(vector<NestedInteger>& nestedList) {
//        int n = nestedList.size();
//        dfs(nestedList);
//    }
//
//    int next() {
//        return v[idx++];
//    }
//
//    bool hasNext() {
//        return idx < v.size();
//    }
//};


// O(1) 时间插入、删除和获取随机元素
//class RandomizedSet {
//public:
//    unordered_map<int, int> hash;
//    vector<int> v;
//
//    RandomizedSet() {
//
//    }
//
//    bool insert(int val) {
//        if (hash.count(val))
//        {
//            return false;
//        }
//        hash[val]++;
//        v.push_back(val);
//        return true;
//    }
//
//    bool remove(int val) {
//        if (hash.count(val))
//        {
//            hash.erase(val);
//            auto it = v.begin();
//            while (*it != val) ++it;
//            v.erase(it);
//            return true;
//        }
//        return false;
//    }
//
//    int getRandom() {
//        int n = hash.size();
//        int idx = rand() % n;
//        return v[idx];
//    }
//};


//class RandomizedSet {
//public:
//    unordered_map<int, int> hash;
//    vector<int> v;
//
//    RandomizedSet() {
//        srand(time(0));
//    }
//
//    bool insert(int val) {
//        if (hash.count(val))
//        {
//            return false;
//        }
//        v.push_back(val);
//        hash[val] = v.size() - 1;
//        return true;
//    }
//
//    bool remove(int val) {
//        if (hash.count(val))
//        {
//            int idx = hash[val];
//            swap(v[idx], v[v.size() - 1]);
//            hash[v[idx]] = idx;
//            v.pop_back();
//            hash.erase(val);
//            return true;
//        }
//        return false;
//    }
//
//    int getRandom() {
//        int n = hash.size();
//        int idx = rand() % n;
//        return v[idx];
//    }
//};


// 打乱数组
//class Solution {
//public:
//    vector<int> ori, cha;
//
//    Solution(vector<int>& nums) {
//        ori = nums;
//        cha = nums;
//    }
//
//    vector<int> reset() {
//        return ori;
//    }
//
//    vector<int> shuffle() {
//        int n = cha.size();
//        for (int i = 0; i < n; i++)
//        {
//            int j = i + rand() % (cha.size() - i);
//            swap(cha[i], cha[j]);
//        }
//        return cha;
//    }
//};