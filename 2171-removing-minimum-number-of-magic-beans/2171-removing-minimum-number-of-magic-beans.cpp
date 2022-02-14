class Solution {
public:
    long long minimumRemoval(vector<int>& beans) {
        long long ans=1e18, sum=0;
        int n=beans.size();
        sort(beans.begin(), beans.end());
        for(auto it:beans)  sum+=it;
        
        for(int i=0;i<n;i++){
            long long change = sum - (n-i) * (long long)beans[i] * 1ll;
            ans=min(ans, change);
        }
        return ans;
    }
};