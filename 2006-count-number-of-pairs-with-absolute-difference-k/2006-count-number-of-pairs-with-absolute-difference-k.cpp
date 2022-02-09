class Solution {
public:
    int countKDifference(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
    
        for(auto it:nums){
            mp[it]++;
        }
        int res=0;
        for(auto it:nums){
            int x=it-k;
            if(mp.find(x)!=mp.end()){
                if(it==x) continue;
                res+=mp[x];
            }
        }
        return res;
    }
};