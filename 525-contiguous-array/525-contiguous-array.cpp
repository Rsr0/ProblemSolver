class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int res=0, sum=0;
        unordered_map<int,int> mp{{0,-1}}; // sum , index
        
        for(int i=0;i<nums.size();i++){
            sum+=nums[i]? 1: -1;
            if(mp.count(sum))
                res=max(res, i-mp[sum]);
            else 
                mp[sum]=i;
        }
        return res;
    }
};