class Solution {
public:
    int funct(vector<int>& arr, int value) {
        int l = 0, r = 0, n = arr.size(), cnt = 0, sum = 0;
        if (value < 0)
            return 0;
        while (r < n) {
            sum = sum + (arr[r] % 2);
            while (sum > value) {
                sum = sum - (arr[l] % 2);
                l = l + 1;
            }
            cnt = cnt + (r - l + 1);
            r=r+1;
        }
        return cnt;
    }
    int numberOfSubarrays(vector<int>& nums, int k) {
        int greater = funct(nums , k);
         int smaller = funct(nums , k-1);
         return (greater-smaller);
    }
};
