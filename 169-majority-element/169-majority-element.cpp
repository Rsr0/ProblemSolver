class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int res=0, cnt=0;
        for(int i=0;i<n;i++){
            if(cnt==0)
                res=nums[i];

           if(nums[i]==res)
                cnt++;
            else
                cnt--;
        }
        return res;
    }
};