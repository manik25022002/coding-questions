class Solution {
public:
    bool canJump(vector<int>& nums) {
        int max_loca = 0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(i>max_loca)return false;
            max_loca =max(max_loca , i+nums[i]);
            if(max_loca>n){
                return true;
                break;
            }
        }
        return true;
    }
};