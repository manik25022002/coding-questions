class Solution {
public:
    int findmaxi(vector<int>& v) {
        int maxi = INT_MIN;
        for (int i = 0; i < v.size(); i++) {
            maxi = max(v[i], maxi);
        }
        return maxi;
    }
    long long findtotalhours(vector<int>& v, int perhour) {
        long long totalhours = 0;
        for (int i = 0; i < v.size(); i++) {
             totalhours+=ceil((double)(v[i])/(double)(perhour));
        }
        return totalhours;
    }

    int minEatingSpeed(vector<int>& piles, int h) {
        int s = 1;
        int e = findmaxi(piles);
        while (s <= e) {
            int mid = s + (e - s) / 2;
            long long val = findtotalhours(piles, mid);
            if (val <= h) {
         
                e = mid - 1;
            } else{
                s = mid + 1;
            }
        
        }
        return s;
    }
};