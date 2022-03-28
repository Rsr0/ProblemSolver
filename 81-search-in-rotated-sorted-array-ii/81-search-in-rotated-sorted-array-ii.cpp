class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int n=nums.size();
        if(n==1) return nums[0]==target ? 1 : 0;
        
        int l=0, r=n-1, mid;
        while(l<=r){
            mid=l+(r-l)/2;
            if(nums[mid]==target) return 1;
            if(nums[l]<nums[mid]){
                if(nums[l]<=target && target<nums[mid])
                    r=mid-1;
                else 
                    l=mid+1;
            }
            else if(nums[l]==nums[mid])   // for duplicates    nums[r]==nums[mid] r--;
                l++;
            else {
                if(nums[mid]<target && target<=nums[r])
                    l=mid+1;
                else 
                    r=mid-1;
            }
        }
        return  0;
    }
};