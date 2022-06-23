class Solution {
    bool static cmp(vector<int>&a, vector<int>&b){
        return a[1]<b[1];
    }
public:
    int scheduleCourse(vector<vector<int>>& courses) {
        int total_time=0;
        priority_queue<int> pq;
        sort(courses.begin(), courses.end(),cmp);
        
        for(auto c:courses){
            int dur=c[0], end=c[1];
            total_time+=dur;
            if(end >= total_time)
                pq.push(dur);
            else if(pq.size() && pq.top()>dur){
               total_time-=pq.top();
                pq.pop(); 
                pq.push(dur);
            }
          else
              total_time-=dur;
        }
        return pq.size();
    }
};