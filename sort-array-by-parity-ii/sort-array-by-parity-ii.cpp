class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int> even;
        vector<int> odd;
        
        for(auto i:nums){
        if(i%2) 
            odd.push_back(i);
        else 
            even.push_back(i);
        }
        
        sort(odd.begin(),odd.end());
        sort(even.begin(),even.end());
        
        vector<int> ans;
        int i=0,j=0;
        for(int k=0;k<n/2;k++){
            ans.push_back(even[i++]);
            ans.push_back(odd[j++]);
        }
        return ans;
    }
};