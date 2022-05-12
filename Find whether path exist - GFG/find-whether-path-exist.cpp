// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

 // } Driver Code Ends


class Solution
{
    public:
    //Function to find whether a path exists from the source to destination.
    
    bool isPath(vector<vector<int>>& grid, int sr, int sc, int dr, int dc){
        if(sr==dr && sc==dc)
            return 1;
        if(sr<0 || sr>=grid.size() || sc<0 || sc>=grid[0].size() || grid[sr][sc]==0 || grid[sr][sc]==-1) 
            return 0;
        grid[sr][sc]=-1;

            return (isPath(grid, sr-1,sc,dr,dc) || isPath(grid, sr+1,sc,dr,dc) 
                    || isPath(grid, sr,sc-1,dr,dc) || isPath(grid, sr,sc+1,dr,dc));
        
    }
    
    bool is_Possible(vector<vector<int>>& grid) 
    {
        //code here
        int n=grid.size(), m=grid[0].size();
        int sr,sc,dr,dc;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    sr=i, sc=j;
                }
                
                if(grid[i][j]==2){
                    dr=i, dc=j;
                }
            }
        }
       
        return isPath(grid, sr,sc,dr,dc);
        // return 1;
        
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