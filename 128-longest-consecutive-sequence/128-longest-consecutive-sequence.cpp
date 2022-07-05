class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int n=nums.size();
       
        for(int i=0;i<n;i++)
            s.insert(nums[i]);
        
        int res=0;
        for(int i=0;i<n;i++){
            if(s.count(nums[i]-1)) continue;   // finding start
            int c=1;
            while(s.count(nums[i]+c)) c++;   // start to end
            res=max(res,c);
            }
        
        return res;
        
    }
};