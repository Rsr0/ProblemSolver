class Solution {
public:
    int minRefuelStops(int target, int startFuel, vector<vector<int>>& stations) {
        priority_queue<int> pq;
        stations.push_back({target, 0});  
        int cnt=0, curr=startFuel;
        
        for(int i=0;i<stations.size();i++){
            curr-=stations[i][0] - (i==0 ? 0 : stations[i-1][0]);
            while(curr<0 && !pq.empty()){ // fueling
                curr+=pq.top();
                pq.pop();
                cnt++;
            }
            if(curr<0) return -1;
            pq.push(stations[i][1]);
        }
        return cnt;
    }
};