class Solution {
public:
    double dp[101][101];
    double champagneTower(int poured, int query_row, int query_glass) {
        memset(dp,0,sizeof(dp));
        dp[0][0]=poured;
        
        for(int i=0;i<100;i++){ //query_row
            for(int j=0;j<=i;j++){
                if(dp[i][j]>=1){
                    double x=(dp[i][j]-1)/2.0; //excess
                    dp[i][j]=1;
                    
                    dp[i+1][j]+=x;
                    dp[i+1][j+1]+=x;
                }
            }
        }
        return dp[query_row][query_glass];
    }
};