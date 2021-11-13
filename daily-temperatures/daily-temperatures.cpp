class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temp) {
        int n=temp.size()-1;
        stack<int> st;
        vector<int> ans(n+1,0);
        st.push(n--);
        
        while(n>=0){
            while(!st.empty() && temp[st.top()]<=temp[n])
                st.pop();
            
            if(!st.empty())
                ans[n]=st.top()-n;
            st.push(n);
            
            n--;
        }
        
        return ans;
    }
};