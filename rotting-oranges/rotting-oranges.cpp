class Solution {
public:
  
    
    int orangesRotting(vector<vector<int>>& grid) {
          ios_base::sync_with_stdio(false);
            cin.tie(NULL);   
        
        int r=grid.size(), c=grid[0].size();
    
        int total=0, count=0, mins=0;
        //  stores  rotten { row, column }
        queue<pair<int,int>> rotten;
    
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(grid[i][j]!=0){    // non empty oranges
                    total++; 
                    if(grid[i][j]==2){   // rotten oranges
                        rotten.push({i,j});
                    }
                }
            }
        }
        // 4 adjacent directions
        int dx[4]={0,0,1,-1};
        int dy[4]={1,-1,0,0};
        
        while(!rotten.empty()){
            int k=rotten.size();
            count+=k;      // adding rotten oranges 
            while(k--){     
                auto d=rotten.front();
                rotten.pop();
                int x=d.first, y=d.second;
                for(int i=0;i<4;i++){  // nx & ny  adjacent direction of x & y
                        int  nx=x+dx[i];
                        int ny=y+dy[i];
                        if(nx>=0 && nx<r && ny>=0 && ny<c && grid[nx][ny]==1){
                            rotten.push({nx,ny});
                            grid[nx][ny]=2;
                        }
                    }
                }
            if(!rotten.empty())    mins++;
            }
  cout<<count<<" "<<total<<" "<<mins;
        return total==count ? mins:-1 ;

        }
};