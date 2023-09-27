//class Solution {
//public:
//    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
//        int n = nums1.size() + nums2.size();
//        if (n % 2 == 0)
//        {
//            int left = find(0, nums1, 0, nums2, n / 2);
//            int right = find(0, nums1, 0, nums2, n / 2 + 1);
//            return (left + right) / 2.0;
//        }
//        else return find(0, nums1, 0, nums2, n / 2 + 1) / 1.0;
//    }
//
//    int find(int i, vector<int>& nums1, int j, vector<int>& nums2, int k)
//    {
//        if (nums1.size() - i > nums2.size() - j) return find(j, nums2, i, nums1, k);
//        if (k == 1)
//        {
//            if (i == nums1.size()) return nums2[j];
//            return min(nums1[i], nums2[j]);
//        }
//        if (i == nums1.size()) return nums2[j + k - 1];
//        int si = min((int)nums1.size(), i + k / 2), sj = j + k / 2;
//        if (nums1[si - 1] > nums2[sj - 1])
//        {
//            return find(i, nums1, sj, nums2, k - sj + j);
//        }
//        return find(si, nums1, j, nums2, k - si + i);
//    }
//};


//class Solution {
//public:
//    void nextPermutation(vector<int>& nums) {
//        int n = nums.size();
//        int i = n - 2;
//        while (i >= 0)
//        {
//            if (nums[i] < nums[i + 1]) break;
//            i--;
//        }
//        if (i == -1)
//        {
//            reverse(nums.begin(), nums.end());
//            return;
//        }
//        int j = n - 1;
//        while (j > i && nums[j] <= nums[i])
//        {
//            j--;
//        }
//        swap(nums[i], nums[j]);
//        sort(nums.begin() + i + 1, nums.end());
//    }
//};


