#include <iostream>
#include <unordered_map>

using namespace std;

//class Solution {
//public:
//    int lengthOfLongestSubstring(string s) {
//        int n = s.size();
//        int Max = 0;
//        unordered_map<char, int> hash;
//        for (int l = 0, r = 0; r < n; r++)
//        {
//            while (hash[s[r]] > 0)
//            {
//                hash[s[l++]]--;
//            }
//            hash[s[r]]++;
//            Max = max(Max, r - l + 1);
//        }
//        return Max;
//    }
//};



//class Solution {
//public:
//    int minSubArrayLen(int target, vector<int>& nums) {
//        int n = nums.size();
//        int sum = 0;
//        int minLen = INT_MAX;
//        for (int l = 0, r = 0; r < n; r++)
//        {
//            sum += nums[r];
//            while (sum >= target)
//            {
//                minLen = min(minLen, r - l + 1);
//                sum -= nums[l++];
//            }
//        }
//        return minLen == INT_MAX ? 0 : minLen;
//    }
//};



//class Solution {
//public:
//    Node* copyRandomList(Node* head) {
//        if (head == nullptr) return nullptr;
//        unordered_map<Node*, Node*> hash;
//        Node* cur = head;
//        while (cur)
//        {
//            hash[cur] = new Node(cur->val);
//            cur = cur->next;
//        }
//        cur = head;
//        while (cur)
//        {
//            hash[cur]->next = hash[cur->next];
//            hash[cur]->random = hash[cur->random];
//            cur = cur->next;
//        }
//        return hash[head];
//    }
//};'


//class Solution {
//public:
//    int trap(vector<int>& height) {
//        int sum = 0;
//        stack<int> st;
//        int n = height.size();
//        for (int i = 0; i < n; i++)
//        {
//            while (st.size() && height[i] > height[st.top()])
//            {
//                int mid = st.top();
//                st.pop();
//                if (st.size())
//                {
//                    int left = st.top();
//                    int h = min(height[i], height[left]) - height[mid];
//                    sum += h * (i - left - 1);
//                }
//            }
//            st.push(i);
//        }
//        return sum;
//    }
//};


//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int tol = nums1.size() + nums2.size();
//        if (tol % 2 == 0)
//        {
//            int left = find(nums1, 0, nums2, 0, tol / 2);
//            int right = find(nums1, 0, nums2, 0, tol / 2 + 1);
//            return (left + right) / 2.0;
//        }
//        else
//        {
//            return find(nums1, 0, nums2, 0, tol / 2 + 1) / 1.0;
//        }
//    }
//
//    int find(vector<int>& nums1, int i, vector<int>& nums2, int j, int k)
//    {
//        if (nums1.size() - i > nums2.size() - j) return find(nums2, j, nums1, i, k);
//        if (k == 1)
//        {
//            if (i == nums1.size())
//            {
//                return nums2[j];
//            }
//            else
//            {
//                return min(nums1[i], nums2[j]);
//            }
//        }
//        if (i == nums1.size()) return nums2[j + k - 1];
//        int si = min((int)nums1.size(), i + k / 2), sj = j + k / 2;
//        if (nums1[si - 1] < nums2[sj - 1])
//        {
//            return find(nums1, si, nums2, j, k - si + i);
//        }
//        else
//        {
//            return find(nums1, i, nums2, sj, k - sj + j);
//        }
//
//    }
//};

