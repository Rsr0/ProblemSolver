class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int l=0,r=0;
        int ans=0,sum=0;
        unordered_map<int,int> mp;
       while(r<nums.size()){
            mp[nums[r]]++;
           sum+=nums[r];
              while(mp[nums[r]] > 1 and l < r){
                mp[nums[l]]--;
                sum -= nums[l];
                l++;
            }
           ans=max(ans,sum);
           r++;
        }
        return ans;
    }
};