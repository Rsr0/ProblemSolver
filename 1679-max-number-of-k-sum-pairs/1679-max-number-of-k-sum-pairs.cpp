class Solution {
public:
    int maxOperations(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        int ans=0;
        for(auto it:nums){
            int x=k-it;
            if(mp.find(x)!=mp.end() && mp[x]!=0){
                ans++;
                mp[x]--;
            }
            else
                mp[it]++;
            
        }
    
        return ans;
    }
};