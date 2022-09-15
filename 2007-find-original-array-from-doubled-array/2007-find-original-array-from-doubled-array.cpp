class Solution {
public:
    vector<int> findOriginalArray(vector<int>& changed) {
        vector<int> ans;
        int n=changed.size();
        if(n%2) return ans;

        map<int,int> mp;
        for(auto i:changed)
            mp[i]++;
        
        for(auto &it:mp){
            if(it.second!=0){
                if((it.first==0 && it.second%2!=0) || !mp.count(2*it.first) || it.second > mp[2*it.first] )
                    return {};
                
                while(it.second--){
                    ans.push_back(it.first);
                    mp[2*it.first]--;
                }
            }
            
        }
        return ans;
    }
};