class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int l=0, r=n-1;
    
        vector<int> ans(2);
        while(l<r){
            int sum=nums[l]+nums[r];
            if(sum==target){
                ans[0]=l+1;
                ans[1]=r+1;
                break;
            }
            
            else if(sum<target) l++;
            else r--;
        }
        
        return ans;
        
    }
};