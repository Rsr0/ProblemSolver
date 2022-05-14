class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> dist(n+1, INT_MAX);
        dist[k]=0;
        for(int i=0;i<n;i++){
            vector<int> old_dist = dist;
            for(auto e:times){
                int u=e[0], v=e[1], w=e[2];
                if(dist[u]!=INT_MAX && dist[v]>dist[u]+w)
                    dist[v]=dist[u]+w;
            }
            if(old_dist==dist)
                break;
        }
        int ans=0;
        for(int i=1;i<=n;i++)
            ans=max(ans,dist[i]);
        
        return ans==INT_MAX ? -1 : ans;
    }
};