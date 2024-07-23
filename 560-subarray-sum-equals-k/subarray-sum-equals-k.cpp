class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mpp;
        mpp[0] = 1;
        int presum = 0;
        int cnt = 0;
        for (int i = 0; i < n; i++) {
            presum += nums[i];
            int remain = presum - k;
            cnt = cnt + mpp[remain];
            mpp[presum] += 1;
        }
        return cnt;
    }
};