class Solution {
public:
int first_o(vector<int>& nums, int target) {
        int first = -1;
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e) {
           int mid = s + (e - s) / 2;
            if (nums[mid] == target ) {
                first = mid;
                e = mid - 1;
            } 
            else if(nums[mid]>target){
                e=mid-1;
            }
            else {
                s = mid + 1;
            }
        }
        return first;
    }
     int last_o(vector<int>& nums, int target) {
        int last = -1;
        int s = 0;
        int e = nums.size() - 1;
        while (s <= e) {
           int mid = s + (e - s) / 2;
            if (nums[mid] == target) {
                last = mid;
                s = mid + 1;
            }
            else if(nums[mid]<target){
                s=mid+1;
            }
            else {
                e = mid - 1;
            }
        }
        return last;
    }

    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>ans;
        int firsto = first_o(nums,target);
        int lasto = last_o(nums,target);
        ans.push_back(firsto);
         ans.push_back(lasto);
         return ans;
    }
};