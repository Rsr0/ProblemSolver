class Solution {
public:
    vector<int> dp;
    
    int rec(int n){
        if(n==0) return 0;
        if(n<0) return INT_MAX;
        if(dp[n]!=0) return dp[n];

        int count=n;
        for(int i=1;i*i<=n;i++)
            count=min(count, rec(n-(i*i)));

        dp[n]=count+1;
        return count+1;
    }
    
    int numSquares(int n) {
        dp.resize(n+1,0);
        return rec(n);
    }
};