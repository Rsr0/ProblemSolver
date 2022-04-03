class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n=nums.size();
        int i=n-2;
        while(i>=0 && nums[i+1]<=nums[i])
                i--;
        // sort(nums.begin()+i,nums.end());
        if(i>=0){
            int j=n-1;
        while(j>=0 && nums[j]<=nums[i])
            j--;
        
        swap(nums[i],nums[j]);
        }
        
        reverse(nums.begin()+i+1,nums.end());
    }
};