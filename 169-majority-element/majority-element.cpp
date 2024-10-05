class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int el;
        int cnt = 0;
        int cnt_1 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (cnt == 0) {
                cnt = 1;
                el = nums[i];
            }
            else if(el==nums[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        for(int i=0;i<n;i++){
            if(el==nums[i])cnt_1++;
            if(cnt_1>n/2)return el;
        }
        return -1;
    }
};

// hashing solution
//   int n=nums.size();
//         map<int,int>mp;
//         for(int i=0;i<n;i++){
//             mp[nums[i]]++;
//         }
//         for(auto it:mp){
//             if(it.second>n/2)
//             return it.first;
//         }
//         return -1;