class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int n=nums.size();
         unordered_set<int> st;
        for(int i=0;i<n;i++){
            if(st.count(nums[i]))
                return 1;
            
            st.insert(nums[i]);
            
        }
        return 0;
    
    }
};