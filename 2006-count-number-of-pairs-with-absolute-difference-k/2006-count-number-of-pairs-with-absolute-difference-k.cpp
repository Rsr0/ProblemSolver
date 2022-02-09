class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        vector<int> mp(101,0);
        for(auto it:nums)
            mp[it]++;
        
        int res=0;
        for(int i=k+1;i<101;i++)
            res+=(mp[i]*mp[i-k]);
    
        return res;
    }
};