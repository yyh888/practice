#include <iostream>
#include <vector>
#include <string>

using namespace std;

/*ass Solution {
public:
    bool isValid(string s) {
        int n = s.size();
        stack<char> st;
        for (int i = 0; i < n; i++)
        {
            if (s[i] == '(' || s[i] == '[' || s[i] == '{') st.push(s[i]);
            else
            {
                if (st.empty()) return false;
                char tmp = st.top();
                if (s[i] == ')')
                {
                    if (tmp != '(') return false;
                }
                if (s[i] == '}')
                {
                    if (tmp != '{') return false;
                }
                if (s[i] == ']')
                {
                    if (tmp != '[') return false;
                }
                st.pop();
            }
        }
        return st.empty();
    }
};*/

//void Merge(vector<int>& nums, int begin1, int end1, int begin2, int end2)
//{
//    int begin = begin1;
//    int i = begin1, j = begin2;
//    vector<int> tmp = nums;
//    while (i <= end1 && j <= end2)
//    {
//        if (nums[i] < nums[j])
//        {
//            tmp[begin1++] = nums[i++];
//        }
//        else
//        {
//            tmp[begin1++] = nums[j++];
//        }
//    }
//    while (i <= end1)
//    {
//        tmp[begin1++] = nums[i++];
//    }
//    while (j <= end2)
//    {
//        tmp[begin1++] = nums[j++];
//    }
//    nums = tmp;
//}
//
//void MergeSort(vector<int>& nums)
//{
//    int n = nums.size();
//    int gap = 1;
//    while (gap < n)
//    {
//        for (int i = 0; i < n; i += gap * 2)
//        {
//            int begin1 = i, end1 = i + gap - 1;
//            int begin2 = i + gap, end2 = i + 2 * gap - 1;
//            if (end1 >= n) break;
//            if (end2 >= n) end2 = n - 1;
//            Merge(nums, begin1, end1, begin2, end2);
//        }
//        gap *= 2;
//    }
//}
//
//int main()
//{
//    vector<int> nums{ 1, 5, 2, 3, 4, 2, 3 };
//    MergeSort(nums);
//    for (auto& e : nums) cout << e << " ";
//    return 0;
//}

//void BubbleSort(vector<int>& nums)
//{
//    int n = nums.size();
//    for (int i = 0; i < n - 1; i++)
//    {
//        bool flag = true;
//        for (int j = i; j < n - i - 1; j++)
//        {
//            if (nums[j] > nums[j + 1])
//            {
//                swap(nums[j], nums[j + 1]);
//                flag = false;
//            }
//        }
//        if (flag) break;
//    }
//}
//
//int main()
//{
//    vector<int> nums{ 1, 5, 2, 3, 4, 2, 3 };
//    BubbleSort(nums);
//    for (auto& e : nums) cout << e << " ";
//    return 0;
//}


//int cnt = 0;
//
//vector<bool> flag;
//vector<string> res;
//string tmp;
//
//void dfs(string& s, int i)
//{
//    if (i == s.size())
//    {
//        cnt++;
//        res.push_back(tmp);
//        return;
//    }
//    for (int k = 0; k < s.size(); k++)
//    {
//        if (!flag[k]) continue;
//        flag[k] = false;
//        tmp += s[k];
//        dfs(s, i + 1);
//        flag[k] = true;
//        tmp.pop_back();
//    }
//}
//
//int main()
//{
//    string s("abcde");
//    /*flag.resize(s.size(), true);
//    dfs(s, 0);*/
//    cnt = 1;
//    for (int i = 1; i <= s.size(); i++)
//    {
//        cnt *= i;
//    }
//    cout << cnt;
//    return 0;
//}



