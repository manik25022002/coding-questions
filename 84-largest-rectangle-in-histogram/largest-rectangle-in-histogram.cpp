class Solution {
private:
    vector<int> nextsmallerelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = n - 1; i >= 0; i--) {
            int current = arr[i];
            while (s.top() !=-1 && arr[s.top()] >= current) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

        vector<int> prevsmallerelement(vector<int>& arr, int n) {
        stack<int> s;
        s.push(-1);
        vector<int> ans(n);
        for (int i = 0; i<n ; i++) {
            int current = arr[i];
            while (s.top() !=-1 && arr[s.top()] >= current) {
                s.pop();
            }
            ans[i] = s.top();
            s.push(i);
        }
        return ans;
    }

public:
    int largestRectangleArea(vector<int>& heights) {
        //    luv bubber
        int n = heights.size();
        vector<int> next(n);
        next = nextsmallerelement(heights, n);

        vector<int> prev(n);
        prev = prevsmallerelement(heights, n);
        int area = INT_MIN;
        for (int i = 0; i < n; i++) {
            int l = heights[i];
            if (next[i] == -1) {
                next[i] = n;
            }
            int b = next[i] - prev[i] - 1;
            int new_area = l * b;
            area = max(area, new_area);
        }
        return area;
    }
};

// another approach
//  int n = heights.size();
//         vector<int> left(n);
//         vector<int> right(n);
//         stack<int> st;
//           // left half
//         for (int i = 0; i < n; i++) {
//             while(!st.empty() && heights[st.top()] >= heights[i]) { st.pop();
//             } if (st.empty())
//                 left[i] = 0;
//             else
//                 left[i] = st.top() + 1;
//             st.push(i);  }
//         while(!st.empty()) st.pop();

//         // right half
//         for (int i = n-1; i>=0; i--) {
//             while(!st.empty() && heights[st.top()] >= heights[i]) { st.pop();
//             } if (st.empty())
//                 right[i] = n-1;
//             else
//                 right[i] = st.top() - 1;
//             st.push(i);
//         }
//         int max_area=0;
//         for(int i=0;i<n;i++){
//             max_area = max(max_area  , heights[i] * ( right[i] - left[i] +1
//             ) );
//         }
//         return max_area;