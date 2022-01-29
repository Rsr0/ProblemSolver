
class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        int n=heights.size();
        
        vector<int> left(n,0), right(n,n-1); // from current node to left min & right min height
        stack<int>st;
        
        for(int i=0;i<n;i++){
            while(!st.empty() && heights[st.top()]>=heights[i]) //pop till smaller than h[i]
                st.pop();
            
         if(!st.empty())
            left[i]=st.top()+1;   // left min index + 1 
        
            st.push(i);
        }
        
        while(!st.empty()) st.pop();  //clear the stack 
        
        for(int i=n-1;i>=0;i-- ){
             while(!st.empty() && heights[st.top()]>=heights[i])
                st.pop();
        
                if(!st.empty())
                    right[i]=st.top()-1;  // right min index - 1
            st.push(i);
        }
        
        int ans=0;
        for(int i=0;i<n;i++){
            ans=max(ans, heights[i]*(right[i]-left[i]+1));
        }
        return ans;
        
        
    }
};