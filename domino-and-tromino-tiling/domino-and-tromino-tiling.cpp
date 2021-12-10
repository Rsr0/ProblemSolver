class Solution {
public:
    
    #define MOD 1000000007
    int numTilings(int n) {
        vector<long long> dp(n+1);
        iota(dp.begin(), dp.end(),0); // sequence: 0,1,2.....
        dp[0]=1;
        for(int i=3;i<=n;i++)
            dp[i]=(dp[i-1]+dp[i-1]+dp[i-3])%MOD;
        
        return dp.back();
    }
};