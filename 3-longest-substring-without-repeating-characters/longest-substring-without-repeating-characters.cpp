class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char, int> map ;
        for(char key : s){
            map[key]=-1;
        }
        int l = 0, r = 0, n = s.size(), max_len = 0;
        while (r < n) {
            if (map[s[r]] != -1) {
                if (map[s[r]] >= l) {
                    l = map[s[r]] + 1;
                }
            }
            int len = r - l + 1;
            max_len = max(max_len, len);
            map[s[r]] = r;
            r++;
        }
        return max_len;
    }
};