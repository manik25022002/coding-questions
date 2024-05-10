#include <bits/stdc++.h>
#include <cmath>
#include <math.h>
#include <utility>
class Solution {
public:
    int mod = 1e9 + 7;
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        vector<int> left(n);
        vector<int> right(n);
        stack<pair<int, int>> st_1;
        stack<pair<int, int>> st_2;
        // int m = <int>(Math.pow(10 , 9))+7;
        //  filling of left array
        for (int i = 0; i < n; i++) {
            int count = 1;
            int cur_ele = arr[i];
            while (st_1.size() != 0 && st_1.top().first > cur_ele) {
                count += st_1.top().second;
                st_1.pop();
            }
            pair<int, int> value(cur_ele, count);
            st_1.push(value);
            left[i] = count;
        }

        // filling the right array
        for (int i = n - 1; i >= 0; i--) {
            int count = 1;
            int cur_ele = arr[i];
            while (st_2.size() != 0 && st_2.top().first >= cur_ele) {
                count += st_2.top().second;
                st_2.pop();
            }
            pair<int, int> value(cur_ele, count);
            st_2.push(value);
            right[i] = count;
        }
        int ans = 0;
        for (int i = 0; i < n; i++) {
           long long contri =( long long )left[i] * (long long )right[i] * (long long )arr[i];
ans = (ans +(contri % mod))%mod;
        }
        return ans;
    }
};  