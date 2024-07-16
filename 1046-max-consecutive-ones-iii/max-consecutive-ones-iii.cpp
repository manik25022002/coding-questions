class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int l = 0, r = 0, n = nums.size(), max_len = 0, zeroes = 0;
        while (r < n) {
            if (nums[r] == 0)
                zeroes++;
         while(zeroes > k) {
                if (nums[l] == 0)
                    zeroes--;
                l++;
            }
            if (zeroes <= k) {
                max_len = max(max_len, r - l + 1);
            }
            r++;
        }
        return max_len;
    }
};