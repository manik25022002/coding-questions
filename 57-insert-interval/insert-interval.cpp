class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals,
                               vector<int>& newInterval) {
        vector<vector<int>> result1;
        int i = 0;
        int n = intervals.size();
        while (i < n && intervals[i][1] < newInterval[0]) {
            result1.push_back(intervals[i]);
            i++;
        }
        while (i < n && intervals[i][0] <= newInterval[1]) {
            newInterval[0] = min(intervals[i][0], newInterval[0]);
                newInterval[1] = max(intervals[i][1], newInterval[1]);
                 i++;
        }
        result1.push_back(newInterval);
        while(i<n){
              result1.push_back(intervals[i]);
              i++;
        }
        return result1;
    }
};