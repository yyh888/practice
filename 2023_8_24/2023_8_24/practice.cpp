//class Solution {
//public:
//    typedef pair<int, int> PII;
//
//    void QuickSort(vector<PII>& v, int begin, int end, int k)
//    {
//        if (begin >= end) return;
//        int l = begin, r = end;
//        int key = v[begin].second;
//        while (l < r)
//        {
//            while (l < r && v[r].second <= key) r--;
//            while (l < r && v[l].second >= key) l++;
//            if (l < r) swap(v[l], v[r]);
//        }
//        swap(v[begin], v[l]);
//        if (l > k) QuickSort(v, begin, l - 1, k);
//        else if (l < k) QuickSort(v, l + 1, end, k);
//        else return;
//    }
//
//    vector<int> topKFrequent(vector<int>& nums, int k) {
//        unordered_map<int, int> hash;
//        for (auto& e : nums)
//        {
//            hash[e]++;
//        }
//        vector<PII> v;
//        for (auto& e : hash)
//        {
//            v.push_back(e);
//        }
//        QuickSort(v, 0, v.size() - 1, k - 1);
//        vector<int> tmp;
//        for (int i = 0; i < k; i++)
//        {
//            tmp.push_back(v[i].first);
//        }
//        return tmp;
//    }
//};


//class Solution {
//public:
//    int MinDep = INT_MAX;
//
//    void dfs(TreeNode* root, int depth)
//    {
//        if (root == nullptr) return;
//        if (!root->left && !root->right)
//        {
//            MinDep = min(MinDep, depth);
//        }
//        dfs(root->left, depth + 1);
//        dfs(root->right, depth + 1);
//    }
//
//    int minDepth(TreeNode* root) {
//        if (root == nullptr) return 0;
//        dfs(root, 1);
//        return MinDep;
//    }
//};


//class Solution {
//public:
//    int minDepth(TreeNode* root) {
//        if (!root) return 0;
//        queue<TreeNode*> qq;
//        int levelSize = 1;
//        int depth = 1;
//        qq.push(root);
//        while (qq.size())
//        {
//            while (levelSize--)
//            {
//                TreeNode* tmp = qq.front();
//                qq.pop();
//                if (!tmp->left && !tmp->right)
//                {
//                    return depth;
//                }
//                if (tmp->left) qq.push(tmp->left);
//                if (tmp->right) qq.push(tmp->right);
//            }
//            levelSize = qq.size();
//            depth++;
//        }
//        return 0;
//    }
//};


//class Solution {
//public:
//    int lengthOfLIS(vector<int>& nums) {
//        int n = nums.size();
//        vector<int> dp(n + 1, 1);
//        dp[0] = 0;
//        int Max = 1;
//        for (int i = 2; i <= n; i++)
//        {
//            for (int j = 1; j < i; j++)
//            {
//                if (nums[i - 1] > nums[j - 1])
//                {
//                    dp[i] = max(dp[j] + 1, dp[i]);
//                    Max = max(dp[i], Max);
//                }
//            }
//        }
//        return Max;
//    }
//};


//class Solution {
//public:
//    int multiply(int A, int B) {
//        int a = A, b = B;
//        if (A < B)
//        {
//            while (a-- != 1)
//            {
//                B += b;
//            }
//        }
//        else
//        {
//            while (b-- != 1)
//            {
//                A += a;
//            }
//        }
//        if (a == 0)
//            return B;
//        else
//            return A;
//    }
//};


//class Solution {
//public:
//    string mul(vector<int>& a, int b)
//    {
//        string res;
//        vector<int> tmp;
//        int add = 0;
//        for (int i = 0; i < a.size() || add; i++)
//        {
//            if (i < a.size()) add = add + a[i] * b;
//            tmp.push_back(add % 10);
//            add /= 10;
//        }
//        for (int i = tmp.size() - 1; i >= 0; i--)
//        {
//            res += tmp[i] + '0';
//        }
//        return res;
//    }
//
//    string add(string& s1, string& s2)
//    {
//        string res;
//        int n = s1.size(), m = s2.size();
//        int add = 0, i = n - 1, j = m - 1;
//        while (i >= 0 || j >= 0 || add)
//        {
//            if (i >= 0)
//            {
//                add += s1[i] - '0';
//                i--;
//            }
//            if (j >= 0)
//            {
//                add += s2[j] - '0';
//                j--;
//            }
//            res += add % 10 + '0';
//            add /= 10;
//        }
//        reverse(res.begin(), res.end());
//        return res;
//    }
//
//
//    string multiply(string num1, string num2) {
//        if (num1 == "0" || num2 == "0") return "0";
//        string s;
//        int n = num1.size(), m = num2.size();
//        if (n < m) return multiply(num2, num1);
//        vector<int> v;
//        for (int i = n - 1; i >= 0; i--)
//        {
//            v.push_back(num1[i] - '0');
//        }
//        for (int i = m - 1; i >= 0; i--)
//        {
//            string tmp = mul(v, num2[i] - '0');
//            int cnt = m - i - 1;
//            while (cnt--) tmp += "0";
//            s = add(s, tmp);
//        }
//        return s;
//    }
//};


