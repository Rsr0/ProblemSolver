class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        sort(nums.begin(),nums.end());
        int n = nums.size();
       // fix x
        for(int x=0;x<n-2;x++){
            if(x!=0 &&  nums[x]==nums[x-1])
                continue;
         // 2 sum/ptr
            int y=x+1, k=n-1;
            while(y<k){
                if(nums[x]+nums[y]+nums[k]==0){
                    res.push_back({nums[x],nums[y],nums[k]});
                y++;
                    while(y<k && nums[y]==nums[y-1]) y++; //[[0,0,0],[0,0,0]]
                }
                
                else if (nums[x]+nums[y]+nums[k]>0)
                    k--;
                else 
                    y++;
            }
            
            }
        
        return res;
    }
};