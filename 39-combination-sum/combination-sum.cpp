class Solution {
public:
  void solve(int index, vector<int>& arr, int target,
                              vector<int>& ans, vector<vector<int>>& output) {
        int n = arr.size();
        if (index == n) {
            if (target == 0) {
                output.push_back(ans);
            }
            return ;
        }
        // if we take same elemnt again
        if (arr[index] <= target) {
            ans.push_back(arr[index]);
            solve(index, arr, target - arr[index], ans, output);
            ans.pop_back();
        }
        // if we take next elemnt now
        solve(index + 1, arr, target, ans, output);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {

        vector<vector<int>> output;
        vector<int> ans;
        int index = 0;
      
         solve(index, candidates, target, ans, output);
           return output;
    }
};