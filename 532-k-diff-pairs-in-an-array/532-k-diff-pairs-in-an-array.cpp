class Solution {
public:
    int findPairs(vector<int>& nums, int k) {   
        int n=nums.size();
        if(n<2) return 0;
        
        int res=0;
        sort(nums.begin(), nums.end());
        int l=0,r=1;
        while(l<n && r<n){
            int diff=nums[r]-nums[l];
            if(diff==k){
                res++;
                r++;
                while(r<n && nums[r]==nums[r-1])   
                    r++; // to avoid duplicates
            }
            else if(diff<k) 
                r++;
            else{
                l++;
                if(l==r)
                    r++;
            }
        }
        return res;
    }
};