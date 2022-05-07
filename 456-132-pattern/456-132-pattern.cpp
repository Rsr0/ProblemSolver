class Solution {
public:
    bool find132pattern(vector<int>& nums) {
     int n=nums.size();
      stack<int> st;
        int k=INT_MIN;
        for(int i=n-1;i>=0;i--){
          if(nums[i]<k)
              return 1;
          while(!st.empty() && nums[i]>st.top()){
              k=st.top();
              st.pop();
          }
            st.push(nums[i]);
      }
        return 0;
    }
};