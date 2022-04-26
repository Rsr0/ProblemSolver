class Solution {
public:
    
    int distance(vector<int>& p1, vector<int>& p2){
        return abs(p1[0]-p2[0]) + abs(p1[1]-p2[1]);
    }
    
    int minCostConnectPoints(vector<vector<int>>& points) {
        int n=points.size(), curr=0, ans=0;
        vector<bool> vis(n,0);
        vector<int> minCost(n,INT_MAX); // track min cost between points
        minCost[0]=0;
        
        while(curr>=0){
            vis[curr]=1;
            int next=-1;
            int curr_min=INT_MAX;
            for(int i=0;i<n;i++){
                if(vis[i] || curr==i)   continue;
                minCost[i]=min(distance(points[curr], points[i]), minCost[i]);
                if(minCost[i]<curr_min){
                    curr_min=minCost[i];
                    next=i;
                }
            }
            if(curr_min!=INT_MAX)
                ans+=curr_min;
            curr=next;
        }
        return ans;
    }
};