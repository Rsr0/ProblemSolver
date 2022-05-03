class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n=nums.size();
        if(n==1) return 0;
     
        int i=0, j=n-1;
        while(i<n-1 && nums[i]<=nums[i+1])
            i++;
        
        if(i==n-1) return 0; //sorted 
        
        while(j>0 && nums[j]>=nums[j-1])
            j--;
        
        int mn=nums[i], mx=nums[i];
        for(int k=i+1;k<=j;k++){
            mn=min(nums[k], mn);
            mx=max(nums[k], mx);
        }
        
        int l=0, r=n-1;
        
        while(nums[l]<=mn && l<=i)    // 0 to i   min
            l++; 
        while(nums[r]>=mx && r>=j)     // j to n   max
            r--;
            
        return r-l+1;
        
        
    }
};