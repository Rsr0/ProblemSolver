// { Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


 // } Driver Code Ends
//User function Template for C++

class Solution {
public:

int vis[11][11];

void dfs(vector<vector<int>> &mat, int xs, int ys, int xd, int yd, int &ans, int cnt){
    if(xs==xd && ys==yd){
        ans=max(ans,cnt);
        return;
    }    
    int n=mat.size(), m=mat[0].size();
    if(xs<0 || ys<0 || xs>=n || ys>=m)
        return;
    if(vis[xs][ys] || mat[xs][ys]==0)
        return;
    
    vis[xs][ys]=1;
    dfs(mat, xs+1, ys, xd, yd, ans, cnt+1);
    dfs(mat, xs, ys+1, xd, yd, ans, cnt+1);
    dfs(mat, xs-1, ys, xd, yd, ans, cnt+1);
    dfs(mat, xs, ys-1, xd, yd, ans, cnt+1);
    
    vis[xs][ys]=0;
}

    int longestPath(vector<vector<int>> matrix, int xs, int ys, int xd, int yd)
    {
        // code here
        memset(vis,0,sizeof(vis));
        if(matrix[xs][ys]==0 || matrix[xd][yd]==0)
            return -1;
        int ans=INT_MIN;
        dfs(matrix, xs, ys, xd, yd, ans, 0);
        return ans==INT_MIN? -1:ans;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int xs, ys, xd, yd;
        cin >> xs >> ys >> xd >> yd;
        vector<vector<int>> mat(n, vector<int>(m));
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
                cin >> mat[i][j];
            }
        }
        Solution ob;
        int ans = ob.longestPath(mat, xs, ys, xd, yd);
        cout << ans;
        cout << "\n";
    }
    return 0;
}  // } Driver Code Ends