class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> hash(n+1,0);
        
        for(int i=0;i<n;i++){
            hash[nums[i]]=1;
        }

        vector<int> res;
        for(int i=1;i<=n;i++){
            if(!hash[i])
                res.push_back(i);
        }
        
        return res;
            
    }
};