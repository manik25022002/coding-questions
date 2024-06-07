#include <bits/stdc++.h>
class Solution {
    private:
static bool comp(vector<int> &a, vector<int> &b) { return (a[1] < b[1]); }
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        int n=intervals.size();
        // sort kara ascending order of end time
        sort(intervals.begin(), intervals.end(),comp);
        int cnt=1;
        int freetime=intervals[0][1];
        for(int i=1;i<n;i++){
            if(intervals[i][0]>=freetime){
                cnt++;
                freetime=intervals[i][1];
            }
        }
        return (n-cnt);
    }
};