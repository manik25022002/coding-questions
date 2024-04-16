class Solution {
public:
    int characterReplacement(string s, int k) {
        int l = 0, r = 0, n = s.size(),  max_fre = 0 , max_len = 0;
            unordered_map<char, int> map;
        while (r < n) {
            map[s[r] - 'A']++;
            max_fre =max(max_fre , map[s[r] - 'A']);
            while((r-l+1) - max_fre  >k    )/* matlab trim karna padega*/
            {
                map[s[l] -'A']--;
                max_fre=0;
                for(int i=0;i<map.size();i++) 
                max_fre=max(max_fre , map[i]);
                l++;
            }
            if((r-l+1) - max_fre  <=k ) max_len= max(max_len , r-l+1);
            r++;
        }
        return max_len;
    }
};