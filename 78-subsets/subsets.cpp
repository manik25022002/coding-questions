class Solution {
public:
 void solve(int index, vector<int>& arr, vector<int>&ans,
                              vector<vector<int>>&output) {
        int n = arr.size();
        if (index >= n) {
            output.push_back(ans);
            return ;
        }
        ans.push_back(arr[index]);
        solve(index + 1, arr, ans, output);
        ans.pop_back();

        solve(index + 1, arr, ans, output);
        
    }

    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> output;
        vector<int> ans;
        int index = 0;
        solve(index, nums, ans, output);
        return output;
    }
};