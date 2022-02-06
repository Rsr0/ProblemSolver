class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int count=1, i=1;
        
        for(int j=1;j<n;j++){
            if(nums[j]==nums[j-1])  count++;
            else count=1;
            
            if(count<=2) nums[i++]=nums[j];
        }
        return i;
    }
};