class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
       
        int l=-1, r=-1;     
        int mn=INT_MAX, mx=INT_MIN;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            if(mx>nums[i])
                r=i;
        }
        for(int i=n-1;i>=0;i--){
            mn=min(mn,nums[i]);
            if(mn<nums[i])
                l=i;
        }
        
        if(l==r)    return 0;
      
        return r-l+1;
        
        
    }
};