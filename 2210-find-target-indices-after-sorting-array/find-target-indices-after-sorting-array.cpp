class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                ans.push_back(i);
            }
        }
        return ans;
        // int s = 0;
        // int e = nums.size() - 1;
        // while (s <= e) {
        //     int mid = s + (e - s) / 2;
        //     if (nums[mid] > target) {
        //         e = mid - 1;
        //     } else if (nums[mid] == target) {
        //         ans.push_back(mid);
        //         // e=mid-1;
        //     } else {
        //         s = mid + 1;
        //     }
        // }
        // sort(ans.begin(), ans.end());
        // return ans;
    }
};