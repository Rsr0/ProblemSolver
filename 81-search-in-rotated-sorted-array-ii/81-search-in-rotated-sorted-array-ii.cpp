class Solution {
public:
    bool search(vector<int>& nums, int target) {

        int l=0, r=nums.size()-1;
       
        while(l<=r){
           
           while(l<r && nums[l]==nums[l+1]) l++;
           while(l<r && nums[r]==nums[r-1]) r--;
      
            int mid=l+(r-l)/2;
            if(nums[mid]==target)   return 1;
            else if(nums[l]<=nums[mid]){
                if(nums[l]<=target && target<=nums[mid])
                    r=mid-1;
                else
                    l=mid+1;
            }
            else{
                if(nums[mid]<=target && target<=nums[r])
                    l=mid+1;
                else
                    r=mid-1;
            }
           
       }
        return  0;
    }
};