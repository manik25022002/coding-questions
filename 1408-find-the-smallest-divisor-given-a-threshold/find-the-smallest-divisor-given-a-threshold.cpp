class Solution {
public:
    int findmax(vector<int>& v) {
        int maxi = INT_MIN;
        for (int i = 0; i < v.size(); i++) {
            maxi = max(maxi, v[i]);
        }
        return maxi;
    }
    long long findtotalsum(vector<int>& v, int divisor) {
        long long sum = 0;
        for (int i = 0; i < v.size(); i++) {
            sum += ceil((double)(v[i]) / (double)(divisor));
        }
        return sum;
    }

    int smallestDivisor(vector<int>& nums, int threshold) {
        int s = 1;
        int e = findmax(nums);
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long val = findtotalsum(nums, mid);
            if (val <= threshold) {
                e = mid - 1;
            } else {
                s = mid + 1;
            }
        }
        return s;
    }
};