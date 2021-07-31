class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        if(k<=0) return false;
        int n=nums.size();
        k=min(n,k);
        
        unordered_set<int> window;
        for(int i=0;i<k;i++){
            if(window.count(nums[i]))    //  count(nums[i])==1
                return true;
            window.insert(nums[i]);
        }
        
        for(int i=k;i<n;i++){
           
            if(window.count(nums[i]))
               return true;
            
            window.erase(nums[i-k]);
            window.insert(nums[i]);
             cout<<"1 ";
        }
               
               return false;
    }
};