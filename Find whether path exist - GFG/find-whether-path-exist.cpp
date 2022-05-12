// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
   bool isValid(int x, int y, int n, int m){
        return (x >= 0 and x < n and y >=0 and y < m);
    }
 
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        vector<pair<int,int>> d={{0,1},{0,-1},{1,0},{-1,0}};
        int n=grid.size(), m=grid[0].size();
        queue<pair<int,int>>q;
        for(int i=0;i<n;i++)
            for(int j=0;j<m;j++)
                if(grid[i][j]==1)
                    q.push({i,j});
            
        while(!q.empty()){
            int x=q.front().first, y=q.front().second;
            q.pop();
            for(int i=0;i<4;i++){
                int nx=x+d[i].first;
                int ny=y+d[i].second;
                if(isValid(nx,ny,n,m)){
                    if(grid[nx][ny]==2) return 1;
                    if(grid[nx][ny]==3){
                        grid[nx][ny]=1;
                        q.push({nx,ny});
                    }
                }
            }
        }
        return 0;
    }
};

// { Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>grid(n, vector<int>(n, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < n; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		bool ans = obj.is_Possible(grid);
		cout << ((ans) ? "1\n" : "0\n");
	}
	return 0;
}  // } Driver Code Ends