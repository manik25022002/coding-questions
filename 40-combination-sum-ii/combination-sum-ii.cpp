class Solution {
public:
    void solve(int index, vector<int>& arr, int target, vector<int>& ans,
               vector<vector<int>>& output) {

        int n = arr.size();
        if (target == 0) {
            output.push_back(ans);
            return;
        }

        // take the value
        for (int i = index; i < n; i++) {
            if (i > index && arr[i] == arr[i - 1])
                continue;
            if (arr[i] > target)
                break;
            ans.push_back(arr[i]);
            solve(i + 1, arr, target - arr[i], ans, output);
            ans.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<vector<int>> output;
        vector<int> ans;
        int index = 0;
        solve(index, candidates, target, ans, output);
        return output;
    }
};