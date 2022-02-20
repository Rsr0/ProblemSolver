class Solution {
public:
    int removeCoveredIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        
        int st=intervals[0][0], end=intervals[0][1];
        int cnt=1;
        for(int i=1;i<intervals.size();i++){
            if(st==intervals[i][0])
                end=intervals[i][1];
            
            else if(st < intervals[i][0] &&  intervals[i][1] <= end )
                continue;
            else{
                cnt++;
                st=intervals[i][0];
                end=intervals[i][1];
                }
        }
        return cnt;
    }
};