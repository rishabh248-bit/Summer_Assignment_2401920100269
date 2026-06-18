class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n = heights.size();
        stack<int> st;
        int maxa=0;
        for(int i=0;i<=n;i++){
            int curr_h = (i==n) ? 0 : heights[i];
            while(!st.empty() && curr_h < heights[st.top()]){
                int h = heights[st.top()];
                st.pop();

                int w = st.empty() ? i : i-st.top()-1;
                maxa = max(maxa,h*w);
            }
            st.push(i);
        }
        return maxa;
    }
};
