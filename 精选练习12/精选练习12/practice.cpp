// 基本计算器
//class Solution {
//public:
//    stack<int> nums;
//    stack<char> ops;
//
//    unordered_map<char, function<int(int, int)>> hash = {
//        {'+', [](int x, int y) {return x + y; }},
//        {'-', [](int x, int y) {return x - y; }},
//    };
//
//    void delBlack(string& s)
//    {
//        auto it = s.find(" ");
//        while (it != -1)
//        {
//            s.replace(it, 1, "");
//            it = s.find(" ");
//        }
//    }
//
//    void calc()
//    {
//        if (nums.size() < 2 || ops.empty()) return;
//        int right = nums.top();
//        nums.pop();
//        int left = nums.top();
//        nums.pop();
//        char op = ops.top();
//        ops.pop();
//        nums.push(hash[op](left, right));
//    }
//
//    int calculate(string s) {
//        // 去掉空格
//        delBlack(s);
//        // 防止首元素为-
//        nums.push(0);
//        int n = s.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (isdigit(s[i]))// 数字字符
//            {
//                int cur = 0, j = i;
//                while (j < n && isdigit(s[j]))
//                {
//                    cur = cur * 10 + (s[j++] - '0');
//                }
//                nums.push(cur);
//                i = j - 1;
//            }
//            else// 符号字符
//            {
//                if (s[i] == '(') ops.push(s[i]);
//                else if (hash.count(s[i]))// + -
//                {
//                    // "(+"情况
//                    if (i > 0 && (s[i - 1] == '('))
//                    {
//                        nums.push(0);
//                    }
//                    // 入栈前先把前面的计算了
//                    while (ops.size() && ops.top() != '(')
//                    {
//                        calc();
//                    }
//                    ops.push(s[i]);
//                }
//                else// ')'
//                {
//                    // 一直算到 '('
//                    while (ops.size() && ops.top() != '(')
//                    {
//                        calc();
//                    }
//                    ops.pop();
//                }
//            }
//        }
//        while (!ops.empty())
//            calc();
//        return nums.top();
//    }
//};


// 基本计算器 II
//class Solution {
//public:
//    stack<int> nums;
//    stack<char> ops;
//
//    unordered_map<char, function<int(int, int)>> hash = {
//        {'+', [](int x, int y) {return x + y; }},
//        {'-', [](int x, int y) {return x - y; }},
//        {'*', [](int x, int y) {return x * y; }},
//        {'/', [](int x, int y) {return x / y; }},
//    };
//
//    unordered_map<char, int> oper_pri = {
//            {'+',1},
//            {'-',1},
//            {'*',2},
//            {'/',2},
//    };
//
//    void delBlack(string& s)
//    {
//        auto it = s.find(" ");
//        while (it != -1)
//        {
//            s.replace(it, 1, "");
//            it = s.find(" ");
//        }
//    }
//
//    void calc()
//    {
//        if (nums.size() < 2 || ops.empty()) return;
//        int right = nums.top();
//        nums.pop();
//        int left = nums.top();
//        nums.pop();
//        char op = ops.top();
//        ops.pop();
//        nums.push(hash[op](left, right));
//    }
//
//    int calculate(string s) {
//         去掉空格
//        delBlack(s);
//         防止首元素为-
//        nums.push(0);
//        int n = s.size();
//        for (int i = 0; i < n; i++)
//        {
//            if (isdigit(s[i]))// 数字字符
//            {
//                int cur = 0, j = i;
//                while (j < n && isdigit(s[j]))
//                {
//                    cur = cur * 10 + (s[j++] - '0');
//                }
//                nums.push(cur);
//                i = j - 1;
//            }
//            else// 符号字符
//            {
//                if (s[i] == '(') ops.push(s[i]);
//                else if (hash.count(s[i]))// + -
//                {
//                     "(+"情况
//                    if (i > 0 && (s[i - 1] == '('))
//                    {
//                        nums.push(0);
//                    }
//                     入栈前先把前面的计算了
//                    while (ops.size() && ops.top() != '(' && oper_pri[ops.top()] >= oper_pri[s[i]])
//                    {
//                        calc();
//                    }
//                    ops.push(s[i]);
//                }
//                else// ')'
//                {
//                     一直算到 '('
//                    while (ops.size() && ops.top() != '(')
//                    {
//                        calc();
//                    }
//                    ops.pop();
//                }
//            }
//        }
//        while (!ops.empty())
//            calc();
//        return nums.top();
//    }
//};


