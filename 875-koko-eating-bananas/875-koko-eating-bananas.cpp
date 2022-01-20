class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi=*max_element(piles.begin(), piles.end());
        int low=1, high=maxi;
   
        int ans=0;
        while(low<=high){
            int mid=low+(high-low)/2;
             int count=0;
            
            for(int i=0;i<piles.size();i++){
                 if(piles[i]%mid==0)
                     count+=piles[i]/mid;
                else
                    count+=(piles[i]/mid)+1;
            }
           if(count<=h){
               ans=mid;
               high=mid-1;
           }
            else
                low=mid+1;
        }
        return ans;
    }
};