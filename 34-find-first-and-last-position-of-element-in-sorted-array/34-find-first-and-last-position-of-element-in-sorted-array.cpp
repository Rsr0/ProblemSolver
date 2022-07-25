class Solution {
public:
    

    int first(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int res=-1;
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                res=mid;
                r=mid-1;     // *******************
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        return res; 
    }
    
    int last(vector<int>& nums, int target){
        int l=0;
        int r=nums.size()-1;
        int res=-1;        
        while(l<=r){
            int mid=(l+r)/2;
            if(nums[mid]==target){
                res=mid;
                l=mid+1;       // *******************
            }
            else if(nums[mid]>target)
                r=mid-1;
            else
                l=mid+1;
        }
        
        return res;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        
        vector<int> ans(2,-1);
        if(n==0) return ans;

        ans[0]=(first(nums,target));
        ans[1]=(last(nums,target));
        return ans;
    }
};