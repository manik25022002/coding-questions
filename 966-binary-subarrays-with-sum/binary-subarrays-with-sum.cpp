class Solution {
public:
    int funct(vector<int>& arr, int value) {
        int l = 0, r = 0, cnt = 0, sum = 0;
        int n = arr.size();
        if (value < 0)
            return 0;
        while (r < n) {
            sum += arr[r];
            while (sum > value) {
                sum = sum - arr[l];
                l = l + 1;
            }
            cnt = cnt + (r - l + 1);
            r++;
        }
        return cnt;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {

        int greater = funct(nums, goal);
        int smaller = funct(nums, goal - 1);
        return (greater - smaller);
    }
};