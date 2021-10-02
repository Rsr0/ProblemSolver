class Solution {
public:
    int calculateMinimumHP(vector<vector<int>>& dungeon) {
        int r=dungeon.size(), c=dungeon[0].size();
        vector<vector<int>> res(r,vector<int>(c,0));
        
        for(int i=r-1;i>=0;i--){
            for(int j=c-1;j>=0;j--){
                if(i==r-1 && j==c-1)
                    res[i][j]=max(1, 1-dungeon[i][j]);
                else if(i==r-1)
                    res[i][j]=max(1, res[i][j+1]-dungeon[i][j]);
                else if(j==c-1)
                    res[i][j]=max(1, res[i+1][j]-dungeon[i][j]);
                else
                    res[i][j]=max(1, min(res[i+1][j], res[i][j+1]) - dungeon[i][j]);
            }
        }
        return res[0][0];
   }
};