class Solution {
public:
    int findMin(vector<int>& nums) {
        int sol = INT_MAX;
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e) {
            int mid = s + (e - s) / 2;
            // sol = min(sol, nums[mid]);
            if (nums[s] <= nums[mid]) {
                sol = min(sol, nums[s]);
                s=mid+1;
            } else if (nums[mid] <= nums[e]) {
                sol = min(sol, nums[mid]);
                e=mid-1;
            }
        }
        return sol;
    }
};