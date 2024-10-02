#include <set>

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n = nums.size();
        set<int> st(nums.begin(), nums.end());
        // for (int i = 0; i < n; i++) {
        //     st.insert(nums[i]);
        // }
        // vector<int> ans(n);
        int i = 0;
        for (auto it : st) {
            nums[i++] = it;
        }
        return st.size();
    }
};
