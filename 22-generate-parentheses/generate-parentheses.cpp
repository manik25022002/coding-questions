#include<bits/stdc++.h>
class Solution {
public:
    void solve(string &s, int open, int close, vector<string> &valid) {
        if (open == 0 && close == 0) {
            valid.push_back(s);
            return;
        }
        if (open > 0) {
            s.push_back('(');
            solve(s, open - 1, close,valid);
            s.pop_back();
        }
        if (close > 0) {
            if (open < close) {
                s.push_back(')');
                solve(s, open, close - 1,valid);
                s.pop_back();
            }
        }
    }
    vector<string> generateParenthesis(int n) {
        vector<string> valid;
        string s;
        solve(s,n,n,valid);
        return valid;

    }
};