class Solution {
public:
    int maxDepth(string s) {
        int maxi = INT_MIN, cnt = 0,n=s.size();
        for (int i = 0; i <n; i++) {
            if (s[i] == '(')cnt++;
            else if (s[i] == ')')cnt--;
            maxi = max(maxi, cnt);
        }

        return maxi;
    }
};