class Solution {
public:
    int minDeletions(string s) {
        unordered_map<char,int> mp;
        unordered_set<int> vis;
        int ans=0;
        
        for(auto c:s)
            mp[c]++;
        
        for(auto i:mp){
            while(vis.count(i.second)){
                i.second--;
                ans++;
            }
            if(i.second)     
                vis.insert(i.second);
        }
        return ans;
    }
};