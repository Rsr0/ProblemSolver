class Solution {
public:
    
    int dp[501][501];
    
    int solve(vector<int> &nums, int l, int r){
        if(l>r) return 0;
        
        if(dp[l][r]!=-1)
            return dp[l][r];
        
        int res=0, curr, rem;
        for(int i=l;i<=r;i++){
            curr=nums[l-1] * nums[i] * nums[r+1]; 
            rem=solve(nums, l, i-1) + solve(nums, i+1, r);
            res=max(res, curr + rem);
        }
        dp[l][r]=res;
        return dp[l][r];
    }
    
    int maxCoins(vector<int>& nums) {
        memset(dp, -1, sizeof(dp));
        
        int n=nums.size();
        if(n==1)
            return nums[0];
        
        // dummy value of 1 on corners
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        n+=2;
        
        return solve(nums,1,n-2);
    }
};