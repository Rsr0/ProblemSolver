class Solution {
public:
    int digArtifacts(int n, vector<vector<int>>& artifacts, vector<vector<int>>& dig) {
        vector<vector<int>> vis(n, vector<int>(n,0));
        
        for(auto it:dig){
            vis[it[0]][it[1]]=1;
        }
        
        int cnt=0;
        for(auto it:artifacts){
            int r1=it[0], c1=it[1], r2=it[2], c2=it[3];
            bool flag=1;
            for(int i=r1;i<=r2;i++){
                for(int j=c1;j<=c2;j++){
                    if(vis[i][j]==0){
                        flag=0;
                        break;
                    }
                }
                if(!flag)
                    break;
            }
            cnt+=flag;
        }
        return cnt;
        
    }
};