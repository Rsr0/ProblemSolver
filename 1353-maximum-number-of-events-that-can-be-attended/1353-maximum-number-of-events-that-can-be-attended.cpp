class Solution {
public:
    int maxEvents(vector<vector<int>>& events) {
        int n=events.size();
        sort(events.begin(), events.end());
        priority_queue<int, vector<int>, greater<int>> pq;
         int i=0, res=0, d=0;
        while(pq.size()>0 || i<n){
            if(pq.size()==0) 
                d=events[i][0];
            
            while(i<n && events[i][0]<=d)
                pq.push(events[i++][1]);
            
            pq.pop();
            res++, d++;
            while(pq.size()>0 && pq.top()<d)
                pq.pop();
            }
        return res;
    }
};