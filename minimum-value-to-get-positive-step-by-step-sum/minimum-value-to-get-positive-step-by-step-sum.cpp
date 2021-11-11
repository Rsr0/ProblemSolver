class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minPre=nums[0];
        int sum=nums[0];
        for(int i=1;i<nums.size();i++){
            sum+=nums[i];
            minPre=min(minPre, sum);
        }
        
        return (minPre<0) ? (-minPre+1): 1;
    }
};