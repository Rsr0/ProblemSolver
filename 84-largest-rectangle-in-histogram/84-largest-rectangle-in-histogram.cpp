class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        stack<int> st;
        int area=0;
        heights.push_back(0); // handle remaining elemnts in stack
        
        for(int i=0;i<heights.size();i++){
            while(!st.empty() && heights[st.top()] > heights[i]){ // pop till greater element than ith
                int h=heights[st.top()];
                st.pop();
                int w= st.empty()? i: i-st.top()-1;
                area=max(area, h*w);
            }
            st.push(i);
        }
        return area;
    }
};