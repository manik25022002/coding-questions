class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            int val = asteroids[i];
            if (!st.empty() && st.top() > 0 && val < 0) {
                if (abs(val) == abs(st.top())) {
                    st.pop();
                } else if (abs(val) > abs(st.top())) {
                    st.pop();
                    i--;
                }
            } else st.push(val);    
        }
            vector<int> ans(st.size());
        for(int i=st.size()-1;i>=0;i--){
            ans[i]=st.top();
            st.pop();
        }
        return ans;
    }
};