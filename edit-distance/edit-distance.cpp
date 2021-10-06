class Solution {
public:
    int dp[501][501];
    
//     int helper(string &w1, string &w2, int n, int m){
//         if(n==0 && m==0) return 0;
//         if(n==0) return m;
//         if(m==0) return n;
        
//         if(dp[n][m]!=-1)
//             return dp[n][m];
//         if(w1[n-1]==w2[m-1])
//             return dp[n][m]=helper(w1,w2,n-1,m-1);
        
//         int del=helper(w1,w2,n-1,m);
//         int ins=helper(w1,w2,n,m-1);
//         int rep=helper(w1,w2,n-1,m-1);
        
//         return dp[n][m]=1 + min({ins,del,rep});
//     }
    
    int minDistance(string word1, string word2) {
        // memset(dp,-1,sizeof(dp));
        // return helper(word1,word2,word1.size(),word2.size());
        
        int n=word1.size(), m=word2.size();
        for(int i=0;i<=n;i++){
            for(int j=0;j<=m;j++){
                if(i==0)
                    dp[i][j]=j;
                else if(j==0)
                    dp[i][j]=i;
                else if(word1[i-1]==word2[j-1])
                    dp[i][j]=dp[i-1][j-1];
                else 
                    dp[i][j]=1+min({dp[i-1][j], dp[i][j-1], dp[i-1][j-1]});
            }
        }
        return dp[n][m];
    }
};