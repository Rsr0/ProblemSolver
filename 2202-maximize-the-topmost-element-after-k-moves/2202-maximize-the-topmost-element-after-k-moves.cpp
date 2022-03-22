class Solution {
public:
    int maximumTop(vector<int>& nums, int k) {
        int n=nums.size();
        if(k==0)
            return (n>=1)? nums[0]:-1;
        if(k==1)
            return (n>=2)? nums[1]:-1;
        if(n==1){
            return (k%2==0)? nums[0]:-1;  
        }
        
        int mx=0;
        for(int i=0;i<min(k-1,n);i++){
            mx=max(mx, nums[i]);
        }
        
        if(k<n)
            mx=max(mx, nums[k]);
        return mx;
    }
};