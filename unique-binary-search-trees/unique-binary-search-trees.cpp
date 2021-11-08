class Solution {
public:
    int numTrees(int n) {
        int dp[n+1];
        dp[0]=dp[1]=1;   // empty or 1 root node
        
        // dp[i]= number of bst till ith length
        for(int i=2;i<=n;i++){
            dp[i]=0;     // initializing
            for(int j=1;j<=i;j++){
                dp[i]+=dp[j-1]*dp[i-j];
                
                /* i as root
                   j-1  as left subtree
                   i-j as right subtree
                */
            }
        }
        return dp[n];
    }
};