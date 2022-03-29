class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        int i=0, n=nums.size();
        while(i<n){
            if(nums[i]!=nums[nums[i]-1])
                swap(nums[i], nums[nums[i]-1]);
            else i++;
        }
        
        for(int i=0;i<n;i++){
            if(i+1!=nums[i]){
                ans[0]=nums[i];
                ans[1]=i+1;
            }
        }
        
        return ans;
    }
};