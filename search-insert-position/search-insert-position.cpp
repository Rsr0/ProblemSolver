class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        if(target==0) return 0;
        int index;
        int n=nums.size();
        int l=0,r=n-1;
        
        while(l<=r){
            int mid=(int) (l+r)/2;
            if(nums[mid]==target)
                return mid;
            if(nums[mid]<target)
                l=mid+1;
            else 
                r=mid-1;
        }
        return l;
        
    }
};