class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return nums[0];
        int cnt=1;
        int ans=0;
        sort(nums.begin(), nums.end());
        for(int i=0;i<n-1;i++){
            
            if(nums[i]==nums[i+1]){
                cnt++;
                if(cnt>n/2){
                 ans=nums[i];
                 }
            }
            else{
                cnt=1;
            }
            
        }
        return ans;
    }
};