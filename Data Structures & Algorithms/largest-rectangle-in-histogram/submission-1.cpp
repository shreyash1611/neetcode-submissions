class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        heights.push_back(0);
        stack<int> st;
        int ans = 0;

        for(int i = 0;i < heights.size(); i++){
            ans = max(ans, heights[i]);
            while(!st.empty() and heights[st.top()]>heights[i]){
                int prevelement = st.top();
                st.pop();
                int pse = (st.size()==0) ? -1:st.top();
                ans = max(ans, heights[prevelement]*(i-pse-1));
            }
            st.push(i);
        }
        return ans;
    }
};
