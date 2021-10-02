class Solution {
public:
    vector<int> smallestRange(vector<vector<int>>& nums) {

        vector<int> ans;     
         vector<pair<int,int>> order; // value, list
        for(int i=0;i<nums.size();i++){
           for(int j:nums[i])
               order.push_back({j,i});
        }
        
        sort(order.begin(),order.end());
        
        int j=0, k=0;
        unordered_map<int,int> mp;
        
        for(int i=0;i<order.size();i++){
            if(! mp[order[i].second]++) 
                k++;
            if(k==nums.size()){
                while(mp[order[j].second]>1)
                        mp[order[j++].second]--;
                if(ans.empty() || ans[1]-ans[0] > order[i].first - order[j].first){

                  ans={order[j].first,order[i].first};
                }
            }
            
        }
        return ans;
    
    }
};