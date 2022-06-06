class Solution {
public:
    bool canArrange(vector<int>& arr, int k) {
        int n=arr.size();
        if(n&1) return 0;
        int cnt=0;
        unordered_map<int,int> mp;
 
        for(auto i:arr)
            mp[(i%k+k)%k]++;  // -ve values possible
        
        for(auto i:arr){
            int rem=(i%k+k)%k;
            if(rem==0){
                if(mp[rem]&1)   return 0;
            }
            else if(mp[rem]!=mp[k-rem])
                return 0;
        }
        
        return 1;
    }
};