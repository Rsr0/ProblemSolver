class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int minPre=INT_MAX;
        int sum=0;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            minPre=min(minPre, sum);
        }
        
        return (minPre<0) ? (-minPre+1): 1;
    }
};