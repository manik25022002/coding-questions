class Solution {
public:
    string makeGood(string s) {
        int n = s.size();
        for (int i = 0; i <= n - 2;) {
            if (abs((s[i]) - (s[i + 1])) == 32) {
                s.erase(i, 2);
                n -= 2;
                if (i > 0)i--;
            } else i++;
        }
        return s;
    }
};
