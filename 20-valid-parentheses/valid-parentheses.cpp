class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        int n = s.size();
        for (int i = 0; i < n; i++) {
            char ch = s[i];

            if (ch == '[' || ch == '{' || ch == '(') {
                st.push(ch);
            } else {
                if (st.empty()) {
                    return false;
                } else {
                    if (! st.empty()) {
                        char top = st.top();
                        if (  (top == '[' && ch ==']')  || (top == '{' && ch =='}') || (top == '(' && ch ==')')     )
                          st.pop();
                        else
                            return false;
                    } else
                        return false;
                }
            }

        }
       return (st.empty());
    }
};