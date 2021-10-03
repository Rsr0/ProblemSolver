class Solution {
public:
    int jump(vector<int>& nums) {
        int n=nums.size();
        if(n<2) return 0;
        //  bfs
        int level=0, reach=0, curr=0, i=0;
        while(curr-i+1 > 0) // node count of current level>0
        {
            level++;
            for(;i<=curr;i++){
                reach=max(reach, nums[i]+i);
                
                if(reach>=n-1) 
                    return level;
            }
            curr=reach;
        }
        return 0;
    }
};