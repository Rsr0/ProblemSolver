class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        int lastJump=0, maxReach=0, i=0;
        int jump=0;
        while(lastJump < n-1 ){
            maxReach=max(maxReach, i+nums[i]);
            if(i==lastJump){
                lastJump=maxReach;
                jump++;
            }
            i++;
        }
        return jump;
    }
};