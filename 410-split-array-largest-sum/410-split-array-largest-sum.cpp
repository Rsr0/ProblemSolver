class Solution {
public:
    int splitArray(vector<int>& nums, int m) {
        int lo=0, hi=0;
        
        for(auto it:nums){
            lo=max(lo, it);  // max
            hi+=it;   // sum
        }
        
        if(m==nums.size())
            return lo;
        
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            int cnt=0, sum=0;
            
            for(auto it:nums){
                if(sum+it > mid){
                    cnt++;
                    sum=0;
                }
                
                if(cnt>m)   break;
                sum+=it;
            }
            
            if(cnt<m)
                hi=mid-1;
            else
                lo=mid+1;
        }
        
        return lo;
        
    }
};