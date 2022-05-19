class Solution {
public:
    int findMax(int i, int j, vector<vector<int>> &m, int tar,vector<vector<int>>&dp){
        if (i < 0 || j < 0 || i >= m.size() || j >= m[0].size() || tar >= m[i][j])
            return -1;
        return dp[i][j];
    }
    
    
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int ans = -1;
        int m=matrix.size(), n=matrix[0].size();
        vector<pair<int, pair<int, int>>> v;
        for (int i = 0; i < m; i++){
            for (int j = 0; j < n; j++){
                v.push_back({matrix[i][j], {i, j}});
            }
        }
        sort(v.begin(), v.end());
        vector<vector<int>> dp(m, vector<int>(n, -1));
        
        for(int i=v.size()-1;i>=0;i--){
            int x=v[i].second.first;
            int y=v[i].second.second;
            dp[x][y]=max({findMax(x+1,y,matrix,matrix[x][y], dp), findMax(x-1,y,matrix,matrix[x][y], dp), findMax(x,y+1,matrix,matrix[x][y], dp), findMax(x,y-1,matrix,matrix[x][y], dp) });
            
            if(dp[x][y]<0)
                dp[x][y]=1;
            else
                dp[x][y]+=1;
            
            ans=max(ans, dp[x][y]);
        }
        return ans;
    }
    
};