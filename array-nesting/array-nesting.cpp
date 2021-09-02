class Solution {
public:
    int arrayNesting(vector<int>& nums) {
        unordered_set<int> st;
        int cnt=0, maxLen=0;
        
        for(int i=0;i<nums.size();i++){
            if(!st.count(i)){
                int j=i;
                cnt=0;
                while(st.find(j)==st.end()){  //!st.count(j)
                    st.insert(i);
                    j=nums[j];                    
                    cnt++;
                }
                maxLen=max(maxLen,cnt);
            }
        }
        return maxLen;
        
    }
};