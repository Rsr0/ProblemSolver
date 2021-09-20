class Solution {
public:
    int solve(int i, int j, string &s, string &t, vector<vector<int>> &dp){
        if(j>=t.size()) return 1;
        if(i>=s.size()) return 0;
        
        if(dp[i][j]!=-1) return dp[i][j];
        
        int temp=0;
        if(s[i]==t[j]) 
            temp=solve(i+1,j+1,s,t,dp);
   
        temp+=solve(i+1,j,s,t,dp);
        
        dp[i][j]=temp;
        return dp[i][j];
    }
    
    int numDistinct(string s, string t) {
        int n=s.size(), m=t.size();
        vector<vector<int>> dp(n+1,vector<int>(m+1,-1));
        
        return solve(0,0,s,t,dp);
        
    }
};