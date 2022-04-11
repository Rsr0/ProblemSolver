class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size(), n=grid[0].size();
        while(k--){
            vector<int> v;
            for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    v.push_back(grid[i][j]);
            
            v.insert(v.begin(), v[v.size()-1]); // idx , val
            v.pop_back();
            int x=0;
              for(int i=0;i<m;i++)
                for(int j=0;j<n;j++)
                    grid[i][j]=v[x++];
        }
        return grid;
    }
};