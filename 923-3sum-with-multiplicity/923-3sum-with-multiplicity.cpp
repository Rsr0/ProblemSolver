class Solution {
public:
    int mod=1e9+7;
    
    int threeSumMulti(vector<int>& arr, int target) {
        int n=arr.size();
        unordered_map<int,int> mp;

        int ans=0;
        for(int i=0;i<n;i++){
            ans+=mp[target-arr[i]];
            ans%=mod;
            for(int j=0;j<i;j++){
                mp[arr[i]+arr[j]]++;
            }
        }
        return ans;        
    }
};