class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int n = g.size();
        int m = s.size();
        int l = 0; /* pointer for s array */
        int r = 0;  /* pointer for g array */
        sort(g.begin() , g.end());
        sort(s.begin() , s.end());
        while (l < m  &&  r < n)  {
            if (g[r] <= s[l]) {
                r++;
            }
            l++;
        }
        return r;
    }
};