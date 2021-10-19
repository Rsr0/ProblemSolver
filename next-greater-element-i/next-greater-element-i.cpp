class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int,int> mp;
        int n1=nums1.size(), n2=nums2.size();
        stack<int> st;
        st.push(nums2[n2-1]);
        mp[nums2[n2-1]]=-1;
        for(int i=n2-2;i>=0;i--){
           while(!st.empty() && st.top()<nums2[i]){
               st.pop();
           } 
            mp[nums2[i]]= st.empty()? -1:st.top();
            st.push(nums2[i]);
        }
        
        vector<int> ans;
        for(int i=0;i<n1;i++){
            ans.push_back(mp[nums1[i]]);
        }
        return ans;
    }
};