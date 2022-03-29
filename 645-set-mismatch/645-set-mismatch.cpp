class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int> ans(2);
        unordered_map<int,int> mp;
        
        for(auto i:nums){
           mp[i]++;
            if(mp[i]>1)
                ans[0]=i;
       }

        for(int i=1;i<=nums.size();i++){
            if(mp.find(i)==mp.end()){  
                ans[1]=i;
                break;
            }
        }
        
        return ans;
    }
};