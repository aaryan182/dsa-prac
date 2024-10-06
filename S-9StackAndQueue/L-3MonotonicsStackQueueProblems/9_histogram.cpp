// https://leetcode.com/problems/largest-rectangle-in-histogram/

class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int>st;
        int maxArea = 0;

        for(int i = 0; i< n; i++){
            while(!st.empty() && heights[st.top()] > heights[i]){
                int h = heights[st.top()];
                st.pop();
                int width = st.empty() ? i : i - st.top() -1;
                maxArea = max(maxArea, h*width);
            }
            st.push(i);
        }

        while(!st.empty()){
        int h = heights[st.top()];
        st.pop();
        int width = st.empty() ? n: n - st.top() -1;
        maxArea = max(maxArea,h*width);
        }
        return maxArea;
    }
};

