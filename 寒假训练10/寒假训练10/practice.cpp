class Solution {
public:
    int getDecimalValue(ListNode* head) {
        ListNode* p = head;
        int ans = 0;
        while (p)
        {
            ans = ans * 2 + p->val;
            p = p->next;
        }
        return ans;
    }
};



class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n = nums.size();
        int l = 0, r = n - 1;
        while (l <= r)
        {
            int mid = (l + r) >> 1;
            if (nums[mid] == target) return mid;
            if (nums[l] <= nums[mid])// ×óÓĞĞò
            {
                if (nums[l] <= target && nums[mid] > target)
                    r = mid - 1;
                else
                    l = mid + 1;
            }
            else
            {
                if (nums[r] >= target && nums[mid] < target)
                    l = mid + 1;
                else
                    r = mid - 1;
            }
        }
        return -1;
    }
};