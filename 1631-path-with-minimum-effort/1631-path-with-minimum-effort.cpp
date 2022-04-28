class Solution {
public:
    int dx[4] = {0, 0, -1, 1};
    int dy[4] = {1, -1, 0, 0};
    int n,m;
    bool isValid(int x, int y){
        return (x>=0 && y>=0 && x<n && y<m);
    }
    
    bool bfs(vector<vector<int>>& heights, int k){
        queue<pair<int,int>> q;
        q.push({0,0});
        vector<vector<bool>> vis(n, vector<bool>(m, 0));
        vis[0][0]=1;
        while(!q.empty()){
            auto curr=q.front();
            q.pop();
            int cx = curr.first, cy = curr.second;
            if(cx==n-1 && cy==m-1)  return 1;
            for(int i=0;i<4;i++){
                int x=dx[i]+cx, y=dy[i]+cy;
                if(isValid(x,y) && !vis[x][y]){
                     if (abs(heights[cx][cy] - heights[x][y]) <= k){
                         vis[x][y]=1;
                         q.push({x,y});
                     }
                }
            }
        }
        return 0;
    }
    
    int minimumEffortPath(vector<vector<int>>& heights) {
        int lo=0, hi=1e6, ans=-1;
        n=heights.size(), m=heights[0].size();
        while(lo<=hi){
            int mid = lo + (hi - lo) / 2;
            if(bfs(heights, mid)){
                ans=mid;
                hi=mid-1;
            }
            else
                lo=mid+1;
        }
        return ans;
    }
};